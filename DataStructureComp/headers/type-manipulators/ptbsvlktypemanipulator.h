#ifndef PTBSVLKTYPEMANIPULATOR_H
#define PTBSVLKTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstringVLB.h"

#include "PatriciaTreeStoreBinaryDifferentLenKeys/patriciatreestorebinarydifferentlenkeys.h"

/*!
 * \brief The PTBSVLKTypeManipulator class
 */
class PTBSVLKTypeManipulator: public TypeManipulatorWithStringVarLenBinary
{
public:
    PTBSVLKTypeManipulator():
        TypeManipulatorWithStringVarLenBinary
        (
            true,
            true,
            true, //just the first. It was adapted
            TrieCategoryEnum(),
            PatriciaTreeStoreBinaryDifferentLenKeysEnum()
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
    PatriciaTreeStoreBinaryDifferentLenKeysDS* tree = nullptr;
};

#endif // PTBSVLKTYPEMANIPULATOR_H
