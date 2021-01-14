#ifndef PTBSLKTYPEMANIPULATOR_H
#define PTBSLKTYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstringFL.h"

#include "PatriciaTreeBinarySameLenKeys/patriciatreebinarysamelenkeys.h"

/*!
 * \brief The PTBSLKTypeManipulator class
 */
class PTBSLKTypeManipulator: public TypeManipulatorWithStringFixedLenBinary
{
public:
    PTBSLKTypeManipulator():
        TypeManipulatorWithStringFixedLenBinary
        (
            true,
            true,
            true, //just the first. It was adapted
            TrieCategoryEnum(),
            PatriciaTreeBinarySameLenKeysEnum()
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
    PatriciaTreeBinarySameLenKeysDataStructure* tree = nullptr;
};

#endif // PTBSLKTYPEMANIPULATOR_H
