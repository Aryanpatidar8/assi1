#include <stdio.h>
int main()
{
    int n, i, j, maxFreq = 0, maxNum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxFreq = count;
            maxNum = arr[i];
        }
    }
    printf("The number with the highest frequency is: %d\n", maxNum);
    printf("Its frequency is: %d\n", maxFreq);
}
