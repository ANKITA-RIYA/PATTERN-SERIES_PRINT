//
Enter the no. of terms you wanted to print : 10
Fibonacci Series is : 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34
//

#include<stdio.h>
int main()
{
int n,a=0,b=1,c;
printf("Enter the no. of terms you wanted to print : ");
scanf("%d",&n);
printf("Fibonacci Series is : ");
for(int i=0;i<n;++i)
 {
    printf(" %d ,",a);
    c=a+b;
    a=b;
    b=c;
 }
return 0;
}
