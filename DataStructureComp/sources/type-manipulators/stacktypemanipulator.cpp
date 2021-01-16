#include "headers/type-manipulators/stacktypemanipulator.h"
#include <stdexcept>

void StackTypeManipulator::initialize()
{

}

void StackTypeManipulator::insert(const std::string& key)
{
    stack.insertNode(key);
}

void StackTypeManipulator::remove(const std::string& key)
{
    NodeOfStack* node = stack.removeNode(); //it was adapted
    delete node;
}

void StackTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void StackTypeManipulator::destroy()
{

}

