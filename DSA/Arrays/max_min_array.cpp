#include <iostream>
using namespace std;

int main(){
    int arr[] = {12, 45, 2, 67, 34, 89, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 0 ; i < n; i++){
        if (arr[i] > maxVal){
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    return 0;
}