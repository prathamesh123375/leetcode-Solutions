int divide(int dividend, int divisor) {
        long long result;
        if(dividend == INT_MIN && divisor == -1)
        {
            return  INT_MAX;
        }
        result = dividend/divisor;
        return result;
}
