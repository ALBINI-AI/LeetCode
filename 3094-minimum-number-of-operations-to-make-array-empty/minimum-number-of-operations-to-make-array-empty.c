int minOperations(int* nums, int numsSize){
    int freq[1000001]={0};
    int max=0;
    int ans=0;
    int three=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max)
            max=nums[i];
        ++freq[nums[i]];
    }
    for(int i=0;i<=max;i++){
        three = freq[i]-freq[i]%3;
        while (three>0){
            if((freq[i]-three)%2==0){
                ans+=(three/3)+(freq[i]-three)/2;
                break;
            }
            else
                three-=3;
        }
        if(three>2)
            continue ;
        else if( freq[i]%2==0)
            ans+=freq[i]/2;
        else
            return -1;
    }
    return ans;
}