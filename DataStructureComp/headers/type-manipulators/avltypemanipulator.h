#ifndef AVLTYPEMANIPULATOR_H
#define AVLTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "AvlTree/avltree.h"

/*!
 * \brief The AvlTypeManipulator class
 */
class AvlTypeManipulator: public TypeManipulatorWithInteger
{
public:
    AvlTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            AvlTreeEnum()
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
    class AvlTree avl;
};

#endif // AVLTYPEMANIPULATOR_H
