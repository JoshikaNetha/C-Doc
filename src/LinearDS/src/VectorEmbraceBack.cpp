#include <iostream>
#include <vector>
using namespace std;
class Point {
public:
    int x, y;
    Point(int a, int b) : x(a), y(b) {
        // std::cout << "Point created: (" << x << ", " << y << ")\n";
    }
};

int main() {
    std::vector<Point> points;
    points.emplace_back(5, 10);
    points.emplace_back(15, 20);
    points.emplace_back(30, 24);

    for (const auto& point : points) {
        std::cout << "Point: (" << point.x << ", " << point.y << ")\n";
    }
    for(int i=0;i<points.size();i++){
        cout<<points[i].x<<endl;
    }

    return 0;
}
