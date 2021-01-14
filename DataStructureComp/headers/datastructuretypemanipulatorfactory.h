#ifndef DATASTRUCTURETYPEMANIPULATORFACTORY_H
#define DATASTRUCTURETYPEMANIPULATORFACTORY_H

#include <functional>
#include <map>

#include "headers/datastructuretypemanipulator.h"
#include "headers/datastructureenumtypes.h"

class DataStructureTypeManipulatorFactory
{
public:
    using SPtrSettingsFunc =  std::function<DataStructureTypeManipulator*()>;
    using MapOfCallbacks = std::map<DataStrucutureType, SPtrSettingsFunc>;
    static MapOfCallbacks mapOfCallbacks;

    static DataStructureTypeManipulator* makeQueueManipulator();

    static DataStructureTypeManipulator* makeStackManipulator();

    static DataStructureTypeManipulator* makeListManipulator();

    static DataStructureTypeManipulator* makeListCircularManipulator();

    static DataStructureTypeManipulator* makeDoubledLinkedListManipulator();

    static DataStructureTypeManipulator* makeDoubledLinkedListCircularManipulator();

    static DataStructureTypeManipulator* makePTBSLKManipulator();

    static DataStructureTypeManipulator* makePTBSVLKManipulator();

    static DataStructureTypeManipulator* makeTrieManipulator();

    static DataStructureTypeManipulator* makeBinHeapManipulator();

    static DataStructureTypeManipulator* makeFibHeapManipulator();

    static DataStructureTypeManipulator* makeLeftistHeapManipulator();

    static DataStructureTypeManipulator* makeMaxHeapManipulator();

    static DataStructureTypeManipulator* makeMinHeapManipulator();

    static DataStructureTypeManipulator* makeMinMaxHeapManipulator();

    static DataStructureTypeManipulator* makeSkewHeapManipulator();

    static DataStructureTypeManipulator* makeAvlManipulator();

    static DataStructureTypeManipulator* makeBinTreeManipulator();

    static DataStructureTypeManipulator* makeBPlusTreeManipulator();

    static DataStructureTypeManipulator* makeBStarTreeManipulator();

    static DataStructureTypeManipulator* makeBTreeManipulator();

    static DataStructureTypeManipulator* makeRadixTreeManipulator();

    static DataStructureTypeManipulator* makeRedBlackTreeManipulator();

    static DataStructureTypeManipulator* makeSplayTreeManipulator();

    static DataStructureTypeManipulator* makeTSTManipulator();

    static DataStructureTypeManipulator* makeTree23Manipulator();

    static DataStructureTypeManipulator* make
    (
        DataStrucutureType dataStrucutureType
    );
};





#endif // DATASTRUCTURETYPEMANIPULATORFACTORY_H
