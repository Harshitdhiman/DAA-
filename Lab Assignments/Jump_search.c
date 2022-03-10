#include<stdio.h>
#include<math.h>

int main()
{
    int n , key;
    printf("enter size of array \n");
    scanf("%d",&n);

    int arr[100];
    printf("enter %d elements in array" ,n);
    for(int i = 0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter key");
    scanf("%d",&key);

   // 1 2 3 4 5 6 7 8 9

   int i = 0 , m = sqrt(n) ,count= 0;
   while(key >= arr[m] && m<n)
   {
       i=m;
       m = m+sqrt(n);
       count++;
       if(m>n-1)
       {
           m = n-1;
           break;
       }

   }
   for(int k = i ; k<=m ;k++ )
   {
       if(key==arr[k])
       {
           printf("key found after at index %d in total jump %d",k ,count);
       }

   }

    return 0;
}
