bool isPalindrome(int x) {
    	int digit;
    	int y = x;
    	long long rem =0;
    if(x<0)
    {
    	return false;
	}
        while(x!=0)
    	{
        	digit = x % 10;
        	rem = rem*10 + digit;
        	x = x / 10;
    	}
		return(y == rem);   
}
