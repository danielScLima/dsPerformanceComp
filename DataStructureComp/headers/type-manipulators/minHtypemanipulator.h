#ifndef MINHEAPTYPEMANIPULATOR_H
#define MINHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "MinHeap/minheap.h"

/*!
 * \brief The MinHeapTypeManipulator class
 */
class MinHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    MinHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            false,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            MinHeapEnum()
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
    class MinHeap mh;
};

#endif // MINHEAPTYPEMANIPULATOR_H
