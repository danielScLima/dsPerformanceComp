#include "headers/type-manipulators/radixttypemanipulator.h"

void RadixTreeTypeManipulator::initialize()
{

}

void RadixTreeTypeManipulator::insert(const std::string& key)
{
    rtree.insert(key);
}

void RadixTreeTypeManipulator::remove(const std::string& key)
{
    rtree.remove(key);
}

void RadixTreeTypeManipulator::search(const std::string& key)
{
    rtree.search(key);
}

void RadixTreeTypeManipulator::destroy()
{

}

void RadixTreeTypeManipulator::clearEntries()
{
    rtree.cleanTree();
}

