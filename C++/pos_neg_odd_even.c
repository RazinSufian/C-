#include<stdio.h>;
#include<math.h>;
int main(){
    int a;
    printf( "Enter a integer constant:");
    scanf("%d",&a);
    if(a>=0){
        printf("The number is Positive\n");
        if (a%2==0)
        {
            printf("The number is Even");
        }
        else{
            printf("The number is odd");

        }
        
    }
    else{
        printf("The number is Negetive\n");
          if (a%2==0)
        {
            printf("The number is Even");
        }
        else{
            printf("The number is odd");
        }
    
        
    }
    return 0;
}