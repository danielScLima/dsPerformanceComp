#include "headers/type-manipulators/splaytypemanipulator.h"

void SplayTreeTypeManipulator::initialize()
{

}

void SplayTreeTypeManipulator::insert(int key)
{
    stree.insertInterface(key);
}

void SplayTreeTypeManipulator::remove(int key)
{
    NodeOfSplayTree * node = stree.removeInterface(key);
    if (node != nullptr)
        delete node;
}

void SplayTreeTypeManipulator::search(int key)
{
    stree.searchInterface(key);
}

void SplayTreeTypeManipulator::destroy()
{

}

void SplayTreeTypeManipulator::clearEntries()
{
    stree.cleanTree();
}

