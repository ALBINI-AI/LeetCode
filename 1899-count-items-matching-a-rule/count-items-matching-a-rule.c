int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int search=0;
    int count=0;

    if(strcmp(ruleKey,"color")==0)
        search = 1;
    else if(strcmp(ruleKey,"name")==0)
        search = 2;
    else if(strcmp(ruleKey,"type")==0)
        search = 0;

    for(int i=0;i<itemsSize;i++)
        if(strcmp(items[i][search],ruleValue)==0)
            count++;

    return count;
}