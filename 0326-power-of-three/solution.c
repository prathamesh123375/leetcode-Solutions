bool isPowerOfThree(int n) {
    long long a = n;
    int i;
    int y = 1;
    if(a==1||a==3)
    {
        return true;
    }
    if(a==0)
    {
        return false;
    }
    while(a%3==0)
    {
        a = a / 3;
        if(a == 3)
        {
            return true;
        }
    }
    return false;

}
  

