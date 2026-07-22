bool isPowerOfTwo(int n) {
    long long a = n;
    int i;
    int y = 1;
    if(a==1||a==2)
    {
        return true;
    }
    if(a==0)
    {
        return false;
    }
    while(a%2==0)
    {
        a = a / 2;
        if(a == 2)
        {
            return true;
        }
    }
    return false;

}
  
