#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

const int MAX=15;
const int INF=-999999;
int length[MAX];
int price[MAX];

int cutrod(int len[],int n)
{
    if(n==0)
        return 0;

    int q=INF;
    for(int i=1;i<=n;i++)
        q=max(q,len[i]+cutrod(len,n-i));

    return q;
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


}
