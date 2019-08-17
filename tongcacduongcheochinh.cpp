#include<iostream>
#define max_dong 100
#define max_cot 100
using namespace std;

void nhapmang(int[][max_cot],int&,int&);
void xuatmag(int[][max_cot],int,int);
int tongptduongcheoching(int[][max_cot],int,int);

int main()
{
    int n,m;
    int a[max_dong][max_cot];
    nhapmang(a,m,n);
    xuatmag(a,m,n);
    cout<<"tong duong cheo chinh:"<<tongptduongcheoching(a,m,n);
    return 0;
}

void nhapmang(int a[][max_cot],int &m,int &n)
{
    int i,j;
    cout<<"\nNhap so cot cua ma tran:";
    cin>>m;
    cout<<"\nNhap so dong cua ma tran:";
    cin>>n;
    cout<<"\nNhap phan tu:";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}

void xuatmag(int a[][max_cot],int m,int n)
{
    int i,j;
    cout<<"\nTa co MaTrix nhan duoc:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int tongptduongcheoching(int a[][max_cot],int m,int n)
{
    int s=0,i,j;
    if(m!=n) return false;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j) s=s+a[i][j];
        }
    }
    return s;
}
