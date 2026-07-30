bool threeConsecutiveOdds(int* arr, int arrSize) {
    int i;
    if(arrSize<3)
    {
        return false;
    }
    for(i=0;i<arrSize-2;i++)
    {
        {
            if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2)
            {
                     return true;
            }
        }
    }
    return false;
}
