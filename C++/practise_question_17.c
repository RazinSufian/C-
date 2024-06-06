#include <stdio.h>
#include<math.h>
int main() {
    int a;
    do{
        
       printf("Enter a number:");
       scanf("%d",&a);
       printf("%d\n",a);
       /*
       aikhane printf("%d",&a) dile ulta palta input ase keno???
       */
       if (a%2==0)
       {
           break;
       }
       
    }
     while (1);
    
printf("thank you");

    return 0;
}