char * finalString(char * s){
    int index=0;
    int j;
    int len=strlen(s);

    for(int i=0;s[i]!='\0';i++)
        if(s[i]=='i'){
            for( j=i;j<len;j++)
                s[j]=s[j+1];
            len--;
            int temp;
            for(int k=0,j=i-1;k<j;k++,j--){
                temp=s[k];
                s[k]=s[j];
                s[j]=temp;
            }
            i--;
        }
    return s;
}