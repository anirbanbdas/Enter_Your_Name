//int summation(char* )
//void prime_check(int)
//int factorial(int)
//first_L(char*)

int summation(char* name)
{
   int i=0;
    int sum=0;
    while(name[i]!='\0')
    {
        for(int j=97;j<=122;j++)
           {
             if(name[i]==j || name[i]==(j-32))
                  sum=sum+(j-96);
           }
        i++;
    }
    return sum;
}
void prime_check(int sum)
{
    int flag=0;
    for(int i=2;i<sum;i++)
        {
            if(sum%i==0)
                {flag++;
                }
        }
    if(sum==1)
        printf("You are neither Prime nor Non Prime\n");
    else
    {
        if(flag==0)
            printf("You are Prime\n");
        else
            printf("You are Non Prime\n");
    }
}
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
char* first_L(char* name)
{   char*p=(char*)malloc(sizeof(char)*100);
    strcpy(p,name);
    strlwr(p);
    *p=*p-32;
    return p;


}
int ask()
{
    char* p;
    scanf("%c",p);
    if(*p==89 || *p==121)
        return 1;
    else if(*p==78 || *p==110)
        return 0;
    else
        ask();


}


