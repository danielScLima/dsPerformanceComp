#ifndef REDBLACKTYPEMANIPULATOR_H
#define REDBLACKTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "RedBlackTree/redblacktree.h"

/*!
 * \brief The RedBlackTreeTypeManipulator class
 */
class RedBlackTreeTypeManipulator: public TypeManipulatorWithInteger
{
public:
    RedBlackTreeTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            RedBlackTreeEnum()
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
    class RedBlackTree rbtree;
};

#endif // REDBLACKTYPEMANIPULATOR_H
