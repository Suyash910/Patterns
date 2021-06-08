#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void alphapat(int n)
{
    // Initializing value corresponding to 'A'
    // ASCII value
    int num = 65;
 
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++) {
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {
 
            // Explicitly converting to char
            char ch = char(num);
 
            // Printing char value
            cout << ch << " ";
            num = num + 1;
        }
 
        // Incrementing number
        
 
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Function
int main()
{
    int n ;
    cin>>n;
    alphapat(n);
    return 0;
}