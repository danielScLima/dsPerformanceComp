#ifndef TYPE_MANIPULATOR_WITH_STRING_VARIABLE_LEN_BIN_H
#define TYPE_MANIPULATOR_WITH_STRING_VARIABLE_LEN_BIN_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/datastructuretypemanipulator.h"

/*!
 * \brief The TypeManipulatorWithString class
 */
class TypeManipulatorWithStringVarLenBinary: public DataStructureTypeManipulator
{
public:
    TypeManipulatorWithStringVarLenBinary
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
    virtual void insert(const std::string& key) = 0;

    /*!
     * \brief insertRemoveAndComputeTimeOfRemove
     * \return
     */
    virtual long int insertRemoveAndComputeTimeOfRemove(long int count);

    /*!
     * \brief remove
     * \param key
     */
    virtual void remove(const std::string& key) = 0;

    /*!
     * \brief insertSearchAndComputeTimeOfearch
     * \return
     */
    virtual long int insertSearchAndComputeTimeOfSearch(long int count);

    /*!
     * \brief remove
     * \param key
     */
    virtual void search(const std::string& key) = 0;

    /*!
     * \brief destroy
     */
    virtual void destroy() = 0;

    /*!
     * \brief clearEntries
     */
    virtual void clearEntries() = 0;

private:

    void removeTrailingZeros(std::string &binary);
};

#endif // TYPE_MANIPULATOR_WITH_STRING_VARIABLE_LEN_BIN_H
