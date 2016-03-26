#include "CalcTime.h"
#include"SelectionSort.h"
#include"QuickSort.h"
#include<vector>
#include<time.h>
#include <stdlib.h>
CalcTime::CalcTime()
{
    //ctor
}
void CalcTime::Menu()
{
    QuickSort Quick;
    SelectionSort Select;
    vector<int> vect;
    int choice,Datatype;
    cout<<"Enter first the sorting algorithm"<<endl;
    cout<<"1 - Quick sort  "<<endl;
    cout<<"2- Selection sort "<<endl;
    cin>>choice;
    system("cls");
    cout<<"Choose the data type "<<endl;
    cout<<"1 - Random "<<endl;
    cout<<"2- Reversed " <<endl;
    cin>>Datatype;
    system("cls");
    cout<<"What function you would like to operate"<<endl;
    cout<<"1- RunOnce "<<endl;
    cout<<"2- RunAndAverage"<<endl;
    cout<<"3- RunAndExperience "<<endl;
    int fun;
    cin>>fun;
    system("cls");
    if(choice == 1 && fun == 1 &&Datatype == 1 )
       {
           int mini_int,max_int,sz;
           cout<<"Please Enter your interval from minimum to maximum then the size "<<endl;
           cin>>mini_int>>max_int>>sz;
           system("cls");
           vect = testfield.GenerateRandomList(mini_int,max_int,sz);
           time_t t=time(0);
           time(&t);
           testfield.RunOnce(Quick,vect);
           time_t t1;
           time(&t1);
           cout<<((t1 - t)*1000)/CLOCKS_PER_SEC <<endl;
       }
       else if(choice == 1 && fun == 1 &&Datatype == 2 )
       {
           int mini_int,max_int,sz;
           cout<<"Please Enter your interval from minimum to maximum then the size "<<endl;
           cin>>mini_int>>max_int>>sz;
           system("cls");
           vect = testfield.GenerateReverseOrderList(mini_int,max_int,sz);
           time_t t=time(0);
           time(&t);
           testfield.RunOnce(Quick,vect);
           time_t t1;
           time(&t1);
           cout<<((t1 - t)*1000)/CLOCKS_PER_SEC <<endl;
       }
        else if(choice == 2 && fun == 1 &&Datatype == 1 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size "<<endl;
           cin>>mini_int>>max_int>>sz;
           system("cls");
           vect = testfield.GenerateRandomList(mini_int,max_int,sz);
           time_t t=time(0);
           time(&t);
           testfield.RunOnce(Select,vect);
           time_t t1;
           time(&t1);
           cout<<((t1 - t)*1000)/CLOCKS_PER_SEC <<endl;
       }

        else if(choice == 2 && fun == 1 &&Datatype == 2 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size "<<endl;
           cin>>mini_int>>max_int>>sz;
           system("cls");
           vect = testfield.GenerateReverseOrderList(mini_int,max_int,sz);
           time_t t=time(0);
           time(&t);
           testfield.RunOnce(Select,vect);
           time_t t1;
           time(&t1);
           cout<<((t1 - t)*1000)/CLOCKS_PER_SEC <<endl;
       }

      else if(choice == 1 && fun == 2 &&Datatype == 1 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size then NumOfSets "<<endl;
           cin>>mini_int>>max_int>>sz>>NumofSets;
            system("cls");
           testfield.RunAndAverage(Quick,"Random",mini_int,max_int,sz,NumofSets);
       }

       else if(choice == 1 && fun == 2 &&Datatype == 2 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size then NumOfSets "<<endl;
           cin>>mini_int>>max_int>>sz>>NumofSets;
            system("cls");
           testfield.RunAndAverage(Quick,"Reversed",mini_int,max_int,sz,NumofSets);
       }
       else if(choice == 2 && fun == 2 &&Datatype == 1 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size then NumOfSets "<<endl;
           cin>>mini_int>>max_int>>sz>>NumofSets;
            system("cls");
           testfield.RunAndAverage(Select,"Random",mini_int,max_int,sz,NumofSets);
       }
       else if(choice == 2 && fun == 2 &&Datatype == 2 )
       {
           cout<<"Please Enter your interval from minimum to maximum then the size then NumOfSets "<<endl;
           cin>>mini_int>>max_int>>sz>>NumofSets;
            system("cls");
           testfield.RunAndAverage(Select,"Reversed",mini_int,max_int,sz,NumofSets);
       }
        else if(choice == 1 && fun == 3 &&Datatype == 1 )
       {
           cout<<"Please Enter your interval from minimum to maximum then minium size & maximum size then NumOfSets & steps"<<endl;
           cin>>mini_int>>max_int>>interval_min>>interval_max>>NumofSets>>steps;
            system("cls");
           testfield.RunExperience(Quick,"Random",mini_int,max_int,interval_min,interval_max,NumofSets,steps);
       }
        else if(choice == 1 && fun == 3 &&Datatype == 2 )
       {
           cout<<"Please Enter your interval from minimum to maximum then minium size & maximum size then NumOfSets & steps"<<endl;
           cin>>mini_int>>max_int>>interval_min>>interval_max>>NumofSets>>steps;
            system("cls");
           testfield.RunExperience(Quick,"Reversed",mini_int,max_int,interval_min,interval_max,NumofSets,steps);
       }
        else if(choice == 2 && fun == 3 &&Datatype == 1 )
       {
           cout<<"Please Enter your interval from minimum to maximum then minium size & maximum size then NumOfSets & steps"<<endl;
           cin>>mini_int>>max_int>>interval_min>>interval_max>>NumofSets>>steps;
            system("cls");
           testfield.RunExperience(Select,"Random",mini_int,max_int,interval_min,interval_max,NumofSets,steps);
       }
        else if(choice == 2 && fun == 3 &&Datatype == 2 )
       {
           cout<<"Please Enter your interval from minimum to maximum then minium size & maximum size then NumOfSets & steps"<<endl;
           cin>>mini_int>>max_int>>interval_min>>interval_max>>NumofSets>>steps;
           system("cls");
           testfield.RunExperience(Select,"Reversed",mini_int,max_int,interval_min,interval_max,NumofSets,steps);
       }
}
CalcTime::~CalcTime()
{
    //dtor
}
