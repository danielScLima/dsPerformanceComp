#include "headers/type-manipulators/listcirculartypemanipulator.h"
#include <stdexcept>

void ListCircularTypeManipulator::initialize()
{

}

void ListCircularTypeManipulator::insert(const std::string& key)
{
    list.insertBeforeStart(key);
}

void ListCircularTypeManipulator::remove(const std::string& key)
{
    CircularLinkedNode* node = list.removeAfterStart(); //it was adapted
    delete node;
}

void ListCircularTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void ListCircularTypeManipulator::destroy()
{

}

