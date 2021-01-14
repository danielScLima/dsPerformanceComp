#ifndef QUEUETYPEMANIPULATOR_H
#define QUEUETYPEMANIPULATOR_H

#include "headers/datastructurecategorytype.h"
#include "headers/datastructureenumtypes.h"
#include "headers/type-manipulators/typemanipulatorwithstring.h"

#include "Queue/queue.h"

/*!
 * \brief The QueueTypeManipulator class
 */
class QueueTypeManipulator: public TypeManipulatorWithString
{
public:
    QueueTypeManipulator():
        TypeManipulatorWithString
        (
            false,
            true,
            true, //just the first. It was adapted
            QueueCategoryEnum(),
            QueueEnum()
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

private:
    QueueDataStructure queue;
};

#endif // QUEUETYPEMANIPULATOR_H
