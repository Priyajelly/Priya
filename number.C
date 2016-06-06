#include <stdio.h>
int main(void) 
{
    long long int number;
    scanf("%lld",&number);
    if(number==0)
         printf("THE NUMBER IS ZERO");
    else if(number>0)
         printf("THE NUMBER IS POSITIVE");
    else if(number<0)
         printf("THE NUMBER IS NEGATIVE");
    else
         printf("INVALID");
	return 0;
}
