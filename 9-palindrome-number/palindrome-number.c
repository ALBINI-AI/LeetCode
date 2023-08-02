bool isPalindrome(int x){
    long long int pow=1,dig,rev=0;
    while(x/pow && x>0){
        dig=(x/pow)%10;
        rev=rev*10+dig;
        pow*=10;
    }
    if(x==rev)
        return true;
    return false;
}