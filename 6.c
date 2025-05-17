/*Read n elements into an array and display them in reverse order*/

#include <stdio.h>

int main()
{
    int n, i;
    int arr[100]; // Using a fixed-size array instead of dynamic allocation
    
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   
    }
    
    printf("Elements in reverse order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}