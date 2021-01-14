#ifndef BSTARTREETYPEMANIPULATOR_H
#define BSTARTREETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "BStarTree/bStarTree.h"

/*!
 * \brief The BStarTreeTypeManipulator class
 */
class BStarTreeTypeManipulator: public TypeManipulatorWithInteger
{
public:
    BStarTreeTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            BStarTreeEnum()
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
    class BTreeStar btree;
};

#endif // BSTARTREETYPEMANIPULATOR_H
