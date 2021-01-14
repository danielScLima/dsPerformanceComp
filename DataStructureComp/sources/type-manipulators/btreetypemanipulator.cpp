#include "headers/type-manipulators/btreetypemanipulator.h"

void BTreeTypeManipulator::initialize()
{

}

void BTreeTypeManipulator::insert(int key)
{
    btree.insert(key);
}

void BTreeTypeManipulator::remove(int key)
{
    btree.remove(key);
}

void BTreeTypeManipulator::search(int key)
{
    btree.search(key);
}

void BTreeTypeManipulator::destroy()
{

}

void BTreeTypeManipulator::clearEntries()
{
    btree.dealockNodeOfBTrees();
}

