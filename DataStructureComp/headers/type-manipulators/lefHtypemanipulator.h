#ifndef LEFTISTHEAPTYPEMANIPULATOR_H
#define LEFTISTHEAPTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include "LeftistHeap/leftistheap.h"

/*!
 * \brief The LeftistHeapTypeManipulator class
 */
class LeftistHeapTypeManipulator: public TypeManipulatorWithInteger
{
public:
    LeftistHeapTypeManipulator():
        TypeManipulatorWithInteger
        (
            true,
            true,
            true, //just the first. It was adapted
            HeapCategoryEnum(),
            LeftistHeapEnum()
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
    LeftistHeapDS lh;
};

#endif // LEFTISTHEAPTYPEMANIPULATOR_H
