int tribonacci(int n) {
    if(n == 0)
    {
        return 0;
    }
    if(n == 1 || n == 2)
    {
        return 1;
    }
   long long  x = 0,y = 1,z = 1;
    long long a;
    for(int i=3;i<=n;i++)
    {
        a = x + y + z;
        x = y;
        y = z;
        z = a;
    }
    return z;
}
