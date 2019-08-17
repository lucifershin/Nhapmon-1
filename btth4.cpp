#include<iostream>
using namespace std;

void nhapmang(int[],int&);
void xuatmang(int[],int);
void timgiatrilonnhathuk(int[],int,int);

int main(){
    int n,k;
    int a[100];
    nhapmang(a,n);
    xuatmang(a,n);
    do{
        cout<<"\nnhap gia tri lon thu k muon lay:";
        cin>>k;
    } while(k>n||k<=0);
    timgiatrilonnhathuk(a,n,k);
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
void timgiatrilonnhathuk(int a[],int n,int k)
{
    int i;
    int maxx=a[0],x_max=0;
    int dem=1;
    while(1)
    {
        for(i=0;i<n;i++)
        {
            if(maxx<=a[i])
            {
                maxx=a[i];
                x_max=i;
            }
        }
        if(dem==k) break;
        for(i=x_max;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=NULL;
        n--;
        dem++;
        maxx=a[0];
    }
    cout<<"\nGia tri lon thu k:"<<maxx;
}

