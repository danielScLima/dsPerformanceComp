#ifndef TYPE_MANIPULATOR_WITH_INTEGER_H
#define TYPE_MANIPULATOR_WITH_INTEGER_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/datastructuretypemanipulator.h"

/*!
 * \brief The TypeManipulatorWithInteger class
 */
class TypeManipulatorWithInteger: public DataStructureTypeManipulator
{
public:
    TypeManipulatorWithInteger
    (
        bool searchFunction,
        bool insertFunction,
        bool removeFunction,
        EnumDataStructureCategoryType enumDataStructureCategoryType,
        EnumDataStructureType enumDataStructureType
    ):
    DataStructureTypeManipulator
    (
        searchFunction,
        insertFunction,
        removeFunction,
        enumDataStructureCategoryType,
        enumDataStructureType
    )
    {}

    /*!
     * \brief initialize
     */
    virtual void initialize() = 0;

    /*!
     * \brief insertAndComputeTime
     * \return
     */
    virtual long int insertAndComputeTime(long int count);

    /*!
     * \brief insert
     * \param key
     */
    virtual void insert(int key) = 0;

    /*!
     * \brief insertRemoveAndComputeTimeOfRemove
     * \return
     */
    virtual long int insertRemoveAndComputeTimeOfRemove(long int count);

    /*!
     * \brief remove
     * \param key
     */
    virtual void remove(int key) = 0;

    /*!
     * \brief insertSearchAndComputeTimeOfearch
     * \return
     */
    virtual long int insertSearchAndComputeTimeOfSearch(long int count);

    /*!
     * \brief remove
     * \param key
     */
    virtual void search(int key) = 0;

    /*!
     * \brief destroy
     */
    virtual void destroy() = 0;

    /*!
     * \brief clearEntries
     */
    virtual void clearEntries() {}

private:

};

#endif // TYPE_MANIPULATOR_WITH_INTEGER_H
