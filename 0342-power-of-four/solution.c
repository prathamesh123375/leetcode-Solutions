bool isPowerOfFour(int n) {
    long long a = n;
    int i;
    int y = 1;
    if(a==1||a==4)
    {
        return true;
    }
    if(a==0)
    {
        return false;
    }
    while(a%4==0)
    {
        a = a / 4;
        if(a == 4)
        {
            return true;
        }
    }
    return false;

}

