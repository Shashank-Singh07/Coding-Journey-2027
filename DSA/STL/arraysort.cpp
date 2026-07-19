#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {8, 2, 5, 1, 9, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr , arr+n , greater<int>() );

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}