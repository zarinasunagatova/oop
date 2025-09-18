#include "oop1.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_text;
    int n;
    char old_char, new_char;
    
    cout << "Enter the text: ";
    getline(cin, input_text);
    cout << endl;  
    
    cout << "Enter N: ";
    cin >> n;
    cout << endl; 
    
    cout << "Enter the replacement character: ";
    cin >> old_char;
    cout << endl;  
    
    cout << "Enter a new character: ";
    cin >> new_char;
    cout << endl;  
    
    string result = replace_nth_character(input_text, n, old_char, new_char);
    
    cout << "Result: " << result << endl;
    
    return 0;
}