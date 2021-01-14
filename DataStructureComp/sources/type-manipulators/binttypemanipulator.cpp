#include "headers/type-manipulators/binttypemanipulator.h"

void BinaryTreeTypeManipulator::initialize()
{

}

void BinaryTreeTypeManipulator::insert(int key)
{
    btree.insert(key);
}

void BinaryTreeTypeManipulator::remove(int key)
{
    BinaryTreeNode *node = btree.removeUsingPredecessor(key);
    if (node != nullptr)
        delete node;
}

void BinaryTreeTypeManipulator::search(int key)
{
    btree.search(key);
}

void BinaryTreeTypeManipulator::destroy()
{

}

void BinaryTreeTypeManipulator::clearEntries()
{
    btree.dealockNodes();
}

