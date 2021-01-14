#include "headers/type-manipulators/tree23typemanipulator.h"

void Tree23TypeManipulator::initialize()
{

}

void Tree23TypeManipulator::insert(int key)
{
    tree.insert(key);
}

void Tree23TypeManipulator::remove(int key)
{
    tree.remove(key);
}

void Tree23TypeManipulator::search(int key)
{
    tree.search(key);
}

void Tree23TypeManipulator::destroy()
{

}

void Tree23TypeManipulator::clearEntries()
{
    tree.dealockNodeOfBTrees();
}

