#pragma once
#include "pnc_map.h"

class Process
{
private:
    PNC_Map my_map;
    /* data */
public:

    Process(/* args */);
    ~Process();

    void planProcess();
};


