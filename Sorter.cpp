#include "Sorter.h"
#include<vector>
#include<iostream>

using namespace std;

Sorter::Sorter()
{
    sz= 0;
    elements.clear();
}
Sorter::Sorter(vector <int> v)
{

    elements.clear();
    int len = v.size();
    for(int i = 0 ; i< len ; i++)
    elements.push_back(v[i]);
}
void Sorter::setElements(vector < int > v)
{
    elements.clear();
    int len = v.size() ;
    for(int  i = 0 ; i < len ; i++ )
      elements.push_back(v[i]);
}
vector<int> Sorter::getElements()
{
  return elements;
}
vector<int> Sorter::Sort()
{
}
void Sorter::show()
{
    int len = elements.size() ;
    for(int  i = 0 ; i < len ; i++)
        cout<<elements[i]<<" ";
    cout<<endl;
}
Sorter::~Sorter()
{
    //dtor
}
