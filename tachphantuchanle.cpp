#include<iostream>
using namespace std;
#define max_x 100

void nhapmang(int[],int&);
void xuatmang(int[],int);
void tachphantuchanle(int[],int,int&,int&,int[],int[]);

int main()
{
    int a[max_x];
    int chan[max_x];
    int le[max_x];
    int n;
    int k,h;
    nhapmang(a,n);
    xuatmang(a,n);
    tachphantuchanle(a,n,k,h,chan,le);
    xuatmang(chan,k);
    xuatmang(le,h);
    return 0;
}

void nhapmang(int a[],int &n)
{
    int i;
    do{
        cout<<"Nhap so phan tu cua mang:";
        cin>>n;
    } while(n>99||n<0);
    for(i=0;i<n;i++)
    {
        cout<<"\na["<<i<<"]=";
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

void tachphantuchanle(int a[],int n,int &k,int &h,int chan[],int le[])
{
    k=h=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) chan[k++]=a[i];
        else le[h++]=a[i];
    }
}
