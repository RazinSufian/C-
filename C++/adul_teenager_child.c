#include<stdio.h>;
#include<math.h>;
int main(){
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("Adult\n");
    
    }
    else if (a>13 && a <18)

    {
    
    printf("Teenager\n");

    }
    else if (a<13)

    {
        printf("Child\n");
    }

    printf("Thank You");
    return 0;
    
    
    
    
}