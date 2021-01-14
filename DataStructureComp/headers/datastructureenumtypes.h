#ifndef DATASTRUCTUREENUMTYPES_H
#define DATASTRUCTUREENUMTYPES_H

#include "headers/datastructureenumtypesdefinition.h"
#include "enum.h"

#include <vector>

/*!
 * \brief The EnumDataStructureType struct
 */
struct EnumDataStructureType: public Enum<DataStrucutureType>
{
    /*!
     * \brief EnumDataStructureType
     */
    EnumDataStructureType(){}

    /*!
     * \brief EnumDataStructureType
     * \param type
     * \param value
     */
    EnumDataStructureType
    (
        const DataStrucutureType &type,
        const std::string &value
    ):
        Enum(type, value)
    {}

protected:

};

/*!
 * \brief The AvlTreeEnum struct
 */
struct AvlTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief AvlTreeEnum
     */
    AvlTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::AvlTree,
            "Avl Tree"
        ){}
};

/*!
 * \brief The BinaryTreeEnum struct
 */
struct BinaryTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief BinaryTreeEnum
     */
    BinaryTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::BinaryTree,
            "Binary Tree"
        ){}
};

/*!
 * \brief The BinomialHeapEnum struct
 */
struct BinomialHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief BinomialHeapEnum
     */
    BinomialHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::BinomialHeap,
            "Binomial Tree"
        ){}
};

/*!
 * \brief The BPlusTreeEnum struct
 */
struct BPlusTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief BPlusTreeEnum
     */
    BPlusTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::BPlusTree,
            "BPlus Tree"
        ){}
};

/*!
 * \brief The BStarTreeEnum struct
 */
struct BStarTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief BStarTreeEnum
     */
    BStarTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::BStarTree,
            "BStar Tree"
        ){}
};

/*!
 * \brief The BTreeEnum struct
 */
struct BTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief BTreeEnum
     */
    BTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::BTree,
            "BTree"
        ){}
};

/*!
 * \brief The DoubledLinkedListEnum struct
 */
struct DoubledLinkedListEnum : public EnumDataStructureType
{
    /*!
     * \brief DoubledLinkedListEnum
     */
    DoubledLinkedListEnum():
        EnumDataStructureType
        (
            DataStrucutureType::DoubledLinkedList,
            "Doubled Linked List"
        ){}
};

/*!
 * \brief The DoubledLinkedListCircularEnum struct
 */
struct DoubledLinkedListCircularEnum : public EnumDataStructureType
{
    /*!
     * \brief DoubledLinkedListCircularEnum
     */
    DoubledLinkedListCircularEnum():
        EnumDataStructureType
        (
            DataStrucutureType::DoubledLinkedListCircular,
            "Doubled Linked List Circular"
        ){}
};

/*!
 * \brief The FibonacciHeapEnum struct
 */
struct FibonacciHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief FibonacciHeapEnum
     */
    FibonacciHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::FibonacciHeap,
            "Fibonacci Heap"
        ){}
};

/*!
 * \brief The LeftistHeapEnum struct
 */
struct LeftistHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief LeftistHeapEnum
     */
    LeftistHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::LeftistHeap,
            "Leftist Heap"
        ){}
};

/*!
 * \brief The ListEnum struct
 */
struct ListEnum : public EnumDataStructureType
{
    /*!
     * \brief ListEnum
     */
    ListEnum():
        EnumDataStructureType
        (
            DataStrucutureType::List,
            "List"
        ){}
};

/*!
 * \brief The ListCircularEnum struct
 */
struct ListCircularEnum : public EnumDataStructureType
{
    /*!
     * \brief ListCircularEnum
     */
    ListCircularEnum():
        EnumDataStructureType
        (
            DataStrucutureType::ListCircular,
            "List Circular"
        ){}
};

/*!
 * \brief The MaxHeapEnum struct
 */
struct MaxHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief MaxHeapEnum
     */
    MaxHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::MaxHeap,
            "Max Heap"
        ){}
};

/*!
 * \brief The MinHeapEnum struct
 */
struct MinHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief MinHeapEnum
     */
    MinHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::MinHeap,
            "Min Heap"
        ){}
};

/*!
 * \brief The MinMaxHeapEnum struct
 */
struct MinMaxHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief MinMaxHeapEnum
     */
    MinMaxHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::MinMaxHeap,
            "Min Max Heap"
        ){}
};

/*!
 * \brief The PatriciaTreeBinarySameLenKeysEnum struct
 */
struct PatriciaTreeBinarySameLenKeysEnum : public EnumDataStructureType
{
    /*!
     * \brief PatriciaTreeBinarySameLenKeysEnum
     */
    PatriciaTreeBinarySameLenKeysEnum():
        EnumDataStructureType
        (
            DataStrucutureType::PatriciaTreeBinarySameLenKeys,
            "Patricia Tree Binary Same Len Keys"
        ){}
};

/*!
 * \brief The PatriciaTreeStoreBinaryDifferentLenKeysEnum struct
 */
struct PatriciaTreeStoreBinaryDifferentLenKeysEnum : public EnumDataStructureType
{
    /*!
     * \brief PatriciaTreeStoreBinaryDifferentLenKeysEnum
     */
    PatriciaTreeStoreBinaryDifferentLenKeysEnum():
        EnumDataStructureType
        (
            DataStrucutureType::PatriciaTreeStoreBinaryDifferentLenKeys,
            "Patricia Tree Store Binary Different Len Keys"
        ){}
};

/*!
 * \brief The QueueEnum struct
 */
struct QueueEnum : public EnumDataStructureType
{
    /*!
     * \brief QueueEnum
     */
    QueueEnum():
        EnumDataStructureType
        (
            DataStrucutureType::Queue,
            "Queue"
        ){}
};

/*!
 * \brief The RadixTreeEnum struct
 */
struct RadixTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief RadixTreeEnum
     */
    RadixTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::RadixTree,
            "Radix Tree"
        ){}
};

/*!
 * \brief The RedBlackTreeEnum struct
 */
struct RedBlackTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief RedBlackTreeEnum
     */
    RedBlackTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::RedBlackTree,
            "Red Black Tree"
        ){}
};

/*!
 * \brief The SkewHeapEnum struct
 */
struct SkewHeapEnum : public EnumDataStructureType
{
    /*!
     * \brief SkewHeapEnum
     */
    SkewHeapEnum():
        EnumDataStructureType
        (
            DataStrucutureType::SkewHeap,
            "Skew Heap"
        ){}
};

/*!
 * \brief The SplayTreeEnum struct
 */
struct SplayTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief SplayTreeEnum
     */
    SplayTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::SplayTree,
            "Splay Tree"
        ){}
};

/*!
 * \brief The StackEnum struct
 */
struct StackEnum : public EnumDataStructureType
{
    /*!
     * \brief StackEnum
     */
    StackEnum():
        EnumDataStructureType
        (
            DataStrucutureType::Stack,
            "Stack"
        ){}
};

/*!
 * \brief The TernarySearchTreeEnum struct
 */
struct TernarySearchTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief TernarySearchTreeEnum
     */
    TernarySearchTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::TernarySearchTree,
            "Ternary Search Tree"
        ){}
};

/*!
 * \brief The Tree23Enum struct
 */
struct Tree23Enum : public EnumDataStructureType
{
    /*!
     * \brief Tree23Enum
     */
    Tree23Enum():
        EnumDataStructureType
        (
            DataStrucutureType::Tree23,
            "Tree 23"
        ){}
};

/*!
 * \brief The TrieOrPrefixTreeEnum struct
 */
struct TrieOrPrefixTreeEnum : public EnumDataStructureType
{
    /*!
     * \brief TrieOrPrefixTreeEnum
     */
    TrieOrPrefixTreeEnum():
        EnumDataStructureType
        (
            DataStrucutureType::TrieOrPrefixTree,
            "Trie Or Prefix Tree"
        ){}
};

static std::vector<EnumDataStructureType> typesOfDataStructure =
{
    /*AvlTreeEnum(),
    BinaryTreeEnum(),
    BinomialHeapEnum(),
    BPlusTreeEnum(),
    BStarTreeEnum(),
    BTreeEnum(),
    DoubledLinkedListEnum(),
    DoubledLinkedListCircularEnum(),
    FibonacciHeapEnum(),
    LeftistHeapEnum(),
    ListEnum(),
    ListCircularEnum(),
    MaxHeapEnum(),
    MinHeapEnum(),
    MinMaxHeapEnum(),
    PatriciaTreeBinarySameLenKeysEnum(),
    PatriciaTreeStoreBinaryDifferentLenKeysEnum(),*/
    QueueEnum(),
    /*RadixTreeEnum(),
    RedBlackTreeEnum(),
    SkewHeapEnum(),
    SplayTreeEnum(),
    StackEnum(),
    TernarySearchTreeEnum(),
    Tree23Enum(),
    TrieOrPrefixTreeEnum()*/
};

struct SetOfDataStructures
{
    std::string nameOfSet;
    std::vector<EnumDataStructureType> vecOfEnum;
};

static std::vector<SetOfDataStructures> vectorOfSetOfDataStructures =
{
    {
        "Stack",
        {StackEnum()}
    },
    {
        "Queue",
        {QueueEnum()}
    },
    {
        "Lists",
        {
            ListEnum(),
            ListCircularEnum(),
            DoubledLinkedListEnum(),
            DoubledLinkedListCircularEnum(),
        }
    },
    {
        "Trees",
        {
            AvlTreeEnum(),
            BinaryTreeEnum(),
            BPlusTreeEnum(),
            BStarTreeEnum(),
            BTreeEnum(),
            RadixTreeEnum(),
            RedBlackTreeEnum(),
            SplayTreeEnum(),
            TernarySearchTreeEnum(),
            Tree23Enum()
        }
    },
    {
        "Tries",
        {
            PatriciaTreeBinarySameLenKeysEnum(),
            PatriciaTreeStoreBinaryDifferentLenKeysEnum(),
            TrieOrPrefixTreeEnum()
        }
    },
    {
        "Heaps",
        {
            BinomialHeapEnum(),
            FibonacciHeapEnum(),
            LeftistHeapEnum(),
            MaxHeapEnum(),
            MinHeapEnum(),
            MinMaxHeapEnum(),
            SkewHeapEnum()
        }
    }
};

#endif // DATASTRUCTUREENUMTYPES_H
