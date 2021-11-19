#include<stdio.h>
#include<string.h>
int BianLi(int arr[],int len)
{
    int i;
    int count=0;
    int arr1[len];
    for (int i=0;i<len;i++)
        printf("%d ",arr[i]);
    for(int i = 1; i <= len; i++)
    {
        //printf("%d ",arr[i]);
        if (arr[i-1]!=arr[i])
        {
            arr1[count]=arr[i-1];
            count++;
        }
        
    }
    printf("\n");
    for(int i = 0; i < count; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return count;

}

int main()
{
    int arr[]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    //BianLi(arr, len);
    printf("%d ",BianLi(arr,len));
    printf("\n");
    return 0;
}