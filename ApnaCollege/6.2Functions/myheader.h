int Comb(int,int);
int fact(int num)
{
    int f=1;
    
    while(num>0)
    {
        f=f*num;
        num--;
    }

    return f;
}

int Comb(int n,int r)
{   int comb,deno;
    deno=n-r;
    comb= fact(n)/(fact(deno)*fact(r));
    return comb;
}