int cmpfunc(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

void findZeroSumTriplets(int* nums, int n) {
    qsort(nums, n, sizeof(int), cmpfunc);
    int found = 0;
    
    for (int i = 0; i < n ; i++) {
        
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[left] + nums[right] + nums[i];

            if (sum == 0) {
                printf("%d %d %d\n", nums[i], nums[left], nums[right]);
                found = 1;
                
                left++;
                right--;

                
                while ( nums[left] == nums[left - 1]) {
                    left++;
                }
                while (nums[right] == nums[right + 1]) {
                    right--;
                }
            } 
           
            else if (sum < 0) {
                left++; 
            } 
            else { 
                right--; 
            }
        }
    }

    
    if (found == 0) {
        printf("-1\n");
    }
}