#ifndef BPLUSTREETYPEMANIPULATOR_H
#define BPLUSTREETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "BPlusTree/btreeplus.h"

/*!
 * \brief The BPlusTreeTypeManipulator class
 */
class BPlusTreeTypeManipulator: public TypeManipulatorWithInteger
{
public:
    BPlusTreeTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            BPlusTreeEnum()
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
    class BTreePlus btree;
};

#endif // BPLUSTREETYPEMANIPULATOR_H
