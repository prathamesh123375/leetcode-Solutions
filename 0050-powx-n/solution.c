double myPow(double x, int n) {
    int i;
    long long a = n;
    double y = 1.0;
    if(n<0)
    {
        x = 1.0 / x;
        a = -(a);
    }
        while(a>0)
        {
            if(a % 2 == 1)
             y = y * x;   
             x = x*x;
             a = a /2;       
        }
       return y;
}
