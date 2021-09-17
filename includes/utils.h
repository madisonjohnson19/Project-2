#include <vector>
#include "constants.h"
#ifndef UTILS_H_
#define UTILS_H_

namespace KP{
	void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
	process getNext(std::vector<process> &myProcesses);
	int getSize(std::vector<process> &myProcesses);
	int handleMissingData(std::vector<process> &myProcesses);

	
	
	
}
#endif



