int maximumProduct(int* nums, int numsSize) {
    long long a = LLONG_MIN, b = LLONG_MIN, c = LLONG_MIN;
    long long x = LLONG_MAX, y = LLONG_MAX;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > a) {
            c = b;
            b = a;
            a = nums[i];
        } else if (nums[i] > b) {
            c = b;
            b = nums[i];
        } else if (nums[i] > c) {
            c = nums[i];
        }
        if (nums[i] < x) {
            y = x;
            x = nums[i];
        } else if (nums[i] < y) {
            y = nums[i];
        }
    }
    long long d = a * b * c;
    long long e = x * y * a;
    if (d > e) {
        return d;
    } else {
        return e;
    }
}
