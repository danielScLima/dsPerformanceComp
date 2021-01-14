#include "headers/type-manipulators/bstartreetypemanipulator.h"

void BStarTreeTypeManipulator::initialize()
{

}

void BStarTreeTypeManipulator::insert(int key)
{
    btree.insert(key);
}

void BStarTreeTypeManipulator::remove(int key)
{
    btree.remove(key);
}

void BStarTreeTypeManipulator::search(int key)
{
    btree.search(key);
}

void BStarTreeTypeManipulator::destroy()
{

}

void BStarTreeTypeManipulator::clearEntries()
{
    btree.dealockNodeOfBTrees();
}

