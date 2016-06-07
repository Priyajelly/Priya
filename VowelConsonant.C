#include <stdio.h>
int main(void)
{
   char character;
   printf("Enter the Character to check\n");
   scanf("%c",&character);
   if(character>64 && character<91)
    character=character+32;
   if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' )
     printf("%c is a vowel",character);
   else if(character<123 && character>64)
     printf("%c is a consonant",character);
   else
     printf("%c is Neither a consonant Nor a vowel",character);
}
