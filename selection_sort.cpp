#include <iostream>
using namespace std;

int selection_sort(int arr[], int n);

int main()
{
    int arr[] = {9, 4, 1, 11, 4, 15, 3, 4, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sort Array: ");
    selection_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// sort func
int selection_sort(int arr[], int n)
{
    int i, j, min_index, temp;

    for(i = 0; i < n-1; i++)
    {
        min_index = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        if(min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

    }
}
