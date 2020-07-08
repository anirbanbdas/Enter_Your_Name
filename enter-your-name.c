#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  char* p;
  int sum;
  p=(char*)malloc(sizeof(char)*1024);
  printf("Enter Your Name:");
  scanf("%s",p);
  sum=dictionary_number(p);
  printf("\nYour letter summation is %d\n",sum);
  prime_check(sum);



}
int dictionary_number(char* p)
{   int s=0;
    int i;
    while(*p!='\0')
    {       
      for(i=65;i<=90;i++)
      {
          if(*p=='i' || *p=='i+32')
          {
            s=s+(i-64); 
          }
      }
      p++;
    }
    return s;
} 
void prime_check(int a)
{  int i;
   if(a==1)
   {
       printf("You neither Prime nor Non-Prime");
   }
   else
   {
       for(i=1;i<=a;i++)
       {
           if(a%i==0)
           {
               printf("You are not Prime");
           }
           else
           {
               printf("You are Prime");
           }
       }
   }
}
void lexci_permut(char* p,int n)
{   
    int i=n-1;
    while(i>0 && strcmp(s[i-1],s[i])>=0)
    {
        i--;
    }
    int j=n-1;
    while(strcmp(s[j-1],s[j])>=0)
    {
        j--;
    }
    swap(&s[i-1],&s[j]);
    reverse();

    

    
}
void swap(char* a,char* b)
{
    char tmp=*a;
    *a=*b;
    *b=tmp;
}
void reverse(char* a)
{
  int i,j;
  while(*a!='\0')
  {
    
  }
  
}
void alpha_order(Char* a)
{
   
}
