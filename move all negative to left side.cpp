#include <iostream>
using namespace std;

void moveAllNegToLeft(int *arr, int n)
{
    int l = 0, h = n - 1;
    while (l < h)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
    int n = 11;
    moveAllNegToLeft(arr, n);
    printArr(arr, n);
    return 0;
}