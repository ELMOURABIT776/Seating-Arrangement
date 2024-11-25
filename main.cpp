#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> seating(10, vector<int>(10, 0));


    cout << "Current Seating Arrangement:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << (seating[i][j] == 0 ? "Available" : "Reserved") << " ";
        }
        cout << endl;
    }


    int row, col;
    cout << "Enter row and column to reserve a seat (1-10 for both): ";
    cin >> row >> col;
    if (row >= 1 && row <= 10 && col >= 1 && col <= 10 && seating[row-1][col-1] == 0) {
        seating[row-1][col-1] = 1;
        cout << "Seat reserved successfully!\n";
    } else {
        cout << "Invalid seat or already reserved.\n";
    }


    cout << "Updated Seating Arrangement:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << (seating[i][j] == 0 ? "Available" : "Reserved") << " ";
        }
        cout << endl;
    }

    return 0;
}
