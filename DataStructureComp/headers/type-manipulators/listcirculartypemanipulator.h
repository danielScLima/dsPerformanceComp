#ifndef LISTCIRCULARTYPEMANIPULATOR_H
#define LISTCIRCULARTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "ListCircular/listcircular.h"

/*!
 * \brief The ListCircularTypeManipulator class
 */
class ListCircularTypeManipulator: public TypeManipulatorWithString
{
public:
    ListCircularTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            ListCategoryEnum(),
            ListCircularEnum()
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
    ListCircularDataStructure list;
};

#endif // LISTCIRCULARTYPEMANIPULATOR_H
