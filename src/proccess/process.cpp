#include <iostream>
#include "process.h"
using std::cout,std::endl;
Process::Process(/* args */)
{

}

Process::~Process()
{
}

void Process::planProcess(){
        cout << "this is planProcess" <<endl;    
        my_map.map_info();
        cout << "planProcess success" <<endl;  
}