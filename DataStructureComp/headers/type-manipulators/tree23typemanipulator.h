#ifndef TREE23TYPEMANIPULATOR_H
#define TREE23TYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "Tree23/tree23.h"

/*!
 * \brief The Tree23TypeManipulator class
 */
class Tree23TypeManipulator: public TypeManipulatorWithInteger
{
public:
    Tree23TypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            Tree23Enum()
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
    virtual void insert(int key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void remove(int key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void search(int key);

    /*!
     * \brief destroy
     */
    virtual void destroy();

    virtual void clearEntries();

private:
    class Tree23 tree;
};

#endif // TREE23TYPEMANIPULATOR_H
