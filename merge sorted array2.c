void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int tem,j=0;
    for(int i=nums1Size-nums2Size;i<nums1Size;i++){
        if(nums1[i]==0){
            nums1[i]=nums2[j];
            j++;
        }
    }
    for(int i=0;i<nums1Size-1;i++)
    {
        for(int j=i+1;j<nums1Size;j++)
        {
            if(nums1[i]>nums1[j]){
                tem=nums1[i];
                nums1[i]=nums1[j];
                nums1[j]=tem;
            }
        }
        printf("%d",nums1[i]);
    }
    printf("%d",nums1[nums1Size-1]);
}
