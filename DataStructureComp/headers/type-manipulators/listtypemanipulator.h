#ifndef LISTTYPEMANIPULATOR_H
#define LISTTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "List/list.h"

/*!
 * \brief The ListTypeManipulator class
 */
class ListTypeManipulator: public TypeManipulatorWithString
{
public:
    ListTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            ListCategoryEnum(),
            ListEnum()
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
    ListDataStructure list;
};

#endif // LISTTYPEMANIPULATOR_H
