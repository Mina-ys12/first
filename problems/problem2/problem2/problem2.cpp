#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    int n;
    int times = 0;
    cin >> n;
    cin.ignore();

    if (n <= 1 && n >= 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {

        string line;
        getline(cin, line);

        istringstream iss(line);
        int a, b, c;
        iss >> a >> b >> c;

        if (a + b + c >= 2) {
            times++;
        }
    }

    cout << times;
}