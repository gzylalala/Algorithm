/*************************************************************************
 > File Name: Max_Minum.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Mon May 30 16:42:31 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<ctime>

using namespace std;

const int MAX_Length=10;
const int MAX_Value=100;
void Random(int Array[])
{
   srand(time(NULL));
   for(int i=0;i<MAX_Length;i++)
   {
    Array[i]=rand()%MAX_Value;
    printf("%d\n",Array[i]);
   }
}
int main()
{
    int Array[MAX_Length]={0};
    Random(Array);
    int temp1=Array[(2-MAX_Length%2)/2];
    int temp2=Array[(1-MAX_Length%2)/2];
    int Max=temp1>temp2?temp1:temp2;
    int Min=temp1>temp2?temp2:temp1;
    for (int i=(2-MAX_Length%2)/2+1;i<MAX_Length;i+=2)
    {
        temp1=Array[i]>Array[i+1]?Array[i]:Array[i+1];
        temp2=Array[i]<Array[i+1]?Array[i]:Array[i+1];
        if(temp1>Max)
            Max=temp1;
        if(temp2<Min)
            Min=temp2;
    }

    cout<<"Max number is:"<<Max<<endl;
    cout<<"Min number is:"<<Min<<endl;

}
