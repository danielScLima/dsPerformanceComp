#ifndef MAXHEAPTYPEMANIPULATOR_H
#define MAXHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "MaxHeap/maxheap.h"

/*!
 * \brief The MaxHeapTypeManipulator class
 */
class MaxHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    MaxHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            false,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            MaxHeapEnum()
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

private:
    class MaxHeap mh;
};

#endif // MAXHEAPTYPEMANIPULATOR_H
