bool judgeCircle(char * moves){
    int vertical=0;
    int horizontal=0;
    for(int i=0;moves[i]!='\0';i++){
        if(moves[i]=='L') horizontal--;
        else if(moves[i]=='R') horizontal++;
        else if(moves[i]=='U') vertical--;
        else vertical++;
    }
    return !(horizontal||vertical);
}