int ktsonguyento(int n)
{
    int i;
    int dem=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            dem=dem+1;
        }
    }
    if(dem==2) return 1;
    else return 0;
}
