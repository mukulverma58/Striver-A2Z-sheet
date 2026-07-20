#include <iostream>
using namespace std;
int FactOfNumber(int n) {
    if (n == 0 || n == 1)return 1;
    return n * FactOfNumber(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << FactOfNumber(n);
}