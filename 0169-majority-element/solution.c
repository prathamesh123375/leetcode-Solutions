int majorityElement(int* nums, int numsSize) {
    int element = 0, cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (cnt == 0) {
            element = nums[i];
        }
        if (nums[i] == element) {
            cnt++;
        } else {
            cnt--;
        }
    }
    return element;
}
