#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "permutation.c"
//Basic

//Number Of Characters
//Calculate the summation
//Check for prime

//Will be asked by the user

//Number of Possible Permutations
//Permutation of name
//Morse code of name
//Braille code of name


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

int main()
{ printf("Enter Your Name:");
  char* name=(char*)malloc(sizeof(char)*1024);
  scanf("%s",name);
  printf("The number of letters in your name is:%d\n",strlen(name));
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

   printf("The summation is %d\n",sum);
   prime_check(sum);
   printf("Do you want to know the possible permutation of your name(Y/N):");
   char que_one;
   scanf("%c",&que_one);
   if (que_one=='Y' || que_one=='y')
    {  int n=strlen(name);
        char* name_cpy=(char*)malloc(1024*sizeof(char));
        strcpy(name_cpy,name);
        strlwr(name_cpy);
       do
       {
         printf("%s\n",name_cpy);
       }while(next_permutation(n,name_cpy));
    }

   return 0;
}

