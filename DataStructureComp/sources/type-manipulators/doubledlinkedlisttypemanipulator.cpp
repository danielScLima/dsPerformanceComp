#include "headers/type-manipulators/doubledlinkedlisttypemanipulator.h"

void DoubledLinkedListTypeManipulator::initialize()
{

}

void DoubledLinkedListTypeManipulator::insert(const std::string& key)
{
    list.insertInHead(key);
}

void DoubledLinkedListTypeManipulator::remove(const std::string& key)
{
    DoubledLinkedNode* node = list.removeInHead(); //it was adapted
    delete node;
}

void DoubledLinkedListTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void DoubledLinkedListTypeManipulator::destroy()
{

}

