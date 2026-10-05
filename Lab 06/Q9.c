#include <stdio.h>
int main()
{
 char str[100], rev[100], ch;
 int i, length = 0;
 int palindrome = 1;
 int vowels = 0, consonants = 0;

 printf("Enter a word: ");
 scanf("%99s", str);
 printf("Original word = %s\n", str);

 while (str[length] != '\0') 
    length++;
 printf("Length = %d\n", length);

 for (i = 0; i < length; i++)
    rev[i] = str[length - 1 - i];

 rev[length] = '\0';

 printf("Reversed word = %s\n", rev);

 for (i = 0; i < length; i++){

    if (str[i] != rev[i]){

       palindrome = 0;
       break;

 }
 }

 if (palindrome == 1)
    printf("Palindrome\n");
 else
    printf("Not palindrome\n");

 for (i = 0; i < length; i++){

   ch = str[i];

 if (ch == 'a' || ch == 'e' || ch == 'i' ||
 ch == 'o' || ch == 'u' || ch == 'A' ||
 ch == 'E' || ch == 'I' || ch == 'O' ||
 ch == 'U'){

    vowels++;

 }
 else if ((ch >= 'a' && ch <= 'z') ||
 (ch >= 'A' && ch <= 'Z')){

    consonants++;

 }
 }

 printf("Vowels = %d\n", vowels);
 printf("Consonants = %d\n", consonants);


 return 0;
}