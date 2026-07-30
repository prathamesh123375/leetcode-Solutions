double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    int numsSize = nums1Size + nums2Size;
    int nums[numsSize];
    int i = 0, j = 0, x = 0, a;
    while (i < nums1Size || j < nums2Size) {
        if (i < nums1Size && j < nums2Size) {
            if (nums1[i] <= nums2[j]) {
                nums[x] = nums1[i];
                i++;

            } else {
                nums[x] = nums2[j];
                j++;
            }
            x++;
        }
        if (j >= nums2Size) {
            nums[x] = nums1[i];
            x++;
            i++;
        } else if (i >= nums1Size) {
            nums[x] = nums2[j];
            x++;
            j++;
        }
    }
    a = numsSize / 2;
    if (numsSize % 2 == 0)
        return (nums[a] + nums[a - 1]) / 2.0;
    return nums[a];
}
