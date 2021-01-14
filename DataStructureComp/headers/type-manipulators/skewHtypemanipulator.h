#ifndef SKEWHEAPTYPEMANIPULATOR_H
#define SKEWHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "SkewHeap/skewheap.h"

/*!
 * \brief The SkewHeapTypeManipulator class
 */
class SkewHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    SkewHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            SkewHeapEnum()
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
    class SkewHeap sh;
};

#endif // SKEWHEAPTYPEMANIPULATOR_H
