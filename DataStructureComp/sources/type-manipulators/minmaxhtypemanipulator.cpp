#include "headers/type-manipulators/minmaxHtypemanipulator.h"

void MinMaxHeapTypeManipulator::initialize()
{

}

void MinMaxHeapTypeManipulator::insert(int key)
{
    mh.insertInterface(key);
}

void MinMaxHeapTypeManipulator::remove(int key)
{
    mh.removeTheSmallerNumber();
}

void MinMaxHeapTypeManipulator::search(int key)
{

}

void MinMaxHeapTypeManipulator::destroy()
{

}

