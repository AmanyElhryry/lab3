#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,y ,z;
    char ch ;
    printf("Enter an oprator ");
          scanf("%c",&ch);
          printf("Enter tow operand ");
          scanf("%d%d",&x,&y);

    switch(ch){
case '+':
    printf("%d+%d=%d",x,y,x+y);
    break;
case '-':
     printf("%d-%d=%d",x,y,x-y);
         break;
case '*':
   printf("%d*%d=%d",x,y,x*y);
       break;
case '/':
  printf("%d/%d=%d",x,y,x/y);
      break;
    }

    return 0;
}
