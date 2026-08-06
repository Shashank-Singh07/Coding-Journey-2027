#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    int left = 0;
    int right = arr.size() - 1;

    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "[" << left + 1 << "," << right + 1 << "]";
            break; 
        }
        else if (sum > target){
            right = right -1 ;
        }
        else{
            left = left + 1;
        }
    }
    return 0;
}

