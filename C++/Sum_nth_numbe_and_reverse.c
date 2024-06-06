#include <stdio.h>
#include<math.h>
int main() {
    int n;
    int sum=0;// akhane sum=o na dile hobe na, think about the logic
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum is:%d\n",sum);
    for (int i = n; i>=0; i--)
    {
        printf("%d,",i);
    }
    
    return 0;
    
}
/* OR
#include <stdio.h>
#include<math.h>
int main() {
    int n;;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int j=n; i <=n && j>=1;j--)
    {
        sum=sum+j;
        printf("%d\n",j);
    }
    printf("%d\n",sum);


    
    return 0;
    
}
*/