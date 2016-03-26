#ifndef SORTER_H
#define SORTER_H
#include<vector>
#include<iostream>
using namespace std;
class Sorter
{
    public:
        Sorter();
        ~Sorter();
         Sorter(vector < int > );
         vector<int> Sort ();
         void setElements( vector <int> );
         vector <int> getElements();
         void show();

    protected:
        vector < int > elements;
        int sz;
    private:
};

#endif // SORTER_H
