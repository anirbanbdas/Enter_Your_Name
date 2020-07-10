#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Calculate the summation
//Check for prime
//Number Of Characters
//Number of Possible Permutations
//Permutation of name
//Morse code of name
//Braille code of name
//Compare name with other name
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


return 0;
}

