#ifndef SPLAYTYPEMANIPULATOR_H
#define SPLAYTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "SplayTree/splaytree.h"

/*!
 * \brief The SplayTreeTypeManipulator class
 */
class SplayTreeTypeManipulator: public TypeManipulatorWithInteger
{
public:
    SplayTreeTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            SplayTreeEnum()
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
    class SplayTree stree;
};

#endif // SPLAYTYPEMANIPULATOR_H
