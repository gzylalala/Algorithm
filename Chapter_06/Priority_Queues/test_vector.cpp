/*************************************************************************
 > File Name: test_vector.cpp
 > Author: GAO Zhiyuan
 > Mail: 
 > Created Time: Wed Jun 22 10:22:01 2016
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

void  increase(vector<int> &test)
{
    test.push_back(2);

}

int main()
{
    vector<int> test;
    test.push_back(1);
    increase(test);
    cout<<test.size()<<endl;
        


}
