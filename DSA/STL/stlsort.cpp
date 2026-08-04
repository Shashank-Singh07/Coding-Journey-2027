#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {8, 2, 5, 1, 9, 3};
    sort(v.begin(), v.end(), greater<int>());


    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}