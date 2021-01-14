#include "headers/type-manipulators/listtypemanipulator.h"

void ListTypeManipulator::initialize()
{

}

void ListTypeManipulator::insert(const std::string& key)
{
    list.insertInHead(key);
}

void ListTypeManipulator::remove(const std::string& key)
{
    NodeOfList* node = list.removeInHead(); //it was adapted
    delete node;
}

void ListTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void ListTypeManipulator::destroy()
{

}

