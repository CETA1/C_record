#include<stdio.h>
//找出一个大于给定整数且紧随这个整数的素数，并作为函数值返回
int leadnum(int n) 
{
    int i,j;
    for(i=n+1;;i++) 
    {
        for(j=2;j<i;j++)
           
            if(i%j==0) break;
            if(j==i) 
                    return i;
        
    }
    return 0;
}
int main()
{
    int n,lead;
    scanf("%d",&n);
    //lead=leadnum(n);
    printf("%d\n",leadnum(n));
    return 0;

}