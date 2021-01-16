#include <iostream>
using namespace std;

#include <vector>

#include "headers/comparissonrunner.h"
#include "headers/datastructureenumtypes.h"


int main()
{
	ComparissonRunner comparissonRunner;
	AvlTreeEnum avlEnum;
	BinaryTreeEnum binTreeEnum;
	BinomialHeapEnum binomialTreeEnum;
	std::vector<EnumDataStructureType> vec = {avlEnum, binTreeEnum, binomialTreeEnum};

	SimulationResults sR = comparissonRunner.run
	(
	    0, //0-insert, 1-remove,2search
	    vec
	);

	cout << "Operation type: " << sR.operation << endl;
	cout << "Used times: " << endl;

	for (int index=0;index<sR.usedCounts.size();++index)
	{
		auto t = sR.usedCounts.at(index);
		cout << "Quantity[" << index << "] = " << t << endl;
	}

	for (int index=0;index<sR.vectorOfResultsToType.size();++index)
	{
		auto t = sR.vectorOfResultsToType.at(index);
		
		cout << endl << "#################################" << endl;
		cout << "Results to " << t.enumDataStrucutureType.getValue() << ": " << endl << endl;

		for (int index2=0;index2<t.times.size();++index2)
		{	
			cout << "\tTime[" << index2 << "] = " << t.times.at(index2) << endl;	
		}

	}




	return 0;
}