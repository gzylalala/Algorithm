/*************************************************************************
 > File Name: HeapSort.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Fri May 13 14:36:29 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

void Max_Heapify(int ary[],int length,int i)
{
    int l=2*i+1;
    int r=2*i+2;

    int largest=i;
    if(ary[l]>ary[i])
        largest=l;

    if(ary[r]>ary[largest])
        largest=r;

    if(largest!=i)
    {
        int temp=ary[i];
        ary[i]=ary[largest];
        ary[largest]=temp;

        Max_Heapify(ary,length,largest);
    }
}

int main()
{
    int array[]={14,16,10,8,7,9,3,2,4,1};

    int length=sizeof(array)/sizeof(int);

    Max_Heapify(array,length,0);
    for(int i=0;i<length;i++)
        cout<<array[i]<<endl;

}
