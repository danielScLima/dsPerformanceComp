#include "headers/type-manipulators/typemanipulatorwithinteger.h"

#include <random>
#include <algorithm>
#include <iterator>

#include <ctime>
#include <ratio>
#include <chrono>

long int TypeManipulatorWithInteger::insertAndComputeTime(long int count)
{
    //Generates count numbers
    std::vector<long int> vec;
    for (long int index = 0; index < count; ++index)
        vec.push_back(index);

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    clearEntries();

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto number: vec)
        insert(number);

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}

long int TypeManipulatorWithInteger::insertRemoveAndComputeTimeOfRemove(long count)
{
    //Generates count numbers
    std::vector<long int> vec;
    for (long int index = 0; index < count; ++index)
        vec.push_back(index);

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    clearEntries();

    for (auto number: vec)
        insert(number);

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto number: vec)
        remove(number);

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}

long int TypeManipulatorWithInteger::insertSearchAndComputeTimeOfSearch(long count)
{
    //Generates count numbers
    std::vector<long int> vec;
    for (long int index = 0; index < count; ++index)
        vec.push_back(index);

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    clearEntries();

    for (auto number: vec)
        insert(number);

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto number: vec)
        search(number);

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}



