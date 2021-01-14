#include "headers/type-manipulators/BinHtypemanipulator.h"

void BinomialHeapTypeManipulator::initialize()
{

}

void BinomialHeapTypeManipulator::insert(int key)
{
    bh.insertBeforeStart(key);
}

void BinomialHeapTypeManipulator::remove(int key)
{
    BinomialHeapNode* node = bh.deleteMinInterface();
    if (node != nullptr)
        delete node;
}

void BinomialHeapTypeManipulator::search(int key)
{
    bh.search(key);
}

void BinomialHeapTypeManipulator::destroy()
{

}

