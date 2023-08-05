bool isSubsequence(char * s, char * t){
    if(strlen(s)>strlen(t)) return false;
    int len=strlen(s);
    int count=0;
    int j=0;

    for(int i=0;s[i]!='\0';i++)
        for(;t[j]!='\0';j++)
            if(s[i]==t[j]){
                count++;
                j++;
                break;
            }
    if(len!=count) return false;
    return true;
}