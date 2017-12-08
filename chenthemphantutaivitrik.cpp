#include<iostream>
using namespace std;

void nhapmang(int[],int&);
void xuatmang(int[],int);
void chenthemphantutaivitrik(int[],int&,int,int);

int main()
{
    int n;
    int k,x;
    int a[100];
    nhapmang(a,n);
    xuatmang(a,n);
    do{
        cout<<"\nNhap vi tri muon them vao mang:";
        cin>>k;
        cout<<"Nhap gia tri cua mang them vao:";
        cin>>x;
    } while(k>n||k<0);
    chenthemphantutaivitrik(a,n,k,x);
    xuatmang(a,n);
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

void chenthemphantutaivitrik(int a[],int &n,int k,int x)
{
    int i;
    for(i=n-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=x;
    n++;
}

