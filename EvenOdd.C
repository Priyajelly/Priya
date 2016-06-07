#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter the number to check\n");
    scanf("%d",&number);
    if(number&1)
      printf("%d is a odd number",number);
    else
      printf("%d is a even number",number);
    return 0;
}
