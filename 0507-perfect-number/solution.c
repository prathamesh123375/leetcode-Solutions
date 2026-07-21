bool checkPerfectNumber(int num) {
    int digit = 1;
    unsigned long long a = num;
    int i;
    if(a == 1)
    {
        return false;
    }
    for(i=2;i<=a/2;i++)
    {
            if(a%i == 0)
            {
                digit = digit + i;
            }
    }
    if(digit == a)
    {
        return true;
    }
    return false;
}
