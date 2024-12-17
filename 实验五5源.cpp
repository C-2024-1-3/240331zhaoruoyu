#include<iostream>
using namespace std;
class Point {
private:int x;
	   int y;
public: Point(int x = 60, int y = 80) {
	this->x = x;
	this->y = y;
	   }
void setPoint(int i, int j) {
	x += i;
	y += j;
}
	  void display()const {
		  cout <<"(" << x << "," << y<<")" << endl;
	  }
};

int main() {
	Point p;
	int i; int j;
	cout << "ÊäÈëi,jµÄÖµ" << endl;
	cin >> i;
	cin >> j;
	p.setPoint(i, j);
	p.display();
	system("pause");
	return 0;
}