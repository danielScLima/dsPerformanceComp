#include "headers/comparissonrunner.h"
#include "headers/datastructuretypemanipulatorfactory.h"

#include <math.h>

ComparissonRunner::MapOfCallbacks ComparissonRunner::mapOfCallbacks =
{
    {0, &ComparissonRunner::makeInsert},
    {1, &ComparissonRunner::makeInsert},
    {2, &ComparissonRunner::makeInsert}
};

int ComparissonRunner::makeInsert
(
    DataStructureTypeManipulator* manipulator,
    long int count
)
{
    return manipulator->insertAndComputeTime(count);
}

int ComparissonRunner::makeSearch
(
    DataStructureTypeManipulator* manipulator,
    long int count
)
{
    return manipulator->insertSearchAndComputeTimeOfSearch(count);
}

int ComparissonRunner::makeRemove
(
    DataStructureTypeManipulator* manipulator,
    long int count
)
{
    return manipulator->insertRemoveAndComputeTimeOfRemove(count);
}

SimulationResults ComparissonRunner::run
(
    int optionToRun, //0-insert, 1-remove,2search
    const std::vector<EnumDataStructureType> vec,
    int sizeOfUsedCounts
)
{
    SimulationResults simulationResults;
    simulationResults.operation = optionToRun;

    for(int index = 1;index<=sizeOfUsedCounts;++index)
    {
        int count = pow(10, index);
        simulationResults.usedCounts.push_back(count);
    }

    DataStructureTypeManipulator* manipulator = nullptr;
    for (auto enumType: vec)
    {
        ResultsToType resultsToType;
        //resultsToType.dataStrucutureType = enumType.getType();
        resultsToType.enumDataStrucutureType = enumType;
        std::vector<long int> times;

        manipulator = DataStructureTypeManipulatorFactory::make
        (
            enumType.getType()
        );

        bool hasFunc = manipulator->hasTheFunction(optionToRun);
        if (!hasFunc)
        {
            //throw std::invalid_argument(enumType.getValue());
            throw std::runtime_error(enumType.getValue());
        }

        //uses optionToRun, to execute the right option
        for(int index = 1;index<=sizeOfUsedCounts;++index)
        {
            long int count = pow(10, index);
            long int ret = this->getValue(optionToRun, manipulator, count);
            times.push_back(ret);
        }

        resultsToType.times = times;
        simulationResults.vectorOfResultsToType.push_back(resultsToType);
    }

    return simulationResults;
}

long int ComparissonRunner::getValue(int operationType, DataStructureTypeManipulator* manipulator, long int count)
{
    auto lambda = mapOfCallbacks.find(operationType);
    if (lambda == mapOfCallbacks.end())
    {
        throw std::invalid_argument("ComparissonRunner::make: invalid operationType");
    }
    return lambda->second(manipulator, count);
}
