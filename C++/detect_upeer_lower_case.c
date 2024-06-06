#include<stdio.h>;
#include<math.h>;
int main(){
    char cha;
    printf( "Enter an Alphabet:");
    scanf("%c",&cha);
    if(cha>='A'&&cha<='Z'){
        printf("Uperr Case\n");
    }
        else if (cha>='a'&&cha<='z')
        {
            printf("Lower Case");
        }
        else{
            printf("Wrong input");
        }
        return 0;
}
            