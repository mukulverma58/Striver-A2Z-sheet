#include <iostream>
using namespace std;
bool armstrong(int n){
    int sum = 0;
    int original = n;

    while(n > 0){
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return original == sum;
}

int main() {
    int n;
    cin >> n;

    if (armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}