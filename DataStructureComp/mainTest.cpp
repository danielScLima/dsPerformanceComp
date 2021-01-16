#include <iostream>
using namespace std;

#include <vector>

#include "headers/comparissonrunner.h"
#include "headers/datastructureenumtypes.h"


int main()
{
	ComparissonRunner comparissonRunner;
	AvlTreeEnum avlEnum;
	std::vector<EnumDataStructureType> vec = {avlEnum};

	SimulationResults sR = comparissonRunner.run
	(
	    0, //0-insert, 1-remove,2search
	    vec
	);

	cout << "Op type: " << sR.operation << endl;


	return 0;
}