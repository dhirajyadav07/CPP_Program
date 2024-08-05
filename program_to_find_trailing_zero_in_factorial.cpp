#include <iostream>
using namespace std;

int count_trailing_zero(int n) {
    int count5 = 0;
    
    // Count factors of 5 in n!
    for (int i = 5; i<=n; i *= 5) {
        count5 += n / i;
    }
    
    return count5;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Number of trailing zeros in factorial of " << n << " is " << count_trailing_zero(n) << endl;

    return 0;
}
