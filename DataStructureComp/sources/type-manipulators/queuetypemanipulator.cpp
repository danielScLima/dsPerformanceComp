#include "headers/type-manipulators/queuetypemanipulator.h"

void QueueTypeManipulator::initialize()
{

}

void QueueTypeManipulator::insert(const std::string& key)
{
    queue.insert(key);
}

void QueueTypeManipulator::remove(const std::string& key)
{
    NodeOfQueue* node = queue.remove(); //it was adapted
    delete node;
}

void QueueTypeManipulator::search(const std::string& key)
{
    throw std::invalid_argument("This function cannot be used");
}

void QueueTypeManipulator::destroy()
{

}

