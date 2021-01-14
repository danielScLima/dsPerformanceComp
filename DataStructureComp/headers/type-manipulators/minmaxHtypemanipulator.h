#ifndef MINMAXHEAPTYPEMANIPULATOR_H
#define MINMAXHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "MinMaxHeap/minmaxheap.h"

/*!
 * \brief The MinMaxHeapTypeManipulator class
 */
class MinMaxHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    MinMaxHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            false,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            MinMaxHeapEnum()
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
    class MinMaxHeap mh;
};

#endif // MINMAXHEAPTYPEMANIPULATOR_H
