char* decodeMessage(char* key, char* message) {
    char str[26];
    int count=0;
    int freq[26]={0};

    for(int i=0;key[i]!='\0';i++)
        if(key[i]!=' ')
            ++freq[key[i]-'a'];
    for(int i=0;key[i]!='\0';i++)
        if(key[i]!=' ' && freq[key[i]-'a']){
            str[count++]=key[i];
                freq[key[i]-'a']=0;
        }
    for(int i=0;message[i]!='\0';i++){
        if(message[i]!=' ')
            for(int j=0;j<26;j++)
                if(message[i]==str[j]){
                    message[i]=j+'a';
                    break;
                }
    }
    
    return message;
}