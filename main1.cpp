#include<iostream>
using namespace std;

void nhapmang(int[],int&);
void xuatmang(int[],int);
void demsoluongcacphantu(int[],int);

int main(){
    int n;
    int a[100];
    nhapmang(a,n);
    xuatmang(a,n);
    demsoluongcacphantu(a,n);
    return 0;
}
void nhapmang(int a[],int &n)
{
    int i;
    cout<<"\nNhap so phan tu:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"\na["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatmang(int a[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void demsoluongcacphantu(int a[],int n)
{
    int i,j;
    int kt,dem=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        {
           if(a[i]==a[j])
           {kt=1; break;}
           else kt=0;
        }
        if(kt==0) dem++;
    }

    cout<<"\n"<<dem;
}
