#ifndef CALCTIME_H
#define CALCTIME_H
#include"Testbed.h"

class CalcTime
{
    public:
        CalcTime();
        ~CalcTime();
        void Menu();
    protected:
    private:
        Testbed testfield;
        int mini_int,max_int,sz,NumofSets,interval_min,interval_max,steps;
};

#endif // CALCTIME_H
