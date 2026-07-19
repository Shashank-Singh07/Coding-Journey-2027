#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 2, 5, 1, 9, 3};
    int n = 6;

    int largest = arr[0];
    for (int i = 1; i < n; i++)
{
    if (arr[i] > largest)
    {
        largest = arr[i];
    }
}
cout << largest;

    return 0;
}