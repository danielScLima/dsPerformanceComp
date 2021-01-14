#include "headers/datastructuretypemanipulator.h"

bool DataStructureTypeManipulator::hasSearchFunction() const
{
    return this->searchFunction;
}

bool DataStructureTypeManipulator::hasInsertFunction() const
{
    return this->insertFunction;
}

bool DataStructureTypeManipulator::hasRemoveFunction() const
{
    return this->removeFunction;
}

bool DataStructureTypeManipulator::hasTheFunction(int opCode) const
{
    if (opCode == 0)
        return hasInsertFunction();
    else if (opCode == 1)
        return hasRemoveFunction();
    else if (opCode == 2)
        return hasSearchFunction();

    return false;
}

const EnumDataStructureCategoryType DataStructureTypeManipulator::getEnumDataStructureCategoryType() const
{
    return this->enumDataStructureCategoryType;
}

const EnumDataStructureType DataStructureTypeManipulator::getEnumDataStructureType() const
{
    return this->enumDataStructureType;
}
