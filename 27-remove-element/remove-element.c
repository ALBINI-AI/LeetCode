
int removeElement(int* nums, int n, int val){
    int z=0,count =0;
    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[z]=nums[i];
            z++;
            count ++;
        }
    }
    return count;
}