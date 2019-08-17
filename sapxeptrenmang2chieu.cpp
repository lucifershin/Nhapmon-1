void sapxep(int a[][max_cot],int m,int n)
{
    int k,i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i][j]>=a[i][k])
                {
                    int templ=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=templ;
                }
            }
        }
    }
}
