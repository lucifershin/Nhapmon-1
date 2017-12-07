#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0) break;
            else cout<<i<<" la so nguyen to"<<endl;
        }
    }
    return 0;
}
