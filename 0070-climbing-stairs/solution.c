int climbStairs(int n) {
    int x = 0, y = 1, z;
    for (int i = 0; i < n; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}
