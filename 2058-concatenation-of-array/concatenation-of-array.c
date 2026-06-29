/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int n=numsSize*2;
   int* ans=(int*)malloc(sizeof(int)*n);
   *returnSize=n;
   for(int i=0;i<numsSize;i++){
    ans[i]=nums[i];
   }
   for(int i=numsSize;i<n;i++){
    ans[i]=nums[i-numsSize];
   }
   return ans;
}