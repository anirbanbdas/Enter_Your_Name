#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Number Of Characters
//Calculate the summation
//Check for prime
//Number of Possible Permutations
//Permutation of name
//Morse code of name
//Braille code of name

void prime_check(int);
void main()
{ printf("Enter Your Name:");
  char* name=(char*)malloc(sizeof(char)*1024);
  scanf("%s",name);
  printf("The number of letters in your name is:%d\n",strlen(name));
  int i=0;
  int sum=0;
  while(name[i]=!'\0')
  {
      for(int j=65;j<=90;j++)
      {
          if(name[i]==j)
          {
             sum=sum+(j-64);
          }
      }
      i++;
  }
  printf("The summation is:%d\n",sum);
  prime_check(sum);



}
void prime_check(int sum)
{
    int flag=0;
    if(sum==1)
        printf("You are neither Prime nor Non Prime\n");
    else
    {
        for(int i=2;i<=sum;i++)
        {
            if(sum%i==0)
                flag++;
        }
        if(flag==0)
            printf("You are Prime\n");
        else
            printf("You are Non Prime\n");
    }
}

