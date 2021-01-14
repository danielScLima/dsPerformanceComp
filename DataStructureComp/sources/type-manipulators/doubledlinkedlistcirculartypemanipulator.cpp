#include "headers/type-manipulators/doubledlinkedlistcirculartypemanipulator.h"

void DoubledLinkedListCircularTypeManipulator::initialize()
{

}

void DoubledLinkedListCircularTypeManipulator::insert(const std::string& key)
{
    list.insertAfterStart(key);
}

void DoubledLinkedListCircularTypeManipulator::remove(const std::string& key)
{
    DoubledLinkedCircularNode* node = list.removeAfterStart(); //it was adapted
    delete node;
}

void DoubledLinkedListCircularTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void DoubledLinkedListCircularTypeManipulator::destroy()
{

}

