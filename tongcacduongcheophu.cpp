int tongptduongcheophu(int a[][max_cot],int m,int n)
{
    int s=0,i,j;
    int x=1;
    if(m!=n) return false;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n-x))
            {
                s=s+a[i][j];
                x++;
            }
        }
    }
    return s;
}
