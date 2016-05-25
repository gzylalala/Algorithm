/*************************************************************************
 > File Name: quicksort.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Tue May 17 18:30:15 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}

int Partition(int Ary[], int p, int r)
{
    int pivot_value=Ary[r];
    int pivot=p-1;
    for(int j=p;j<r;j++)
    {
        if(Ary[j]<=pivot_value)
        {
            pivot++;
            swap(Ary[j],Ary[pivot]);
        }
    }
    pivot++;
    swap(Ary[pivot],Ary[r]);
    return pivot;
}

void Quicksort(int Ary[],int start,int end)
{
    if(start<end)
    {
        int pivot=Partition(Ary,start,end);
        Quicksort(Ary,start,pivot-1);
        Quicksort(Ary,pivot+1,end);
    }
}
int main()
{
    int array[]={13,19,9,5,12,8,7,4,21,2,6,11};
    int length=sizeof(array)/sizeof(array[0]);
    Quicksort(array,0,length);
    for(int i=0;i<length;i++)
        cout<<array[i]<<endl;

}
