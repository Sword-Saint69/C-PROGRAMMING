/*Find the deviations of n numbers (difference from mean)*/
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, mean, deviation;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Calculate the mean
    mean = sum / n;
    
    printf("Mean = %.2f\n", mean);
    printf("Deviations:\n");
    
    // Calculate and display the deviation for each element
    for (i = 0; i < n; i++) {
        deviation = arr[i] - mean;
        printf("Element %d: %.2f\n", arr[i], deviation);
    }
    
    return 0;
}