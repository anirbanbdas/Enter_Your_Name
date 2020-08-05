int next_permutation(int n, char *s){

    int i = n-1;
    while(i>0 && strcmp(&s[i-1],&s[i])>=0)
        i--;
    if (i<=0) return 0;


    int j = n-1;
    while(strcmp(&s[i-1],&s[j])>=0)
        j--;
    char tmp = s[i-1];
    s[i-1] = s[j];
    s[j] = tmp;


    j = n-1;
    while(i<j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return 1;
}
void per(char* name)
{
        int n=strlen(name),i=1;
        char* name_cpy=(char*)malloc(100*sizeof(char));
        strcpy(name_cpy,name);
        strlwr(name_cpy);
       do
       {
         printf("%d.%s\n",i,first_L(name_cpy));
         i++;
       }while(next_permutation(n,name_cpy));
}
