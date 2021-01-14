#ifndef DOUBLEDLINKEDLISTTYPEMANIPULATOR_H
#define DOUBLEDLINKEDLISTTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "DoubledLinkedList/doubledlinkedlist.h"

/*!
 * \brief The DoubledLinkedListTypeManipulator class
 */
class DoubledLinkedListTypeManipulator: public TypeManipulatorWithString
{
public:
    DoubledLinkedListTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            ListCategoryEnum(),
            DoubledLinkedListEnum()
        )
    {}

    /*!
     * \brief initialize
     */
    virtual void initialize();

    /*!
     * \brief insert
     * \param key
     */
    virtual void insert(const std::string& key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void remove(const std::string& key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void search(const std::string& key);

    /*!
     * \brief destroy
     */
    virtual void destroy();

private:
    DoubledLinkedListDataStructure list;
};

#endif // DOUBLEDLINKEDLISTTYPEMANIPULATOR_H
