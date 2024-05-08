#include<stdio.h>

int linearSearch(int array[], int n, int val)
{
    for(int i=0; i<n;i++)
    {
        if (array[i]==val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int val, i;
    int array[]={4,5,3,6,20,10,30};
    int n=sizeof(array)/sizeof(array[0]);

    printf("Enter the value you want to search:");
    scanf("%d",&val);

    int result=linearSearch(array, n , val);

    if(result==-1)
    {
        printf("The number is not found");
    }
    else
        printf("The number is found at index %d.",result);

}
