#include "headers/type-manipulators/tsttypemanipulator.h"

void TSTTypeManipulator::initialize()
{

}

void TSTTypeManipulator::insert(const std::string& key)
{
    tst.insert(key);
}

void TSTTypeManipulator::remove(const std::string& key)
{
    tst.remove(key);
}

void TSTTypeManipulator::search(const std::string& key)
{
    tst.search(key);
}

void TSTTypeManipulator::destroy()
{

}

void TSTTypeManipulator::clearEntries()
{
    tst.cleanTree();
}

