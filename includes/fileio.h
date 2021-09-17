
#ifndef FILEIO_H_

#define FILEIO_H_
#include <vector>
#include <string>
#include "constants.h"
namespace KP{
	int load(const std::string filename, std::vector<process> &myProcesses);
	int save(const std::string filename, std::vector<process> &myProcesses);
	
	
	
	
}
#endif


