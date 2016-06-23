/*************************************************************************
 > File Name: main.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Wed Jun 22 13:33:57 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<vector>
#include<algorithm>

#include "Priority_Queue.h"

using namespace std;

const int SIZE=10;
int main()
{
    vector<int> test;
    srand(99999999);
    for (int i=0;i<SIZE;i++)
    {
        test.push_back(rand()%1000);
        cout<<test[i]<<endl;
    }
    
    Priority_Queue Queue_1(test);

    Queue_1.Print_Out();
    int Max=Queue_1.Heap_Extract_Max();
    cout<<Max<<endl;
    Queue_1.Print_Out();
    Queue_1.Max_Heap_Insert(1000);
    Queue_1.Print_Out();
}
