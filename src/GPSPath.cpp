#include <iostream>
#include <vector>

using namespace std;

int rows;
int cols;

struct Position {
    int x, y;
    int turns;
    int direction; // 0 for horizontal, 1 for vertical, -1 for start
};

string solve(vector<vector<char>>& a) {
    // Directions: right, down, left, up
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    // Find the starting position 'Q'
    int startX = -1, startY = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] == 'Q') {
                startX = i;
                startY = j;
                cout<<"StartX "<<startX<<" startY "<<startY<<endl;
                break;
            }
        }
        if (startX != -1) break;
    }

    if (startX == -1 || startY == -1) return "Don't Drive!";

    // BFS queue
    vector<vector<vector<int>>> visited(rows, vector<vector<int>>(cols, vector<int>(4, -1)));
    for (int i = 0; i < 4; i++) {
        visited[startX][startY][i] = 0;
        cout<<"startX: "<<startX<<", startY: "<<startY<<", i: "<<i<<endl ;
        cout<<"Visited "<<visited[startX][startY][i]<<endl ;
    }


    // Queue stores {x, y, turns, direction}
    vector<Position> queue;
    queue.push_back({startX, startY, 0, -1});

    while (!queue.empty()) {
        Position curr = queue.front();
        queue.erase(queue.begin());
        cout<<"a[curr.x][curr.y] "<<a[curr.x][curr.y]<<endl;

        if (a[curr.x][curr.y] == 'W') {
            return "DRIVE!";
        }

        // Try moving in all four directions
        for (int i = 0; i < 4; i++) {
            int newX = curr.x + dx[i];
            int newY = curr.y + dy[i];
            cout<<"newX "<<newX<<endl;
            cout<<"newY "<<newY<<endl;

            if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && a[newX][newY] != 'x') {
                int newTurns = curr.turns + (curr.direction != -1 && curr.direction != i ? 1 : 0);
                if (newTurns <= 2 && (visited[newX][newY][i] == -1 || visited[newX][newY][i] > newTurns)) {
                    visited[newX][newY][i] = newTurns;
                    queue.push_back({newX, newY, newTurns, i});
                }
            }
        }
    }

    return "Don't Drive!";
}

int main() {
    cout << "Enter num of rows" << endl;
    cin >> rows;
    cout << "Enter num of cols" << endl;
    cin >> cols;
    cout << "Num of rows and cols " << rows << " " << cols << endl;

    // Initialize the 2D vector with specified rows and columns
    vector<vector<char>> list(rows, vector<char>(cols));

    cout << "Enter grid values (Q for start, W for end, o for path, x for block):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> list[i][j];
        }
    }
       // Display the 2D vector
    cout << "List:" << endl;
    for (const auto& row : list) {
        for (char val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    string sol = solve(list);
    cout << sol << endl;

    return 0;
}
