
#include <iostream>
#include <cmath> // for pow function

using namespace std;

bool is_armstrong(int num) {
    int i = 0; // for counting the digits
    int result = num;
    
    while (num) {
        num = num / 10;
        i++;
    }
    
    num = result; // restore num to its original value
    int sum = 0;
    
    while (num) {
        int digit = num % 10;
        int power=pow(digit, i);
        sum = sum + power;
        num = num / 10;
    }
    
    return result==sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << (is_armstrong(num) ? " is an Armstrong number." : " is not an Armstrong number.") << endl;

    return 0;
}
