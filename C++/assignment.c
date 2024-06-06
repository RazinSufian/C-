#include<stdio.h>
 int main()
 {
start:
printf("Enter two Natural Number\n");
printf("A:");


char input[10]; int loop;
scanf("%s", input);
for (loop=0; input [loop]; loop++)
{
if(input[loop]=='.')
{
printf("it's float\n");
goto start;}
 
       }


printf("B:");
char input2[10]; int loop2;
scanf("%s", input2);
for (loop2=0; input2 [loop2]; loop2++)
{
if(input[loop2]=='.')
{
printf("it's float \n");
goto start;

          }
}
int A=atoi(input);
int B=atoi(input2);

printf("SUM is:%d",A+B);

return 0;
}