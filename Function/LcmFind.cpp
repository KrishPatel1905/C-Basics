#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout<<"Enetr the frist number is :";
    cin>>num1;
    cout<<"Enter the second number is :";
    cin>>num2;
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    return 0;
}
