int removeDuplicates(int* nums, int numsSize){
    int freq[201]={0};
    int returnSize=0;
    for(int i=0;i<numsSize;i++)
        ++freq[nums[i]+100];
    for(int i=0;i<201;i++)
        if(freq[i])
            nums[returnSize++]=i-100;
    return returnSize;
}