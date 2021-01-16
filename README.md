Data Structure Performance Comparator
====================
Build with AppVeyor: [![Build status](https://ci.appveyor.com/api/projects/status/2af8p2mq6f8w5v32?svg=true)](https://ci.appveyor.com/project/DanielSLima/dsperformancecomp)
Build with Travis: [![Build Status](https://travis-ci.com/danielScLima/dsPerformanceComp.svg?branch=master)](https://travis-ci.com/danielScLima/dsPerformanceComp)

This repository has a project with the implementation of a Data Structure Performance Comparator.
It was divided in two parts: a gui and a core. This repo is the core, that is created as a submodule
of the gui. As a core, it is independent of platform to graphical interface.
The gui repository is in the following url: https://github.com/danielScLima/DataStructurePerformanceComp

It is written in C++.

It has several data structures that are compared, considering insertion, remove and search.

All of the data structures are written in C++ and are independent of platform. Each one is fully tested,
using unit tests. The library used to make the Unit Test is the Catch v2.12.3.
The code is already in this repository.

Each library is in this github account. They are already configured as submodules. Once you clone this repo,
you must execute the following command:

git submodule update --init --recursive


Full list of data structure: 
====================

* [Stack;](#markdown-header)
* [Queue;](#markdown-header)
* [Lists;](#markdown-header)
	* [List;](#markdown-header-emphasis)
	* [List circular;](#markdown-header-emphasis)
	* [DoubledLinkedList;](#markdown-header-emphasis)
	* [DoubledLinkedListCircular;](#markdown-header-emphasis)
* [TREEs;](#markdown-header)
	* [Avl tree;](#markdown-header-emphasis)
	* [Binary Tree;](#markdown-header-emphasis)
	* [BPlus Tree;](#markdown-header-emphasis)
	* [BStar Tree;](#markdown-header-emphasis)
	* [BTree;](#markdown-header-emphasis)	
	* [Radix Tree;](#markdown-header-emphasis)
	* [RedBlackTree;](#markdown-header-emphasis)
	* [Splay Tree;](#markdown-header-emphasis)
	* [Ternary search tree;](#markdown-header-emphasis)
	* [Tree 23;](#markdown-header-emphasis)
* [TRIEs;](#markdown-header)
	* [PatriciaTreeBinarySameLenKeys;](#markdown-header-emphasis)
	* [PatriciaTreeStoreBinaryDifferentLenKeys;](#markdown-header-emphasis)
	* [Trie or Prefix tree;](#markdown-header-emphasis)
* [Heaps.](#markdown-header)
	* [Binomial heap;](#markdown-header-emphasis)
	* [Fibonacci heap;](#markdown-header-emphasis)
	* [Leftist heap;](#markdown-header-emphasis)
	* [Max heap;](#markdown-header-emphasis)
	* [Min heap;](#markdown-header-emphasis)
	* [MinMax heap;](#markdown-header-emphasis)
	* [Skew heap;](#markdown-header-emphasis)



