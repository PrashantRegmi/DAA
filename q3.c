
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr_3305[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr_3305[i]);
    for (i = 0; i < n; i++)
    {
        if (arr_3305[i]%2!= 0)
        {
            for (j=i+1; j<n; j++)
            {
                if (arr_3305[j] % 2 == 0)
                {
                    temp = arr_3305[i];
                    arr_3305[i] = arr_3305[j];
                    arr_3305[j] = temp;
                    break;
                }
            }
        }
    }
    printf("The rearranged array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr_3305[i]);
    return 0;
}

