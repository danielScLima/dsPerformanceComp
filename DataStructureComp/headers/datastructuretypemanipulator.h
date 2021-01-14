#ifndef DATASTRUCTURETYPEMANIPULATOR_H
#define DATASTRUCTURETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"

/*!
 * \brief The DataStructureTypeManipulator class
 */
class DataStructureTypeManipulator
{
public:
    DataStructureTypeManipulator
    (
        bool searchFunction,
        bool insertFunction,
        bool removeFunction,
        EnumDataStructureCategoryType enumDataStructureCategoryType,
        EnumDataStructureType enumDataStructureType
    ):
        searchFunction(searchFunction),
        insertFunction(insertFunction),
        removeFunction(removeFunction),
        enumDataStructureCategoryType(enumDataStructureCategoryType),
        enumDataStructureType(enumDataStructureType)
    {}

    /*!
     * \brief hasSearchFunction
     * \return
     */
    bool hasSearchFunction() const;

    /*!
     * \brief hasInsertFunction
     * \return
     */
    bool hasInsertFunction() const;

    /*!
     * \brief hasRemoveFunction
     * \return
     */
    bool hasRemoveFunction() const;

    /*!
     * \brief hasTheFunction
     * \param opCode
     * \return
     */
    bool hasTheFunction(int opCode) const;

    /*!
     * \brief getEnumDataStructureCategoryType
     * \return
     */
    const EnumDataStructureCategoryType getEnumDataStructureCategoryType() const;

    /*!
     * \brief getEnumDataStructureType
     * \return
     */
    const EnumDataStructureType getEnumDataStructureType() const;

    /*!
     * \brief initialize
     */
    virtual void initialize() = 0;

    /*!
     * \brief insertAndComputeTime
     * \return
     */
    virtual long int insertAndComputeTime(long int count) = 0;

    /*!
     * \brief insertRemoveAndComputeTimeOfRemove
     * \return
     */
    virtual long int insertRemoveAndComputeTimeOfRemove(long int count) = 0;

    /*!
     * \brief insertSearchAndComputeTimeOfearch
     * \return
     */
    virtual long int insertSearchAndComputeTimeOfSearch(long int count) = 0;

    /*!
     * \brief destroy
     */
    virtual void destroy() = 0;

    /*!
     * \brief clearEntries
     */
    virtual void clearEntries() = 0;

private:
    bool searchFunction = true;
    bool insertFunction = true;
    bool removeFunction = true;
    EnumDataStructureCategoryType enumDataStructureCategoryType;
    EnumDataStructureType enumDataStructureType;
};

#endif // DATASTRUCTURETYPEMANIPULATOR_H
