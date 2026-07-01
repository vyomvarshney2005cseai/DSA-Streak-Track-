int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int hash[10]={0};
    for(int i=0;i<numsSize;i++){
        int a=nums[i];
        if(a==0){
            hash[0]++;
        }
        while(a!=0){
            hash[a%10]++;
            a/=10;
        }
    }
    return hash[digit];
}