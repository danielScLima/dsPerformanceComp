#ifndef SIMULATIONRESULTS_H
#define SIMULATIONRESULTS_H

#include <vector>
#include "headers/datastructureenumtypesdefinition.h"
#include "headers/datastructureenumtypes.h"

struct ResultsToType
{
    EnumDataStructureType enumDataStrucutureType;
    std::vector<long int> times;
};

struct SimulationResults
{
    int operation;
    std::vector<long int> usedCounts;
    std::vector<ResultsToType> vectorOfResultsToType;
};

#endif // SIMULATIONRESULTS_H
