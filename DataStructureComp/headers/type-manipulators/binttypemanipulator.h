#ifndef BINARYTREETYPEMANIPULATOR_H
#define BINARYTREETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "BinaryTree/binarytree.h"

/*!
 * \brief The BinaryTreeTypeManipulator class
 */
class BinaryTreeTypeManipulator: public TypeManipulatorWithInteger
{
public:
    BinaryTreeTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            BinaryTreeEnum()
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
    class BinaryTree btree;
};

#endif // BINARYTREETYPEMANIPULATOR_H
