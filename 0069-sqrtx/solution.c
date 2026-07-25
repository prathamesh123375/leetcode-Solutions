int mySqrt(int x) {
   long long a = x;
   long long i;
   for(i=0;i*i<=a;i++)
    {
       if(i*i == a)
       {
           return i;
       }         
    }
    return i-1;
}
