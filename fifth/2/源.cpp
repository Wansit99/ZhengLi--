#include<iostream>
using namespace std;

class Point {
public:
	Point(double xx,double yy) :x(xx),y(yy){
		count++;
	}
	~Point() {};

	static void showCount() {
		cout << count << endl;
	}
private:
	double x, y;
	static int count;
};

int Point::count = 0;

int main() {
	double x, y;
	while (1) {
		cin >> x >> y;
		if (((x - 0) < 1e-9) && ((y - 0) < 1e-9))
			break;
		else
			Point a(x, y);
	}
	Point::showCount();
	return 0;
}