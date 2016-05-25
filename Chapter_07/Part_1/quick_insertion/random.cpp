/*************************************************************************
 > File Name: random.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Tue May 24 12:49:34 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<ctime>
#include<fstream>
using namespace std;

const int MAX_Length=1e2;

int main()
{
    srand(time(NULL));
    ofstream fout;
    fout.open("random.txt");
    for (int i=0;i<MAX_Length;i++)
    {
        int random_value=rand();
        fout<<random_value<<endl;
    }
    fout.close();
}
