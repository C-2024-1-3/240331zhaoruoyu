#include<iostream>
using namespace std;
class Time {
private:int hour;
	  int minute;
	  int sec;
 public:	  void settime(int hour, int minute, int sec) {
		  cout << hour << ":" << minute << ":" << sec << endl;
	  }
};

int main() {
	Time t1;
	int h, m, s;
	cin >> h;
	cin >> m;
	cin >> s;
	t1.settime(h,m,s);
	
	system("pause");
	return 0;
}