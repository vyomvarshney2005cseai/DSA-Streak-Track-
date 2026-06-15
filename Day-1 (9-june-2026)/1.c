
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int cmpfunc(const void* a, const void* b) {
        int x = *(int*)a;
        int y = *(int*)b;
        if (x < y)
            return -1;
        if (x > y)
            return 1;
        return 0;
    }
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    for(int i=1;i<numsSize;i++){
        if(i%2==1){
            arr[i-1]=nums[i];
            arr[i]=nums[i-1];
        }}
        return arr;
    }
