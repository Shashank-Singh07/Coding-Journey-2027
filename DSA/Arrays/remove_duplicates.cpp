#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = 1;
    for (int i = 1 ; i < nums.size() ; i++){
        if (nums[i] != nums[k - 1]){
            nums[k] = nums[i];

            k++; 

        }
    }
    cout << "Total unique numbers (k): " << k << endl;

    return 0;

}