#ifndef TESTBED_H
#define TESTBED_H
#include<vector>
#include<iostream>
#include"SelectionSort.h"
#include"Sorter.h"
#include"QuickSort.h"

using namespace std;
class Testbed
{
    public:
        Testbed();
        ~Testbed();
        vector<int> GenerateRandomList(int ,int , long long int);
        vector<int> GenerateReverseOrderList(int ,int ,long long int );
        vector<int> RunOnce(SelectionSort  , vector<int> );
        vector<int> RunOnce(QuickSort  , vector<int> );
        double RunAndAverage(SelectionSort , string , int ,int ,long long int ,int);
        double RunAndAverage(QuickSort , string , int ,int ,long long int ,int);
        void RunExperience(SelectionSort ,string ,int  ,int  ,long long int  ,long long  int ,int ,int );
        void RunExperience(QuickSort ,string ,int  ,int  ,long long int  ,long long  int ,int ,int );

        void SetElements(vector <int > );
        vector < int >  GetElements() ;

       protected:
        vector < int > arr;

    private:
};

#endif // TESTBED_H
