#ifndef ENUM_H
#define ENUM_H

#include <string>

/*!
 * Enum base interface
 */
template <typename T>
struct Enum
{
    /*!
     * \brief Enum
     */
    Enum(){}
    /*!
     * \brief Enum
     * \param type
     * \param value
     */
    Enum(const T& type,
         std::string value):
        type(type), value(value){}
    /*!
     * \brief getType
     * \return
     */
    const T& getType() const
    {
        return this->type;
    }
    /*!
     * \brief getValue
     * \return
     */
    const std::string& getValue() const
    {
        return this->value;
    }
    bool operator ==(const Enum<T> &comp) const
    {
       return this->type == comp.type && this->getValue() == comp.getValue();
    }
protected:
    T type;
    std::string value;
};

#endif // ENUM_H
