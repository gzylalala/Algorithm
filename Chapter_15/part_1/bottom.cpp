#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

const int MAX=15;
const int INF=-999999;
int length[MAX];
int price[MAX];
int result[MAX];

int cutrod(int price[],int res[],int n)
{
    res[0]=0;
    
    for (int i=1;i<=n;i++)
        for (int j=1;j<=i;j++)
            res[i]=max(res[i],res[i-j]+price[j]);

    return res[n];
            

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

    memset(result,0,sizeof(result));
    int Max=cutrod(price,result,rowNum);

    cout<<Max<<endl;


}
