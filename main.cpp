#include <iostream>
#include <cstdlib>

using namespace std;

void printTriangle(int numRows) {
    int i, j;

    for(i = 0; i < numRows + 1; i++) {
        for(j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}


int main()
{
    printTriangle(5);
    return 0;
}

