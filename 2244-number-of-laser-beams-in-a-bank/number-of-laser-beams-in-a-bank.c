int sum(char *a){
    int count = 0;
    for(int i=0;a[i]!='\0';i++)
        if(a[i]=='1')
            count++;
    return count;
}
int numberOfBeams(char** bank, int bankSize) {
    int flag=0;
    int ans=0;
    int prev=sum(bank[0]);
    int curr;
    for(int i=1;i<bankSize;i++){
        curr=sum(bank[i]);
        if(curr && prev){
           flag=1;
            ans+=(curr*prev);
        }
        if(curr)
            prev=curr;
    }
    return ans;
}