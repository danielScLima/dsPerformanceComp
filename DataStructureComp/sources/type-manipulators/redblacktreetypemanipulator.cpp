#include "headers/type-manipulators/redblacktypemanipulator.h"

void RedBlackTreeTypeManipulator::initialize()
{

}

void RedBlackTreeTypeManipulator::insert(int key)
{
    rbtree.insertInterface(key);
}

void RedBlackTreeTypeManipulator::remove(int key)
{
    NodeOfRedBlackTree* node = rbtree.removeInterface(key);
    if (node != nullptr)
        delete node;
}

void RedBlackTreeTypeManipulator::search(int key)
{
    rbtree.search(key);
}

void RedBlackTreeTypeManipulator::destroy()
{

}

void RedBlackTreeTypeManipulator::clearEntries()
{
    rbtree.cleanTree();
}

