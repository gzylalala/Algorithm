#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

const int MAX=15;
const int INF=-999999;
int length[MAX];
int price[MAX];
int result[MAX];

int cutrod(int len[],int res[],int n)
{
    for (int i=1;i<=n;i++)
        for (int j=1;j<=i;j--)
            

}


int main()
{
    fstream fin("data.txt");

    int rowNum;

    if(fin)
    {
        rowNum=0;
        int a,b;
        while(fin>>a>>b)
        {
            rowNum++;
            length[rowNum]=a;
            price[rowNum]=b;
        }
        fin.close();
        
    }
    else
        cerr<<"error"<<endl;

    int Max=cutrod(price,rowNum);

    cout<<Max<<endl;
    cout<<cutrod(price,4)<<endl;



