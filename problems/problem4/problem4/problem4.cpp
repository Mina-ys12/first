#include <iostream>
using namespace std;

int main() {

    int n, T = 0;
    cin >> n;

    while (n--) {
        string command;
        cin >> command;

        if (command[0] == '+' || command[1] == '+') {
            T++;
        }
        else {
            T--;
        }
    }

    cout << T << endl;
}