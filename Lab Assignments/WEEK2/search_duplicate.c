#include<stdio.h>
int count_duplicate(int A[] , int n , int key);
int main()
{
    int t ; 
    printf("enter test cases \n");
    scanf("%d",&t);

    while(t!=0){
        int n,key;
        printf("\n enter size of array \n");
        scanf("%d",&n);

        int A[n];
        printf("enter array \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&A[i]);
        }
        printf("enter key \n");
        scanf("%d",&key);

        int count = count_duplicate(A,n,key);
        if(count == 0 || count== -1)
        {
            printf("key not found \n");
        }
        else
        {
            printf("key %d occurs %d times",key ,count);
        }
     t--;
    }    


    return 0;
}

int count_duplicate(int A[] , int n , int key)
{
    int flag = 0;
    int low = 0 , right = n-1;
    while(low<=right)
    {
        int mid = low + (right - low) /2;

        if(A[mid]== key)
        {
            flag =1 ;
            break ;
        }
        else if(key>A[mid])
            low = mid +1;
        else
            right= mid-1;
    }

    if(flag == 0)
    {
        return -1;
    }

    while(A[low]!= key)
    {
        low++;
    }
    while(A[right] != key)
    {
        right--;
    }

    return (right-low)+1;


}
