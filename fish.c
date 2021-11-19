#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if(m%5<=3)
        printf("打渔");
    else 
        printf("晒网");
    return 0;
}