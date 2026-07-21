bool isPerfectSquare(int num) {
    long long a = num;
    long long i;
    long long y;
    for(i=0;i*i<=a;i++)
    {
        y = i * i;
        if(y==a)
        {
            return true;
        }
    }
    return false;
}
