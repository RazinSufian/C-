#include<stdio.h>;
 void Barishal();
 void Noakhali();


int main(){
Try_Again:
//char A;
printf("If you are from barishal type b.\n If you are from Noakhali type n.\nEnter:" );
char A;
scanf("%c",&A);// "&" na dilao hoi 
if (A=='b')
{
   Barishal();
}
else if (A=='n')
{
    Noakhali();
}
else
{
printf("Please Enter A Valid Charecter\n");
printf("Try Again\n");
goto Try_Again;
}
printf( " Dont feel bad about it :( ");

return 0;
}
void Barishal(){
    printf(" You are Barisilaah\n");
}
void Noakhali(){
    printf(" You are Noakillah\n");
}
/* problem unsolved
*/