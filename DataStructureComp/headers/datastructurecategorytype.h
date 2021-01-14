#ifndef DATASTRUCTURECATEGORYTYPE_H
#define DATASTRUCTURECATEGORYTYPE_H

#include "enum.h"
#include "headers/datastructurecategoryenumtypedefinition.h"
#include <vector>

/*!
 * \brief The EnumDataStructureCategoryType struct
 */
struct EnumDataStructureCategoryType: public Enum<DataStructureCategory>
{
    /*!
     * \brief EnumDataStructureCategoryType
     */
    EnumDataStructureCategoryType(){}

    /*!
     * \brief EnumDataStructureCategoryType
     * \param type
     * \param value
     */
    EnumDataStructureCategoryType
    (
        const DataStructureCategory &type,
        const std::string &value
    ):
        Enum(type, value)
    {}

protected:

};


/*!
 * \brief The StackCategoryEnum struct
 */
struct StackCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief StackCategoryEnum
     */
    StackCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::StackCategory,
            "Stack"
        ){}
};

/*!
 * \brief The QueueCategoryEnum struct
 */
struct QueueCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief QueueCategoryEnum
     */
    QueueCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::QueueCategory,
            "Queue"
        ){}
};

/*!
 * \brief The ListCategoryEnum struct
 */
struct ListCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief ListCategoryEnum
     */
    ListCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::ListsCategory,
            "List"
        ){}
};

/*!
 * \brief The TreeCategoryEnum struct
 */
struct TreeCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief TreeCategoryEnum
     */
    TreeCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::TreesCategory,
            "Tree"
        ){}
};

/*!
 * \brief The TrieCategoryEnum struct
 */
struct TrieCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief TrieCategoryEnum
     */
    TrieCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::TriesCategory,
            "Trie"
        ){}
};

/*!
 * \brief The HeapCategoryEnum struct
 */
struct HeapCategoryEnum : public EnumDataStructureCategoryType
{
    /*!
     * \brief HeapCategoryEnum
     */
    HeapCategoryEnum():
        EnumDataStructureCategoryType
        (
            DataStructureCategory::HeapsCategory,
            "Heap"
        ){}
};


static std::vector<EnumDataStructureCategoryType> categoriesTypesOfDataStructure =
{
    StackCategoryEnum(),
    QueueCategoryEnum(),
    ListCategoryEnum(),
    TreeCategoryEnum(),
    TrieCategoryEnum(),
    HeapCategoryEnum()
};

#endif // DATASTRUCTURECATEGORYTYPE_H
