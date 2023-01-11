#include<stdio.h>
int prime(int x,int y);
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    prime(a,b);
}
int prime(int x,int y){
    int flag = 0;
    for (int i = x; i <= y ; i++)
    {
        flag=0;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
                flag = 1;
            }
        }
        if (flag==0)
        {
            printf("%d ",i);
        }
    }
}