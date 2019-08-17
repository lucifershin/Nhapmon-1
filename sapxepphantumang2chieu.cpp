void sapxepphantu(int a[][max_cot],int m,int n)
{
    int i,j;
    for(i=0;i<=m*n-2;i++)
    {
        for(j=i+1;j<=m*n-1;j++)
        {
            if(a[i/n][i%n]>a[j/n][j%n])
            {
                int temp=a[i/n][i%n];
                a[i/n][i%n]=a[j/n][j%n];
                a[j/n][j%n]=temp;
            }
        }
    }
}
