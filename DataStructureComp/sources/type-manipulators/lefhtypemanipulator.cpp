#include "headers/type-manipulators/lefHtypemanipulator.h"

void LeftistHeapTypeManipulator::initialize()
{

}

void LeftistHeapTypeManipulator::insert(int key)
{
    lh.insert(key);
}

void LeftistHeapTypeManipulator::remove(int key)
{
    LeftistHeapNode* node = lh.removeMin();
    if (node != nullptr)
        delete node;
}

void LeftistHeapTypeManipulator::search(int key)
{
    lh.search(key);
}

void LeftistHeapTypeManipulator::destroy()
{

}

