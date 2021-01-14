#ifndef FIBHEAPTYPEMANIPULATOR_H
#define FIBHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "FibonacciHeap/fibonacciheap.h"

/*!
 * \brief The FibonacciHeapTypeManipulator class
 */
class FibonacciHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    FibonacciHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            FibonacciHeapEnum()
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
    FibonacciHeapDS fh;
};

#endif // FIBHEAPTYPEMANIPULATOR_H
