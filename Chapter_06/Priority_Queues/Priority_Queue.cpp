/*************************************************************************
 > File Name: Priority_Queue.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Wed Jun 22 12:56:40 2016
 ************************************************************************/

#include "Priority_Queue.h"

Priority_Queue::Priority_Queue()
{
    Number=0;
}

Priority_Queue::Priority_Queue(vector<int> Heap)
{
    Number=Heap.size();
    for(int i=0;i<Number;i++)
        Max_Heap.push_back(Heap[i]);
    Build_Max_Heap(Max_Heap);
}

Priority_Queue::~Priority_Queue()
{
    Max_Heap.clear();
    Number=0;
}

void Priority_Queue::Print_Out()
{
    cout<<"The Max Heap is:"<<endl;
    for(int i=0;i<Number;i++)
        cout<<Max_Heap[i]<<" ";
    cout<<endl;
}

void Priority_Queue::Max_Heapify(vector<int> &Heap, int i)
{
    int largest=i;
    int l=2*i+1,r;
    while(l<Number)
    {
        l=2*i+1;
        r=2*i+2;
        if(l<Number & Heap[l]>Heap[largest])
            largest=l;
        if(r<Number & Heap[r]>Heap[largest])
            largest=r;

        if(largest!=i)
        {
            swap(Heap,i,largest);
            i=largest;
        }
        else
            break;
    }
}

void Priority_Queue::Build_Max_Heap(vector<int> &Heap)
{
    for (int j=Number/2;j>=0;j--)
        Max_Heapify(Heap,j);
}

int Priority_Queue::Get_Heap_Maxium()
{
    return Max_Heap[0];
}

int Priority_Queue::Heap_Extract_Max()
{
    int Max=Max_Heap[0];
    Max_Heap[0]=Max_Heap[Number-1];
    Max_Heap.pop_back();
    Number--;
    Max_Heapify(Max_Heap,0);
    return Max;
}


void Priority_Queue::Heap_Increase_Key(int position, int key)
{
    Max_Heap[position]=key;
    int parent;
    while(position>0)
    {
        parent=(position-1)/2;
        if(Max_Heap[position]>Max_Heap[parent])
        {
            swap(Max_Heap,position,parent);
            position=parent;
        }
        else
            break;
    }
}

void Priority_Queue::Max_Heap_Insert(int key)
{
    Max_Heap.push_back(key);
    Number++;
    Heap_Increase_Key(Number-1,key);
}
