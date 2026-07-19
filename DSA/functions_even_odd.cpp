#include <iostream>
using namespace std;

bool iseven(int number){
    if (number%2 == 0){
        return true;
    }
    else {
        return false;
    }
}


int main()
{
    int x = 7;
    
    bool answer = iseven(x);

    if (answer == true){
        cout <<"Even";

    }
    else {
        cout <<"Odd";
    }

    return 0;
}