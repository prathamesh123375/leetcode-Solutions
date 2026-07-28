bool judgeSquareSum(int c) {
    long long i=0,j=0;
   while(j*j<=c)
   {
    j++;
   }
   j--;
   while(i<=j)
   {
        long long sum = i*i + j*j;
        if(sum == c)
        {
            return true;
        }
        else if(sum<c)
        {
            i++;
        }
        else
        {
            j--;
        }
   }
    return false;
}
