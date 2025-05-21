//v1



#include <iostream>
using namespace std;

void fib(int n) {
    int a = 1, b = 1;

    if (n >= 1) {
        cout << "The 1st fib element is: " << a << endl;
    }
    if (n >= 2) {
        cout << "The 2nd fib element is: " << b << endl;
    }

    for (int i = 3; i <= n; i++) {
        int temp = a + b;
        cout << "The " << i;

        // Add proper ordinal suffix
        if (i % 10 == 1 && i % 100 != 11) cout << "st";
        else if (i % 10 == 2 && i % 100 != 12) cout << "nd";
        else if (i % 10 == 3 && i % 100 != 13) cout << "rd";
        else cout << "th";

        cout << " fib element is: " << temp << endl;

        a = b;
        b = temp;
    }
}

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> n;

    fib(n);

    return 0;
}






//v2






#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, c;
    int n;

    cout << "Enter how many numbers to print: ";
    cin >> n;

    // Print the first two numbers
    if (n >= 1) cout << a << endl;
    if (n >= 2) cout << b << endl;

    // Print the rest
    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    return 0;
}
