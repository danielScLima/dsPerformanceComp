#include "headers/type-manipulators/ptbslktypemanipulator.h"

void PTBSLKTypeManipulator::initialize()
{
    tree = new PatriciaTreeBinarySameLenKeysDataStructure(14);//14 bits
}

void PTBSLKTypeManipulator::insert(const std::string& key)
{
    tree->insert(key);
}

void PTBSLKTypeManipulator::remove(const std::string& key)
{
    NodeOfPatriciaTreeBinarySameLenKeys* node = tree->remove(key); //it was adapted
    delete node;
}

void PTBSLKTypeManipulator::search(const std::string& key)
{
    NodeOfPatriciaTreeBinarySameLenKeys* node = tree->search(key);
}

void PTBSLKTypeManipulator::destroy()
{
    if (tree != nullptr)
        delete tree;
}

void PTBSLKTypeManipulator::clearEntries()
{
    if (tree->getRoot() != nullptr)
    {
        tree->getRoot()->dealockSubtree();
        delete tree->getRoot();
        tree->clearRoot();
    }
}

