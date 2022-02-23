#include<stdio.h>

int main(){
int t;
printf("\nenter number of test cases \n");
scanf("%d",&t);

while(t!=0)
{
    int n , key , A[100];
    printf("\nenter size of array \n");
    scanf("%d",&n);

    printf("\ninput %d elements",n);
    for(int i = 0 ; i< n ;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nenter key \n");
    scanf("%d",&key);
    int flag = 0;

    for(int i = 0 ;i< n ;i++)
    {
        if(A[i] == key)
        {
            printf("key found after %d comparisons\n" , i+1);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("key not found");
    }
    t--;
}

}
