#ifndef BINHEAPTYPEMANIPULATOR_H
#define BINHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "BinomialHeap/binomialheap.h"

/*!
 * \brief The BinomialHeapTypeManipulator class
 */
class BinomialHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    BinomialHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            BinomialHeapEnum()
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
    BinomialHeapDS bh;
};

#endif // BINHEAPTYPEMANIPULATOR_H
