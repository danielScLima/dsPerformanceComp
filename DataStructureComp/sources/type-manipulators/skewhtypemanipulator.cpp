#include "headers/type-manipulators/skewHtypemanipulator.h"

void SkewHeapTypeManipulator::initialize()
{

}

void SkewHeapTypeManipulator::insert(int key)
{
    sh.insert(key);
}

void SkewHeapTypeManipulator::remove(int key)
{
    SkewHeapNode* node = sh.removeMin();
    if (node != nullptr)
        delete node;
}

void SkewHeapTypeManipulator::search(int key)
{
    sh.search(key);
}

void SkewHeapTypeManipulator::destroy()
{

}

