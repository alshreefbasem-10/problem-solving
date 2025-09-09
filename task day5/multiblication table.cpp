#include <iostream>
using namespace std;
int main() {
    cout << "enter a number: " << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++) {
        int result = n * i;
        cout << n << " * " << i << " = " << result << endl;
    
    }
    return 0;
}