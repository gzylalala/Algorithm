/*************************************************************************
 > File Name: Iterative_Max_Heapify.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Wed Jun  1 13:26:21 2016
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

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Max_Heapify(int Array[],int length, int i)
{
    int largest,l,r;
    while(i<length)
    {
        l=2*i+1;
        r=2*i+2;
        largest=i;
        if(l<length & Array[l]>Array[largest])
            largest=l;
        if(r<length & Array[r]>Array[largest])
            largest=r;

        if(largest!=i)
        {
            swap(Array[largest],Array[i]);
            i=largest;
        }
        else
            break;
    }
}

void Build_Max_Heap(int Array[],int length){
    for (int j=length/2;j>=0;j--)
        Max_Heapify(Array,length,j);
}
int main()
{
    /* int Array[MAX_Length]={0}; 
    Random(Array); */
    int Array[MAX_Length]={16,51,37,97,68,30,86,59,26,67};
    Build_Max_Heap(Array,MAX_Length);
    for(int k=MAX_Length;k>=2;k--)
    {
        swap(Array[k-1],Array[0]);
        Max_Heapify(Array,k-1,0);
    }
    for(int i=0;i<MAX_Length;i++)
        cout<<Array[i]<<endl;
}
