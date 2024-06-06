#include<stdio.h>;
#include<math.h>;
int main(){
    int a;
    printf( "Enter a integer constant:");
    scanf("%d",&a);
    //ai khan theke oi part active hobe
    if(a%2==0){
        printf("The number is Even ");
    }
    else{
        printf("The number is Odd ");
    }
    return 0;
/* Doing it without if else, only by having output O and 1;
printf("%d\n"a%2==0);
*/
}