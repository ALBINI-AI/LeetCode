char * removeStars(char * s){
    int index=0;

    for(int i=0;s[i]!='\0';i++){
      if(s[i]=='*') index--;
      else s[index++]=s[i];
    }
    s[index]='\0';
    return s;
}