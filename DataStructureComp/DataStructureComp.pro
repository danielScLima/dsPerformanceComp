QT -= gui

TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#Inserting the include paths
INCLUDEPATH += $$PWD/submodules/

INCLUDEPATH += $$PWD/submodules/SplayTree
INCLUDEPATH += $$PWD/submodules/BTree
INCLUDEPATH += $$PWD/submodules/BPlusTree
INCLUDEPATH += $$PWD/submodules/AvlTree
INCLUDEPATH += $$PWD/submodules/TernarySearchTree
INCLUDEPATH += $$PWD/submodules/RedBlackTree
INCLUDEPATH += $$PWD/submodules/RadixTree
INCLUDEPATH += $$PWD/submodules/BStarTree
INCLUDEPATH += $$PWD/submodules/BinaryTree
INCLUDEPATH += $$PWD/submodules/LeftistHeap
INCLUDEPATH += $$PWD/submodules/FibonacciHeap
INCLUDEPATH += $$PWD/submodules/BinomialHeap
INCLUDEPATH += $$PWD/submodules/PatriciaTreeStoreBinaryDifferentLenKeys
INCLUDEPATH += $$PWD/submodules/TrieOrPrefixTree
INCLUDEPATH += $$PWD/submodules/PatriciaTreeBinarySameLenKeys
INCLUDEPATH += $$PWD/submodules/DoubledLinkedListCircular
INCLUDEPATH += $$PWD/submodules/DoubledLinkedList
INCLUDEPATH += $$PWD/submodules/ListCircular
INCLUDEPATH += $$PWD/submodules/List
INCLUDEPATH += $$PWD/submodules/Stack
INCLUDEPATH += $$PWD/submodules/Queue
INCLUDEPATH += $$PWD/submodules/Tree23
INCLUDEPATH += $$PWD/submodules/SkewHeap
INCLUDEPATH += $$PWD/submodules/MinMaxHeap
INCLUDEPATH += $$PWD/submodules/MinHeap
INCLUDEPATH += $$PWD/submodules/MaxHeap

SOURCES += \
    sources/comparissonrunner.cpp \
    sources/datastructureenumtypes.cpp \
    sources/datastructuresperformancecomparator.cpp \
    sources/datastructuretypemanipulator.cpp \
    sources/datastructuretypemanipulatorfactory.cpp \
    sources/type-manipulators/avltypemanipulator.cpp \
    sources/type-manipulators/binhtypemanipulator.cpp \
    sources/type-manipulators/binttypemanipulator.cpp \
    sources/type-manipulators/bplusttypemanipulator.cpp \
    sources/type-manipulators/bstartypemanipulator.cpp \
    sources/type-manipulators/btreetypemanipulator.cpp \
    sources/type-manipulators/doubledlinkedlistcirculartypemanipulator.cpp \
    sources/type-manipulators/doubledlinkedlisttypemanipulator.cpp \
    sources/type-manipulators/fibheaptypemanipulator.cpp \
    sources/type-manipulators/lefhtypemanipulator.cpp \
    sources/type-manipulators/listcirculartypemanipulator.cpp \
    sources/type-manipulators/listtypemanipulator.cpp \
    sources/type-manipulators/maxhtypemanipulator.cpp \
    sources/type-manipulators/minhtypemanipulator.cpp \
    sources/type-manipulators/minmaxhtypemanipulator.cpp \
    sources/type-manipulators/ptbslktypemanipulator.cpp \
    sources/type-manipulators/ptbsvlktypemanipulator.cpp \
    sources/type-manipulators/queuetypemanipulator.cpp \
    sources/type-manipulators/radixtreetypemanipulator.cpp \
    sources/type-manipulators/redblacktreetypemanipulator.cpp \
    sources/type-manipulators/skewhtypemanipulator.cpp \
    sources/type-manipulators/splaytreetypemanipulator.cpp \
    sources/type-manipulators/stacktypemanipulator.cpp \
    sources/type-manipulators/tree23typemanipulator.cpp \
    sources/type-manipulators/trietypemanipulator.cpp \
    sources/type-manipulators/tsttypemanipulator.cpp \
    sources/type-manipulators/typemanipulatorwithinteger.cpp \
    sources/type-manipulators/typemanipulatorwithstring.cpp \
    sources/type-manipulators/typemanipulatorwithstringFL.cpp \
    sources/type-manipulators/typemanipulatorwithstringVLB.cpp \
    submodules/AvlTree/avltree.cpp \
    submodules/BPlusTree/btreeplus.cpp \
    submodules/BPlusTree/nodeOfBTreePlus.cpp \
    submodules/BStarTree/bStarTree.cpp \
    submodules/BStarTree/nodeOfBStarTree.cpp \
    submodules/BTree/btree.cpp \
    submodules/BTree/nodeOfBTree.cpp \
    submodules/BinaryTree/binarytree.cpp \
    submodules/BinomialHeap/binomialheap.cpp \
    submodules/DoubledLinkedList/doubledlinkedlist.cpp \
    submodules/DoubledLinkedListCircular/doubledlinkedlistcircular.cpp \
    submodules/FibonacciHeap/fibonacciheap.cpp \
    submodules/LeftistHeap/leftistheap.cpp \
    submodules/LeftistHeap/leftistheapnode.cpp \
    submodules/List/list.cpp \
    submodules/ListCircular/listcircular.cpp \
    submodules/MaxHeap/maxheap.cpp \
    submodules/MinHeap/minheap.cpp \
    submodules/MinMaxHeap/minmaxheap.cpp \
    submodules/PatriciaTreeBinarySameLenKeys/patriciatreebinarysamelenkeys.cpp \
    submodules/PatriciaTreeStoreBinaryDifferentLenKeys/patriciatreestorebinarydifferentlenkeys.cpp \
    submodules/Queue/queue.cpp \
    submodules/RadixTree/radixnode.cpp \
    submodules/RadixTree/radixtree.cpp \
    submodules/RedBlackTree/redblacktree.cpp \
    submodules/SkewHeap/skewheap.cpp \
    submodules/SkewHeap/skewheapnode.cpp \
    submodules/SplayTree/splaytree.cpp \
    submodules/Stack/stack.cpp \
    submodules/TernarySearchTree/ternarysearchtree.cpp \
    submodules/Tree23/tree23.cpp \
    submodules/TrieOrPrefixTree/trieorprefixtree.cpp

HEADERS += \
    headers/comparissonrunner.h \
    headers/datastructurecategoryenumtypedefinition.h \
    headers/datastructurecategorytype.h \
    headers/datastructureenumtypes.h \
    headers/datastructureenumtypesdefinition.h \
    headers/datastructuresperformancecomparator.h \
    headers/datastructuretypemanipulator.h \
    headers/datastructuretypemanipulatorfactory.h \
    headers/enum.h \
    headers/simulationresults.h \
    headers/type-manipulators/BinHtypemanipulator.h \
    headers/type-manipulators/avltypemanipulator.h \
    headers/type-manipulators/binttypemanipulator.h \
    headers/type-manipulators/bplustreetypemanipulator.h \
    headers/type-manipulators/bstartreetypemanipulator.h \
    headers/type-manipulators/btreetypemanipulator.h \
    headers/type-manipulators/doubledlinkedlistcirculartypemanipulator.h \
    headers/type-manipulators/doubledlinkedlisttypemanipulator.h \
    headers/type-manipulators/fibHtypemanipulator.h \
    headers/type-manipulators/lefHtypemanipulator.h \
    headers/type-manipulators/listcirculartypemanipulator.h \
    headers/type-manipulators/listtypemanipulator.h \
    headers/type-manipulators/maxHtypemanipulator.h \
    headers/type-manipulators/minHtypemanipulator.h \
    headers/type-manipulators/minmaxHtypemanipulator.h \
    headers/type-manipulators/ptbslktypemanipulator.h \
    headers/type-manipulators/ptbsvlktypemanipulator.h \
    headers/type-manipulators/queuetypemanipulator.h \
    headers/type-manipulators/radixttypemanipulator.h \
    headers/type-manipulators/redblacktypemanipulator.h \
    headers/type-manipulators/skewHtypemanipulator.h \
    headers/type-manipulators/splaytypemanipulator.h \
    headers/type-manipulators/stacktypemanipulator.h \
    headers/type-manipulators/tree23typemanipulator.h \
    headers/type-manipulators/trietypemanipulator.h \
    headers/type-manipulators/tsttypemanipulator.h \
    headers/type-manipulators/typemanipulatorwithinteger.h \
    headers/type-manipulators/typemanipulatorwithstring.h \
    headers/type-manipulators/typemanipulatorwithstringFL.h \
    headers/type-manipulators/typemanipulatorwithstringVLB.h \
    submodules/AvlTree/avltree.h \
    submodules/BPlusTree/btreeplus.h \
    submodules/BPlusTree/nodeOfBTreePlus.h \
    submodules/BStarTree/bStarTree.h \
    submodules/BStarTree/nodeOfBStarTree.h \
    submodules/BTree/btree.h \
    submodules/BTree/nodeOfBTree.h \
    submodules/BinaryTree/binarytree.h \
    submodules/BinomialHeap/binomialheap.h \
    submodules/DoubledLinkedList/doubledlinkedlist.h \
    submodules/DoubledLinkedListCircular/doubledlinkedlistcircular.h \
    submodules/FibonacciHeap/fibonacciheap.h \
    submodules/LeftistHeap/leftistheap.h \
    submodules/List/list.h \
    submodules/ListCircular/listcircular.h \
    submodules/MaxHeap/maxheap.h \
    submodules/MinHeap/minheap.h \
    submodules/MinMaxHeap/minmaxheap.h \
    submodules/PatriciaTreeBinarySameLenKeys/NodeBranchOfPatriciaTreeBinarySameLenKeys.h \
    submodules/PatriciaTreeBinarySameLenKeys/NodeLeafOfPatriciaTreeBinarySameLenKeys.h \
    submodules/PatriciaTreeBinarySameLenKeys/NodeOfPatriciaTreeBinarySameLenKeys.h \
    submodules/PatriciaTreeBinarySameLenKeys/patriciatreebinarysamelenkeys.h \
    submodules/PatriciaTreeStoreBinaryDifferentLenKeys/NodeBranchOfPatriciaTreeStoreBinaryDifferentLenKeys.h \
    submodules/PatriciaTreeStoreBinaryDifferentLenKeys/NodeLeafOfPatriciaTreeStoreBinaryDifferentLenKeys.h \
    submodules/PatriciaTreeStoreBinaryDifferentLenKeys/NodeOfPatriciaTreeStoreBinaryDifferentLenKeys.h \
    submodules/PatriciaTreeStoreBinaryDifferentLenKeys/patriciatreestorebinarydifferentlenkeys.h \
    submodules/Queue/queue.h \
    submodules/RadixTree/radixnode.h \
    submodules/RadixTree/radixtree.h \
    submodules/RedBlackTree/nodeofredblacktree.h \
    submodules/RedBlackTree/redblacktree.h \
    submodules/SkewHeap/skewheap.h \
    submodules/SkewHeap/skewheapnode.h \
    submodules/SplayTree/nodeofsplaytree.h \
    submodules/SplayTree/splaytree.h \
    submodules/Stack/stack.h \
    submodules/TernarySearchTree/NodeOfTernarySearchTree.h \
    submodules/TernarySearchTree/ternarysearchtree.h \
    submodules/Tree23/tree23.h \
    submodules/TrieOrPrefixTree/NodeOfTrieOrPrefixTree.h \
    submodules/TrieOrPrefixTree/trieorprefixtree.h

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target
