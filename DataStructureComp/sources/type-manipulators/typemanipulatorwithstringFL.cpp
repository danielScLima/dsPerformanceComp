#include "headers/type-manipulators/typemanipulatorwithstringFL.h"

#include <random>
#include <algorithm>
#include <iterator>

#include <ctime>
#include <ratio>
#include <chrono>

#include <bitset>

long int TypeManipulatorWithStringFixedLenBinary::insertAndComputeTime(long int count)
{
    //Generates count numbers (as strings)
    std::vector<std::string> vec;
    for (long int index = 0; index < count; ++index)
    {
        vec.push_back(std::bitset<14>(index).to_string()); //14 bits
    }

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    clearEntries();

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto s: vec)
    {
        insert(s);
    }

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}

long int TypeManipulatorWithStringFixedLenBinary::insertRemoveAndComputeTimeOfRemove(long count)
{
    //Generates count numbers (as string)
    std::vector<std::string> vec;
    for (long int index = 0; index < count; ++index)
    {
        vec.push_back(std::bitset<14>(index).to_string()); //14 bits
    }

    clearEntries();

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    for (auto s: vec)
        insert(s);

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto s: vec)
        remove(s);

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}

long int TypeManipulatorWithStringFixedLenBinary::insertSearchAndComputeTimeOfSearch(long count)
{
    //Generates count numbers (as string)
    std::vector<std::string> vec;
    for (long int index = 0; index < count; ++index)
    {
        vec.push_back(std::bitset<14>(index).to_string()); //14 bits
    }

    clearEntries();

    //faz o shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);

    for (auto number: vec)
        insert(number);

    //inicia medida de tempo
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    for (auto s: vec)
        search(s);

    //finaliza medida de tempo
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //retorna a diferença
    duration<double, std::milli> time_span = t2 - t1;
    return time_span.count();
}



