/*************************************************************************
 > File Name: Priority_Queue.h
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Sat Jun  4 15:27:59 2016
 ************************************************************************/

#ifndef _PRIORITY_QUEUE_H
#define _PRIORITY_QUEUE_H

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

class Priority_Queue {
    private:
        int Number;
        vector<int> Max_Heap;
    public:
        Priority_Queue();
        Priority_Queue(vector<int> Heap);
        ~Priority_Queue();
        void Print_Out();
        void Max_Heapify(vector<int> &Heap, int i);
        void Build_Max_Heap(vector<int> &Heap);
        inline void swap(vector<int> &Heap, int a, int b)
        {
            int temp=Heap[a];
            Heap[a]=Heap[b];
            Heap[b]=temp;
        }
        int Get_Heap_Maxium();
        int Heap_Extract_Max();
        void Heap_Increase_Key(int position, int key);
        void Max_Heap_Insert(int key);
};
#endif
