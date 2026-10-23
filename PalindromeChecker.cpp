#include <iostream>
using namespace std;

int main() {
    int securityCode;
    
    cout << "Enter the security code: ";
    cin >> securityCode;
 
    if (securityCode <= 0) {
        cout << "Invalid security code." << endl;
    } else {
        int securityCpde;
        int reversedCode=0;
        
    
        while (securityCode > 0) {
            int digit = securityCode % 10;
            reversedCode = reversedCode * 10 + digit;
            securityCode /= 10;
        }
        
        if (securityCode == reversedCode) {
            cout << "The security code is a palindrome." << endl;
        } else {
            cout << "The security code is not a palindrome." << endl;
        }
    }
    
    return 0;
}