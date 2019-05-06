// classes example
#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    void set_values (float,float);
    int area() {return width*height;}
	bool mac;
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

void Rectangle::set_values (float x, float y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  rect.mac = 1;
  if (rect.mac)
  cout << "area: " << rect.area()<< endl;
  return 0;
}
