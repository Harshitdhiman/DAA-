#include <stdio.h>

int main()
{
    int t, size, key;
    printf(" \n enter number of test cases \n");
    scanf("%d", &t);

    while (t != 0)
    {

        printf(" \nenter size of array\n");
        scanf("%d", &size);

        int arr[size];
        printf("enter %d elements ", size);

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nenter key \n");
        scanf("%d", &key);

        int lb = 0, ub = size - 1, mid = (lb + ub) / 2;
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            mid = (lb + ub) / 2;

            if (key == arr[mid])
            {
                printf("key found at index %d after %d comaprisons", mid, i + 1);
                flag = 1;
                break;
            }
            else if (key < arr[mid])
            {
                ub = mid - 1;
            }
            else if (key > arr[mid])
            {
                lb = mid + 1;
            }
        }
        if (flag == 0)
        {

            printf("key not found \n");
        }

        t--;
    }

    return 0;
}
