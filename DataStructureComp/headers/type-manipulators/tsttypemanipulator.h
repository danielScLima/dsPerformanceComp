#ifndef TSTTYPEMANIPULATOR_H
#define TSTTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "TernarySearchTree/ternarysearchtree.h"

/*!
 * \brief The TSTTypeManipulator class
 */
class TSTTypeManipulator: public TypeManipulatorWithString
{
public:
    TSTTypeManipulator():
        TypeManipulatorWithString
        (
            true,
            true,
            true, //just the first. It was adapted
            TreeCategoryEnum(),
            TernarySearchTreeEnum()
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
    class TernarySearchTree tst;
};

#endif // TSTTYPEMANIPULATOR_H
