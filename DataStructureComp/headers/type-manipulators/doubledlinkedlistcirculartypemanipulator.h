#ifndef DOUBLEDLINKEDLISTCIRCULARTYPEMANIPULATOR_H
#define DOUBLEDLINKEDLISTCIRCULARTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "DoubledLinkedListCircular/doubledlinkedlistcircular.h"

/*!
 * \brief The DoubledLinkedListCircularTypeManipulator class
 */
class DoubledLinkedListCircularTypeManipulator: public TypeManipulatorWithString
{
public:
    DoubledLinkedListCircularTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            ListCategoryEnum(),
            DoubledLinkedListCircularEnum()
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
    DoubledLinkedListCircularDataStructure list;
};

#endif // DOUBLEDLINKEDLISTCIRCULARTYPEMANIPULATOR_H
