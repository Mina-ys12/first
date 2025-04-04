#include <iostream>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> bookCatalog;

    while (n--) {

        string title;
        cin >> title;

        if (bookCatalog[title] == 0) {

            cout << "OK" << endl;

        }
        else {

            cout << title << bookCatalog[title] << endl;
        }

        bookCatalog[title]++;
    }

}