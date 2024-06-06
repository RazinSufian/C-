#include<stdio.h>;
#include<math.h>;
int main(){
    float a;
    printf( "Enter Marks(1-100):");
    scanf("%f",&a);
    if(a<30){
        printf("Gread C");
        
    }
    else if(a>=30&&a<70){
        printf("Gread B");
    }
    else if(a>=70&&a<90){
        printf("Gread A");    
    }
    else if(a>=90&&a<=100){
        printf("Gread A+");
    }
    else{
        printf("Not a vailed marks");
    }
    return 0;
}