// a simple c program using linear search 
 #include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key) 
        {
            return i; 
        }
    }
    return -1; //will return -1 if key not found
}

int main() 
{
    int arr[] = {12, 34, 56, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    // key to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);

    if (index != -1)
    {
        printf("Element found at index %d\n", index);
    } 
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
