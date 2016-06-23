/*************************************************************************
 > File Name: test.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Sat Jun  4 15:47:42 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    vector<int> Queue;
    Queue.push_back(1);
    Queue.push_back(2);
    int size=Queue.size();
    for (int i=0;i<size;i++)
        cout<<Queue[i]<<endl;

//vector<int> Temp_Queue=swap(Queue);
    vector<int>::swap(Queue[0],Queue[1]);
    for (int i=0;i<size;i++)
        cout<<Queue[i]<<endl;

}
