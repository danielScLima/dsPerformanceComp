#ifndef COMPARISSONRUNNER_H
#define COMPARISSONRUNNER_H

#include <vector>
#include <iostream>

#include "headers/datastructureenumtypes.h"
#include "headers/simulationresults.h"

#include <functional>
#include <map>

class DataStructureTypeManipulator;

/*!
 * \brief The ComparissonRunner class
 */
class ComparissonRunner
{
public:
    using SPtrSettingsFunc =  std::function<int(DataStructureTypeManipulator* manip, int count)>;
    using MapOfCallbacks = std::map<int, SPtrSettingsFunc>;
    static MapOfCallbacks mapOfCallbacks;

    /*!
     * \brief ComparissonRunner
     */
    ComparissonRunner()
    {}

    SimulationResults run
    (
        int optionToRun, //0-insert, 1-remove,2search
        const std::vector<EnumDataStructureType> vec,
        int sizeOfUsedCounts = 5
    );

    static int makeInsert(DataStructureTypeManipulator* manipulator, long int count);
    static int makeSearch(DataStructureTypeManipulator* manipulator, long int count);
    static int makeRemove(DataStructureTypeManipulator* manipulator, long int count);
private:
    long int getValue(int operationType, DataStructureTypeManipulator* manipulator, long int count);
};

#endif // COMPARISSONRUNNER_H
