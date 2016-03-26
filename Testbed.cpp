#include "Testbed.h"
#include"Sorter.h"
#include"SelectionSort.h"
#include<cstdlib>
#include<iostream>
#include"QuickSort.h"
#include<time.h>
#include<iomanip>
using namespace std;

Testbed::Testbed()
{
    arr.clear();
}

void Testbed::SetElements(vector < int > vect )
{
    for(int  i = 0 ;i < vect.size() ; i++)
        arr.push_back(vect[i]);
}

vector< int > Testbed::GetElements()
{
    return arr;
}

vector<int> Testbed::GenerateRandomList(int minimum , int maximum , long long int size )
{
    int counter = 0;
    vector < int > temp ;
    int range = maximum - minimum + 1;
    while(counter != size )
    {
      temp.push_back( rand()% range + minimum );
      counter++;
    }
    SetElements(temp);
    SelectionSort s;
    s.setElements(temp);
    QuickSort q;
    q.setElements(temp);
    return temp;
}

vector<int> Testbed::GenerateReverseOrderList(int minimum , int maximum , long long int size)
{
    arr.clear();
    vector <int> rev = GenerateRandomList(minimum,maximum,size);
    SelectionSort s;
    s.setElements(GetElements());
    QuickSort q;
    q.setElements(GetElements());
    rev = s.reverse();
    return rev;
}

vector<int> Testbed::RunOnce(SelectionSort s , vector <int > v )
{
        s.setElements(v);
        v = s.sort();
        return v;
}
vector<int> Testbed::RunOnce(QuickSort s , vector <int > v )
{
        s.setElements(v);
        v = s.sort();
        return v;
}

double Testbed::RunAndAverage(SelectionSort S , string type , int mini ,int maxi ,long long int size ,int set_nums )
{
    vector <int> x[set_nums];
    double TotalTime = 0.0 , AverageTime = 0.0;
    time_t t,t1;
     if(type == "Random"){
        for (int i = 0 ; i < set_nums ; i++){
        x[i] = GenerateRandomList(mini,maxi,size);
        t = time(0);
        time(&t);
       x[i] = RunOnce(S,x[i]);
        t1=time(0);
        time(&t1);
        TotalTime+= double(t1 - t) / 1000 ;
      }
     }
    else if (type =="Reversed"){
        clock_t t;
        for (int i = 0 ; i < set_nums ; i++){
        x[i] = GenerateReverseOrderList(mini , maxi , size);
        t = time(0);
        time(&t);
        x[i] = RunOnce(S,x[i]);
        t1= time(0);
        time(&t1);
        TotalTime+= double(t1 - t ) / 1000 ;
         }
    }
    AverageTime = TotalTime / set_nums ;
    return AverageTime;
}
double Testbed::RunAndAverage(QuickSort S , string type , int mini ,int maxi ,long long int size ,int set_nums )
{
    vector <int> x[set_nums];
    double TotalTime = 0.0 , AverageTime = 0.0;
    time_t t,t1;
     if(type == "Random"){
        for (int i = 0 ; i < set_nums ; i++){
        x[i] = GenerateRandomList(mini,maxi,size);
        t = time(0);
        time(&t);
       x[i] = RunOnce(S,x[i]);
        t1=time(0);
        time(&t1);
        TotalTime+= double(t1 - t) / 1000 ;
      }
     }
    else if (type =="Reversed"){
        clock_t t;
        for (int i = 0 ; i < set_nums ; i++){
        x[i] = GenerateReverseOrderList(mini , maxi , size);
        t = time(0);
        time(&t);
        x[i] = RunOnce(S,x[i]);
        t1= time(0);
        time(&t1);
        TotalTime+= double(t1 - t ) / 1000 ;
         }
    }
    AverageTime = TotalTime / set_nums ;
    return AverageTime;
}
void Testbed::RunExperience(SelectionSort S ,string type ,int mini ,int maxi ,long long int min_int ,long long int max_int ,int sets_num,int step)
{
  vector <vector <int> > v;
   if(type == "Random")
   {
      for(int i = min_int ; i <=max_int ; i+=step)
     {
      cout<<"the average of size  "<< i <<" for "<<sets_num <<" array is : "<<setw(8);
      for ( int j = i ; j < sets_num ; i++)
      {
          v.push_back(GenerateRandomList(mini ,maxi , i ));
      }
      cout<<RunAndAverage(S,"Random",mini,maxi,i,sets_num);
      cout<<endl;
     }
   }
   else if( type == "Reversed")
   {
      for(int i = min_int ; i <=max_int ; i+=step)
     {
      cout<<"the average of size  "<< i <<" for "<<sets_num <<" array is : "<<setw(8);
      for ( int j = i ; j < sets_num ; i++)
      {
          v.push_back(GenerateReverseOrderList(mini ,maxi , i ));
      }
      cout<<RunAndAverage(S,"Reversed",mini,maxi,i,sets_num);
      cout<<endl;
     }
  }
}
void Testbed::RunExperience(QuickSort Q ,string type ,int mini ,int maxi ,long long int min_int ,long long int max_int ,int sets_num,int step)
{
  vector <vector <int> > v;
   if(type == "Random")
   {
      for(int i = min_int ; i <=max_int ; i+=step)
     {
      cout<<"the average of size  "<< i <<" for "<<sets_num <<" array is : "<<setw(8);
      for ( int j = i ; j < sets_num ; i++)
      {
          v.push_back(GenerateRandomList(mini ,maxi , i ));
      }
      cout<<RunAndAverage(Q,"Random",mini,maxi,i,sets_num);
      cout<<endl;
     }
   }
   else if( type == "Reversed")
   {
      for(int i = min_int ; i <=max_int ; i+=step)
     {
      cout<<"the average of size  "<< i <<" for "<<sets_num <<" array is : "<<setw(8);
      for ( int j = i ; j < sets_num ; i++)
      {
          v.push_back(GenerateReverseOrderList(mini ,maxi , i ));
      }
      cout<<RunAndAverage(Q ,"Reversed",mini,maxi,i,sets_num);
      cout<<endl;
     }
  }
}

Testbed::~Testbed()
{
    //dtor
}
