#include "headers/type-manipulators/maxHtypemanipulator.h"

void MaxHeapTypeManipulator::initialize()
{

}

void MaxHeapTypeManipulator::insert(int key)
{
    mh.insertInterface(key);
}

void MaxHeapTypeManipulator::remove(int key)
{
    mh.removeTheHighestNumber();
}

void MaxHeapTypeManipulator::search(int key)
{

}

void MaxHeapTypeManipulator::destroy()
{

}

