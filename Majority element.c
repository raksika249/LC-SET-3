int majorityElement(int* nums, int numsSize) {
    int dup=1,k=1,temp=nums[0];
    for(int i=0;i<numsSize-1;i++){
        dup=1;
        if(nums[i]!=-9999){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                dup++;
                nums[j]=-9999;
            }
        }
        if(dup>k){
        temp=nums[i];
        k=dup;
        }
    }
    }
    if(k>numsSize/2)
    return temp;
    return nums[0];
}
