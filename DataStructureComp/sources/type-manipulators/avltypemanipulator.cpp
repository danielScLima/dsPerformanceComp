#include "headers/type-manipulators/avltypemanipulator.h"

void AvlTypeManipulator::initialize()
{

}

void AvlTypeManipulator::insert(int key)
{
    avl.insertInterface(key);
}

void AvlTypeManipulator::remove(int key)
{
    AVLNode* node = avl.removeInterface(key);
    if (node != nullptr)
        delete node;
}

void AvlTypeManipulator::search(int key)
{
    avl.search(key);
}

void AvlTypeManipulator::destroy()
{

}

void AvlTypeManipulator::clearEntries()
{
    avl.dealockNodes();
}

