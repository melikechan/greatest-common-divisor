#include <iostream>
#include <string>

using namespace std;

int main(){
    int first = 0, second = 0, r = 0; // r also means gcd
    cout << "Welcome to GCD finder program" << "\n";
    cout << "Please enter two numbers to find their greatest common divisor" << "\n";
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
    if(second > first) swap(first, second);
    string resStr = "GCD of " + to_string(first) + " and " + to_string(second) + " is ";
    if(first == second){
        r = second;
    }
    else if(first % second == 0) r = second;
    else{
        while(first % second != 0){
            r = first % second; 
            first = second; 
            second = r;
            if(first % second == 0){         
                break;
            }
        }
    }
    cout << resStr << r << "\n";
    cout << "press any key to continue" << endl;
    getchar();
    return 0;
}