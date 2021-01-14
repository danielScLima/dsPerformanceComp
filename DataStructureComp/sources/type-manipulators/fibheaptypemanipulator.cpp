#include "headers/type-manipulators/fibHtypemanipulator.h"

void FibonacciHeapTypeManipulator::initialize()
{

}

void FibonacciHeapTypeManipulator::insert(int key)
{
    fh.insertBeforeStart(key);
}

void FibonacciHeapTypeManipulator::remove(int key)
{
    FibonacciHeapNode* node = fh.deleteMinInterface();
    if (node != nullptr)
        delete node;
}

void FibonacciHeapTypeManipulator::search(int key)
{
    fh.search(key);
}

void FibonacciHeapTypeManipulator::destroy()
{

}

