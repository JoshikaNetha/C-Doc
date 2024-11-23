#include <iostream>
#include <vector>

using namespace std;

bool checkStraightPath(vector<vector<char>>& a, int x1, int y1, int x2, int y2) {
    if (x1 == x2) { // Check horizontal path
        for (int j = min(y1, y2); j <= max(y1, y2); ++j) {
            if (a[x1][j] == 'x') return false;
        }
        return true;
    } else if (y1 == y2) { // Check vertical path
        for (int i = min(x1, x2); i <= max(x1, x2); ++i) {
            if (a[i][y1] == 'x') return false;
        }
        return true;
    }
    return false;
}

string solveSimple(vector<vector<char>>& a) {
    int rows = a.size(), cols = a[0].size();
    int startX = -1, startY = -1, endX = -1, endY = -1;

    // Find 'Q' and 'W'
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] == 'Q') { startX = i; startY = j; }
            if (a[i][j] == 'W') { endX = i; endY = j; }
        }
    }

    if (startX == -1 || startY == -1 || endX == -1 || endY == -1) return "Don't Drive!";
        cout<<"startX "<<startX<<" startY "<<startY<<endl;
        cout<<"endX "<<endX<<" endY "<<endY<<endl;

    // Check if there is a straight path from 'Q' to 'W'
    if (checkStraightPath(a, startX, startY, endX, endY)) {
        return "DRIVE!";
    }

    // Check if there's a one-turn path
    // Example of one turn: moving from (startX, startY) to an intermediate corner
    vector<pair<int, int>> corners = {
        {startX, endY}, {endX, startY}
    };

    for (auto& corner : corners) {
        int cornerX = corner.first, cornerY = corner.second;
        cout<<"cornerX "<<cornerX<<" cornerY "<<cornerY<<endl;
        if (a[cornerX][cornerY] == '0' && 
            checkStraightPath(a, startX, startY, cornerX, cornerY) && 
            checkStraightPath(a, cornerX, cornerY, endX, endY)) {
            return "DRIVE!";
        }
    }

    return "Don't Drive!";
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));
    cout << "Enter the grid:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> grid[i][j];

    cout << solveSimple(grid) << endl;

    return 0;
}
