#include<stdio.h>
int check(int);
int check2(int num , int num2);
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a digit: ");
    scanf("%d",&b);
    printf("the entered number is %d digit number\n",check(a));
    int final = check2(a,b);
    if (final==1)
    {
        printf("Entered digit is included in the number");
    }else{
        printf("Entered digit isn't included in the number");
    }
}

int check(int num){
    int count = 0;
    while (num>0)
    {
        num = num/10;
        count++;
    }
    return count;
}

int check2(int num1,int num2){
    int b,c,a,flag=0;
    for (int i = 1; i <= check(num1); i++)
    {
        a = num1%10;
        if (num2==a)
        {
            flag = 1;
            break;
        }
        b = num1-a;
        c = b/10;
        num1 = c;
    }
    if (flag==1)
    {
        return 1;
    }else
    {
        return 0;
    }  
}











