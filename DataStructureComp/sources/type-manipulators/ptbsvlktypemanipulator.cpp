#include "headers/type-manipulators/ptbsvlktypemanipulator.h"

void PTBSVLKTypeManipulator::initialize()
{
    tree = new PatriciaTreeStoreBinaryDifferentLenKeysDS();
}

void PTBSVLKTypeManipulator::insert(const std::string& key)
{
    tree->insert(key);
}

void PTBSVLKTypeManipulator::remove(const std::string& key)
{
    NodeOfPatriciaTreeStoreBinaryDifferentLenKeys* node =
            tree->remove(key); //it was adapted
    delete node;
}

void PTBSVLKTypeManipulator::search(const std::string& key)
{
    NodeOfPatriciaTreeStoreBinaryDifferentLenKeys* node =
            tree->search(key);
}

void PTBSVLKTypeManipulator::destroy()
{
    if (tree != nullptr)
        delete tree;
}

void PTBSVLKTypeManipulator::clearEntries()
{
    if (tree->getRoot() != nullptr)
    {
        tree->getRoot()->dealockSubtree();
        delete tree->getRoot();
        tree->clearRoot();
    }
}

