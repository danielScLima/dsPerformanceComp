#include "headers/type-manipulators/bplustreetypemanipulator.h"

void BPlusTreeTypeManipulator::initialize()
{

}

void BPlusTreeTypeManipulator::insert(int key)
{
    btree.insert(key);
}

void BPlusTreeTypeManipulator::remove(int key)
{
    btree.remove(key);
}

void BPlusTreeTypeManipulator::search(int key)
{
    btree.search(key);
}

void BPlusTreeTypeManipulator::destroy()
{

}

void BPlusTreeTypeManipulator::clearEntries()
{
    btree.dealockNodeOfBTrees();
}

