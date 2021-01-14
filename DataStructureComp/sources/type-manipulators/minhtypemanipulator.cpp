#include "headers/type-manipulators/minHtypemanipulator.h"

void MinHeapTypeManipulator::initialize()
{

}

void MinHeapTypeManipulator::insert(int key)
{
    mh.insertInterface(key);
}

void MinHeapTypeManipulator::remove(int key)
{
    mh.removeTheSmallerNumber();
}

void MinHeapTypeManipulator::search(int key)
{

}

void MinHeapTypeManipulator::destroy()
{

}

