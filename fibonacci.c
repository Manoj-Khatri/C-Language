
// a program to calculate the fibonacci series with the help of input given by the user

#include<stdio.h>
void fib(int n);
int main()
    {
        int n;
        printf("Enter no of terms to be printed:");
        scanf("%d",&n);

        fib(n);
    return 0;
    }

    void fib(int n)
        {
            int a=0,b=1,c,i  ;       // declaring variables
            for(i=1;i<=n;i++)       // declaring the values of i and n
                {
                    printf("%d\n",a);       // printing process
                    c=a+b;
                    a=b;
                    b=c;
                }

        }
