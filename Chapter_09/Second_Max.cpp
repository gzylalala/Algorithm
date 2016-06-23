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
#include<cmath>
#include<algorithm>
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
    int height=log2(MAX_Length);
    int Array_Size=pow(2,height+2);
    int Tree[Array_Size];
    memset(Tree,MAX_Value,sizeof(Tree));
    for(int i=0;i<MAX_Length;i++)
    {
        int Array_index=pow(2,height+1)-1+i;
        Tree[Array_index]=Array[i];
    }
    int length=MAX_Length;
    int index=0;
    for(int h=height;h>=0;h--)
    {
        length=ceil(length/2.0);
        for(int k=0;k<length;k++)
        {
            index=pow(2,h)-1+k;
            Tree[index]=Tree[2*index+1]<Tree[2*index+2]?Tree[2*index+1]:Tree[2*index+2];
        }
    }

    cout<<"The smallest Value is: "<<Tree[0]<<endl;
    int Second_Small=MAX_Value;
    int Second_index=0;
    int Small_index=0;
    int Large_index=0;
    for( int h=1;h<=height+1;h++)
    {
        if(Tree[Second_index*2+1]>Tree[Second_index*2+2])
        {
            Large_index=Second_index*2+1;
            Small_index=Second_index*2+2;
        }
        else
        {
            Large_index=Second_index*2+2;
            Small_index=Second_index*2+1;
        }
        

        if(Tree[Small_index]!=Tree[0])
        {
            Second_Small=Tree[Small_index];
            break;
        }
        else
        {
            Second_Small=min(Second_Small,Tree[Large_index]);
            Second_index=Small_index;
        }
    }

    cout<<"The Second Small is: "<<Second_Small<<endl;
    
    
}
