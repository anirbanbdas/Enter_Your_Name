//Number Of Characters
//Reverse of name
//Calculate the summation
//Check for prime
//Number of Possible Permutations
//Permutation of name(user)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "small_functions.c"
#include "permutation.c"
int main()
{ int loop_c;
  do
  {printf("Enter Your Name:");
  char* name=(char*)malloc(sizeof(char)*100);
  scanf("%s",name);

  printf("The number of letters in your name is:%d\n",strlen(name));
    char*p=(char*)malloc(sizeof(char)*100);
    strcpy(p,name);
    strrev(p);
  printf("The reverse of your name is:%s\n",first_L(p));
  free(p);
  printf("The alphabet summation of your name is:%d\n",summation(name));
  prime_check(summation(name));
  printf("------------------------------------------------------------------------------------\n");

  printf("Do you want to know the possible permutation of your name(Y/N):");
  if(ask()==1){per(name);}
   
  printf("Do you Want to enter another name(Y/N):");
  loop_c=ask();
   }while(loop_c!=0);

   return 0;
}

