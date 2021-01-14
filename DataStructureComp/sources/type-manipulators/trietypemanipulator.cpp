#include "headers/type-manipulators/trietypemanipulator.h"

void TrieTypeManipulator::initialize()
{
    tree = new TrieOrPrefixTreeDS();
}

void TrieTypeManipulator::insert(const std::string& key)
{
    tree->insert(key);
}

void TrieTypeManipulator::remove(const std::string& key)
{
    tree->remove(key); //it was adapted
}

void TrieTypeManipulator::search(const std::string& key)
{
    tree->search(key);
}

void TrieTypeManipulator::destroy()
{
    if (tree != nullptr)
        delete tree;
}

void TrieTypeManipulator::clearEntries()
{
    if (tree->getRoot() != nullptr)
    {
        tree->getRoot()->dealockSubTree();
        tree->getRoot()->vec.clear();
        //delete tree->getRoot();
        //tree->clearRoot();
    }
}

