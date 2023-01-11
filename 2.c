#include<stdio.h>
int fibonacci(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    fibonacci(a);
}
int fibonacci(int x){
    int a = -1;
    int b = 1;
    int c;
    for (int i = 0; i < x; i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
