#include<iostream>
using namespace std;

//Prototypes
void cinInputs(double&, double&, double&);

class Circle {

public:
	Circle(double r, double xValue, double yValue) {
		setRadius(r);
		setX(xValue);
		setY(yValue);
	}
	void getInfo() {
		cout << getRadius() << endl;
		cout << "Chosen point of " << "(" << getX() << ", " << getY() << ")" << endl;
		cout << getArea() << endl;
	}
	bool containsPoint(double xValue, double yValue) {
		double d;
		d = sqrt(xValue*xValue + yValue*yValue);
		return !(d > radius || d < -radius || d > radius || d < -radius);
	}

private:
	double x;
	double y;
	double radius;
	void setRadius(double r) {
		radius = r;
		if (r < 0 ) r = 0;
	}
	void setX(double value) {x = value;}
	void setY(double value) {y = value;}
	double getRadius() {
		cout << "The radius is ";
		return radius;
	}
	double getX() {return x;}
	double getY() {return y;}
	double getArea() {
		cout << "The area is ";
		return (radius * radius * 3.14);
	}

};

int main() {
	double r;
	double x;
	double y;

	cinInputs(r, x, y);
	Circle c1(r, x, y);
	cout << "\nInformation for c1:" << endl;
	c1.getInfo();
	if (c1.containsPoint(x, y)) cout << "(" << x << ", " << y << ") is contained within c1.\n\n";
	else cout << "(" << x << ", " << y << ") is NOT contained within c1.\n\n";

	cinInputs(r, x, y);
	Circle c2(r, x, y);
	cout << "\nInformation for c2:" << endl;
	c2.getInfo();
	if (c2.containsPoint(x, y)) cout << "(" << x << ", " << y << ") is contained within c2.\n\n";
	else cout << "(" << x << ", " << y << ") is NOT contained within c2.\n\n";

	cinInputs(r, x, y);
	Circle c3(r, x, y);
	cout << "\nInformation for c3:" << endl;
	c3.getInfo();
	if (c3.containsPoint(x, y)) cout << "(" << x << ", " << y << ") is contained within c3.\n\n";
	else cout << "(" << x << ", " << y << ") is NOT contained within c3.\n\n";

	return 0;
}

void cinInputs(double &r, double &x, double &y) {
	cout << "Enter a desired radius: ";
	cin >> r;
	cout << "Enter an x-coordinate: ";
	cin >> x;
	cout << "Enter a y-coordinate: ";
	cin >> y;
}