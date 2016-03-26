#ifndef QUICKSORT_H
#define QUICKSORT_H
#include"Sorter.h"

class QuickSort: public Sorter
{
    public:
        QuickSort();
        ~QuickSort();
        vector<int> sort();
        QuickSort(vector <int> );
        void quickSort(vector <int >& , int start ,int fin);
        int part(vector<int>& , int start ,int fin);
    protected:
    private:
};

#endif // QUICKSORT_H
