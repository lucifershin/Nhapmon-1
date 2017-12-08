#include<iostream>
using namespace std;

void nhapmang(int[],int&);
void xuatmang(int[],int);
void ghep2mangmotchieuthanh1(int[],int&,int[],int[],int,int);

int main()
{
    int k,h;
    int n;
    int a[100],b[100],c[100];
    nhapmang(b,k);
    xuatmang(b,k);
    nhapmang(c,h);
    xuatmang(c,h);
    ghep2mangmotchieuthanh1(a,n,b,c,k,h);
    xuatmang(a,n);
}

void nhapmang(int a[],int &n)
{
    int i;
    do{
        cout<<"\nNhap so phan tu cua mang:";
        cin>>n;
    } while(n>99||n<0);
    for(i=0;i<n;i++)
    {
        cout<<"\n["<<i<<"]=";
        cin>>a[i];
    }
}

void xuatmang(int a[],int n)
{
    int i;
    cout<<"\nCac phan tu trong mang nhan duoc:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void ghep2mangmotchieuthanh1(int a[],int &n,int b[],int c[],int k,int h)
{
    int i;
    n=0;
    for(i=0;i<k;i++)
        a[n++]=b[i];
    for(i=0;i<h;i++)
        a[n++]=c[i];
}
