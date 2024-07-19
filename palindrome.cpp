#include <iostream>
using namespace std;
// reverse a number
int rev(int n) {
    int rev = 0;
    while(n!=0){
        int ld = n%10;
        rev = rev * 10 + ld;
        n = n/10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout<<endl;
    cout  << rev(n) << endl;
    rev(n) == n ? cout<< "Palindrome": cout<< "Not Palindrome";

    return 0;
}
// Time Complexity: 
// O(log(n)), where n is the input number.
//     Time Complexity: O(log10 n), where n is the input number. 
