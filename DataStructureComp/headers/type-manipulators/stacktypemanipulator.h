#ifndef STACKTYPEMANIPULATOR_H
#define STACKTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "Stack/stack.h"

/*!
 * \brief The StackTypeManipulator class
 */
class StackTypeManipulator: public TypeManipulatorWithString
{
public:
    StackTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            StackCategoryEnum(),
            StackEnum()
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
    StackDataStructure stack;
};

#endif // STACKTYPEMANIPULATOR_H
