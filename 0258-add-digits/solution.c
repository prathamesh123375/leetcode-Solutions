int addDigits(int num){
    long long a = num;
    long long sum=0;
    while(a>=10)
    {
        sum = 0;
        while(a>0)
        {
            sum+=a%10;
            a = a/10;
        }
       a = sum;
    }
    return a;
}   
    

