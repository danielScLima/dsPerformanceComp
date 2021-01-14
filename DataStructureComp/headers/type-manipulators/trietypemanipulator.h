#ifndef TRIETYPEMANIPULATOR_H
#define TRIETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstringVLB.h"

#include "TrieOrPrefixTree/trieorprefixtree.h"

/*!
 * \brief The TrieTypeManipulator class
 */
class TrieTypeManipulator: public TypeManipulatorWithStringVarLenBinary
{
public:
    TrieTypeManipulator():
        TypeManipulatorWithStringVarLenBinary
        (
            true,
            true,
            true, //just the first. It was adapted
            TrieCategoryEnum(),
            TrieOrPrefixTreeEnum()
        )
    {
        initialize();
    }

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

    /*!
     * \brief clearEntries
     */
    virtual void clearEntries();

private:
    TrieOrPrefixTreeDS* tree = nullptr;
};

#endif // TRIETYPEMANIPULATOR_H
