#include <iostream>
using namespace std;
int main(){
    int number ;
    string sum;
    int numbera;
    string rept = "yes";
    while (rept == "yes")
    {
        cout << "enter your number b: ";
        cin >> number ;
        cout << "enter your sum : ";
        cin >> sum ;
        cout << "enter your number a: "; 
        cin >> numbera ;
        if (sum == "*")
        {
            cout << "number * number = " << number * numbera << endl ;
        }
        else if (sum == "-")
        {
            cout << "number - number = " << number - numbera << endl;
        }
        else if (sum == "+")
        {
            cout << "number + number = " << number + numbera << endl;
        }
        else if (sum == "//")
        {
            cout << "numbar / number = " << number / numbera << endl ;
        }
        else{
            cout << "error de sommul : ";
        }
        
        cout << "yes or no : ";
        cin >> rept;
        
    }
    
}