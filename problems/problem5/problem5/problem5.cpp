#include <iostream>
#include <string>
using namespace std;

int main() {

    string x;
    cin >> x;

    if (x[0] != '9' && (9 - (x[0] - '0')) < (x[0] - '0')) {
        x[0] = (9 - (x[0] - '0')) + '0';
    }

    for (size_t i = 1; i < x.size(); i++) {

        int d = x[i] - '0';
        int transformed = 9 - d;
        if (transformed < d) {
            x[i] = transformed + '0';
        }
    }

    cout << x << endl;
}