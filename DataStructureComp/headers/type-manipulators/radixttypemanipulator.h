#ifndef RADIXTREETYPEMANIPULATOR_H
#define RADIXTREETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "RadixTree/radixtree.h"

/*!
 * \brief The RadixTreeTypeManipulator class
 */
class RadixTreeTypeManipulator: public TypeManipulatorWithString
{
public:
    RadixTreeTypeManipulator():
        TypeManipulatorWithString
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            RadixTreeEnum()
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
    virtual void insert(const std::string& key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void remove(const std::string& key);

    /*!
     * \brief remove
     * \param key
     */
    virtual void search(const std::string& key);

    /*!
     * \brief destroy
     */
    virtual void destroy();

    virtual void clearEntries();

private:
    class RadixTree rtree;
};

#endif // RADIXTREETYPEMANIPULATOR_H
