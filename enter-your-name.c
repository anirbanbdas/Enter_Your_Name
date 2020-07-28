#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "small_functions.c"
#include "permutation.c"
#include "morse.c"
#include "braille.c"

//Number Of Characters
//Reverse of name
//Calculate the summation
//Check for prime
//Number of Possible Permutations
//Permutation of name(user)
//Morse code of name(user)
//Braille code of name(user)

int main()
{ char loop_c;
  do
  {printf("Enter Your Name:");
  char* name=(char*)malloc(sizeof(char)*1024);
  scanf("%s",name);
  printf("The number of letters in your name is:%d\n",strlen(name));

  printf("The reverse of your name is:%s\n",strrev(name));
   printf("The summation is %d\n",summation(name));
   prime_check(summation(name));

   printf("Do you want to know the possible permutation of your name(Y/N):");
   char que1;
   scanf("%c",&que1);
   if (que1=='Y' || que1=='y')
    {  int n=strlen(name),i=1;
        char* name_cpy=(char*)malloc(1024*sizeof(char));
        strcpy(name_cpy,name);
        strlwr(name_cpy);
       do
       {
         printf("%d.%s\n",i,name_cpy);
         i++;
       }while(next_permutation(n,name_cpy));
    }

    printf("Do want to know the morse code of your name(Y/N):");
    char que2;
    scanf("%c",&que2);
    if(que2=='Y' || que2=='y'){morse(name);}

    printf("Do want to know the braille code of your name(Y/N):");
    char que3;
    scanf("%c",&que3);
    if(que3=='Y' || que3=='y'){braille(name);}

    printf("Do you Want to enter another name(Y/N):");
    scanf("%c",&loop_c);
   }while(loop_c!='N' || loop_c!='n');

   return 0;
}

