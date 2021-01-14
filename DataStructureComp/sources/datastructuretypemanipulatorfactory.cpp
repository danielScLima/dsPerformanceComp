#include "headers/datastructuretypemanipulatorfactory.h"

#include "headers/type-manipulators/queuetypemanipulator.h"
#include "headers/type-manipulators/stacktypemanipulator.h"
#include "headers/type-manipulators/listtypemanipulator.h"
#include "headers/type-manipulators/listcirculartypemanipulator.h"
#include "headers/type-manipulators/doubledlinkedlisttypemanipulator.h"
#include "headers/type-manipulators/doubledlinkedlistcirculartypemanipulator.h"
#include "headers/type-manipulators/ptbslktypemanipulator.h"
#include "headers/type-manipulators/ptbsvlktypemanipulator.h"
#include "headers/type-manipulators/trietypemanipulator.h"
#include "headers/type-manipulators/BinHtypemanipulator.h"
#include "headers/type-manipulators/fibHtypemanipulator.h"
#include "headers/type-manipulators/lefHtypemanipulator.h"
#include "headers/type-manipulators/maxHtypemanipulator.h"
#include "headers/type-manipulators/minHtypemanipulator.h"
#include "headers/type-manipulators/minmaxHtypemanipulator.h"
#include "headers/type-manipulators/skewHtypemanipulator.h"
#include "headers/type-manipulators/avltypemanipulator.h"
#include "headers/type-manipulators/binttypemanipulator.h"
#include "headers/type-manipulators/bplustreetypemanipulator.h"
#include "headers/type-manipulators/bstartreetypemanipulator.h"
#include "headers/type-manipulators/btreetypemanipulator.h"
#include "headers/type-manipulators/radixttypemanipulator.h"
#include "headers/type-manipulators/redblacktypemanipulator.h"
#include "headers/type-manipulators/splaytypemanipulator.h"
#include "headers/type-manipulators/tsttypemanipulator.h"
#include "headers/type-manipulators/tree23typemanipulator.h"

DataStructureTypeManipulatorFactory::MapOfCallbacks DataStructureTypeManipulatorFactory::mapOfCallbacks =
{
    {
        DataStrucutureType::Queue,
        &DataStructureTypeManipulatorFactory::makeQueueManipulator
    },
    {
        DataStrucutureType::Stack,
        &DataStructureTypeManipulatorFactory::makeStackManipulator
    },
    {
        DataStrucutureType::List,
        &DataStructureTypeManipulatorFactory::makeListManipulator
    },
    {
        DataStrucutureType::ListCircular,
        &DataStructureTypeManipulatorFactory::makeListCircularManipulator
    },
    {
        DataStrucutureType::DoubledLinkedList,
        &DataStructureTypeManipulatorFactory::makeDoubledLinkedListManipulator
    },
    {
        DataStrucutureType::DoubledLinkedListCircular,
        &DataStructureTypeManipulatorFactory::makeDoubledLinkedListCircularManipulator
    },
    {
        DataStrucutureType::PatriciaTreeBinarySameLenKeys,
        &DataStructureTypeManipulatorFactory::makePTBSLKManipulator
    },
    {
        DataStrucutureType::PatriciaTreeStoreBinaryDifferentLenKeys,
        &DataStructureTypeManipulatorFactory::makePTBSVLKManipulator
    },
    {
        DataStrucutureType::TrieOrPrefixTree,
        &DataStructureTypeManipulatorFactory::makeTrieManipulator
    },
    {
        DataStrucutureType::BinomialHeap,
        &DataStructureTypeManipulatorFactory::makeBinHeapManipulator
    },
    {
        DataStrucutureType::FibonacciHeap,
        &DataStructureTypeManipulatorFactory::makeFibHeapManipulator
    },
    {
        DataStrucutureType::LeftistHeap,
        &DataStructureTypeManipulatorFactory::makeLeftistHeapManipulator
    },
    {
        DataStrucutureType::MaxHeap,
        &DataStructureTypeManipulatorFactory::makeMaxHeapManipulator
    },
    {
        DataStrucutureType::MinHeap,
        &DataStructureTypeManipulatorFactory::makeMinHeapManipulator
    },
    {
        DataStrucutureType::MinMaxHeap,
        &DataStructureTypeManipulatorFactory::makeMinMaxHeapManipulator
    },
    {
        DataStrucutureType::SkewHeap,
        &DataStructureTypeManipulatorFactory::makeSkewHeapManipulator
    },
    {
        DataStrucutureType::AvlTree,
        &DataStructureTypeManipulatorFactory::makeAvlManipulator
    },
    {
        DataStrucutureType::BinaryTree,
        &DataStructureTypeManipulatorFactory::makeBinTreeManipulator
    },
    {
        DataStrucutureType::BPlusTree,
        &DataStructureTypeManipulatorFactory::makeBPlusTreeManipulator
    },
    {
        DataStrucutureType::BStarTree,
        &DataStructureTypeManipulatorFactory::makeBStarTreeManipulator
    },
    {
        DataStrucutureType::BTree,
        &DataStructureTypeManipulatorFactory::makeBTreeManipulator
    },
    {
        DataStrucutureType::RadixTree,
        &DataStructureTypeManipulatorFactory::makeRadixTreeManipulator
    },
    {
        DataStrucutureType::RedBlackTree,
        &DataStructureTypeManipulatorFactory::makeRedBlackTreeManipulator
    },
    {
        DataStrucutureType::SplayTree,
        &DataStructureTypeManipulatorFactory::makeSplayTreeManipulator
    },
    {
        DataStrucutureType::TernarySearchTree,
        &DataStructureTypeManipulatorFactory::makeTSTManipulator
    },
    {
        DataStrucutureType::Tree23,
        &DataStructureTypeManipulatorFactory::makeTree23Manipulator
    }
};

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeQueueManipulator()
{
    return (new QueueTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeStackManipulator()
{
    return (new StackTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeListManipulator()
{
    return (new ListTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeListCircularManipulator()
{
    return (new ListCircularTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeDoubledLinkedListManipulator()
{
    return (new DoubledLinkedListTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeDoubledLinkedListCircularManipulator()
{
    return (new DoubledLinkedListCircularTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makePTBSLKManipulator()
{
    return (new PTBSLKTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makePTBSVLKManipulator()
{
    return (new PTBSVLKTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeTrieManipulator()
{
    return (new TrieTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeBinHeapManipulator()
{
    return (new BinomialHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeFibHeapManipulator()
{
    return (new FibonacciHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeLeftistHeapManipulator()
{
    return (new LeftistHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeMaxHeapManipulator()
{
    return (new MaxHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeMinHeapManipulator()
{
    return (new MinHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeMinMaxHeapManipulator()
{
    return (new MinMaxHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeSkewHeapManipulator()
{
    return (new SkewHeapTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeAvlManipulator()
{
    return (new AvlTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeBinTreeManipulator()
{
    return (new BinaryTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeBPlusTreeManipulator()
{
    return (new BPlusTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeBStarTreeManipulator()
{
    return (new BStarTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeBTreeManipulator()
{
    return (new BTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeRadixTreeManipulator()
{
    return (new RadixTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeRedBlackTreeManipulator()
{
    return (new RedBlackTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeSplayTreeManipulator()
{
    return (new SplayTreeTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeTSTManipulator()
{
    return (new TSTTypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::makeTree23Manipulator()
{
    return (new Tree23TypeManipulator());
}

DataStructureTypeManipulator* DataStructureTypeManipulatorFactory::make(DataStrucutureType dataStrucutureType)
{
    auto lambda = mapOfCallbacks.find(dataStrucutureType);
    if (lambda == mapOfCallbacks.end())
    {
        throw std::invalid_argument("DataStructureTypeManipulatorFactory::make: invalid dataStrucutureType");
    }
    return lambda->second();
}
