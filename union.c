#include <stdio.h>
void input(int score[],int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d",&score[i]);
}
int ssum(int score[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += score[i];
    return sum;
}
int smax(int score[],int n)
{
    int max=score[0];
    for(int i = 1; i < n; i++)
    {
            if(max<score[i])
            max = score[i]; 
    }
    return max;
}
int smin(int score[],int n)
{
    int min=score[0];
    for(int i = 1; i < n; i++)
    {
            if(min>score[i])
            min = score[i]; 
    }
    return min;
}
int main()
{
    int score[10],max,min,sum;
    float aver;
    input(score,10);
    sum=ssum(score,10);
    max=smax(score,10);
    min=smin(score,10);
    aver=(sum-max-min)*1.0/8;
    printf("%f\n",aver);
    return 0;
}