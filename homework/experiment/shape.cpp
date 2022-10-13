//
// Created by Matrix on 2022/6/9.
//
//#include <iomanip>
//#include <iostream>
//using namespace std;
//class shape {
//public:
//    virtual double round() = 0;
//    virtual double area() = 0;
//    virtual void show() = 0;
//};
//class rectangle : public shape {
//private:
//    double length,width;
//public:
//    rectangle();
//    rectangle(double l,double w);
//    rectangle(rectangle &r);
//    virtual double round();
//    virtual double area();
//    virtual void show();
//    void set(double l,double w);
//};
//rectangle::rectangle() {
//    length = 1.0,width  =1.0;
//}
//rectangle::rectangle(double l, double w) {
//    length = l,width = w;
//}
//rectangle::rectangle(rectangle &r) {
//    length = r.length,width = r.width;
//}
//double rectangle::round() {
//    return length * 2 + width * 2;
//}
//double rectangle::area() {
//    return length * width;
//}
//void rectangle::show() {
//    cout << "This shape is rectangle." << endl;
//    cout << "The length is: " << length << endl;
//    cout << "The width is: " << width << endl;
//    cout << "The round is: " << this->round() << endl;
//    cout << "The area is: " << this->area() << endl;
//}
//void rectangle::set(double l, double w) {
//    length = l,width = w;
//}
//
//class circle : public shape {
//private:
//    double x,y,r;
//public:
//    circle();
//    circle(double xx,double yy,double rr);
//    circle(circle &c);
//    virtual double round();
//    virtual double area();
//    virtual void show();
//    void set(double xx,double yy,double rr);
//};
//circle::circle() {
//    x = 0.0,y = 0.0,r = 1.0;
//}
//circle::circle(double xx, double yy, double rr) {
//    x = xx,y = yy,r = rr;
//}
//circle::circle(circle &c) {
//    x = c.x,y = c.y,r = c.r;
//}
//double circle::round() {
//    return 2.0 * r * 3.14159265358979;
//}
//double circle::area() {
//    return r * r * 3.14159265358979;
//}
//void circle::show() {
//    cout << "This shape is circle." << endl;
//    cout << "The coordinate is: " << x << " , " << y << endl;
//    cout << "The radius is: " << r << endl;
//    cout << "The round is: " << this->round() << endl;
//    cout << "The area is: " << this->area() << endl;
//}
//void circle::set(double xx, double yy, double rr) {
//    x = xx,y = yy,r = rr;
//}
//
//class triangle : public shape {
//private:
//    double x1,y1,x2,y2,x3,y3;
//public:
//    triangle();
//    triangle(double x11,double y11,double x22,double y22,double x33,double y33);
//    triangle(triangle &t);
//    virtual double round();
//    virtual double area();
//    virtual void show();
//    void set(double x11,double y11,double x22,double y22,double x33,double y33);
//};
//triangle::triangle() {
//    x1 = 0.0,y1 = 0.0;
//    x2 = 1.0,y2 = 0.0;
//    x3 = 0.0,y3 = 1.0;
//}
//triangle::triangle(double x11, double y11, double x22, double y22, double x33, double y33) {
//    x1 = x11,y1 = y11;
//    x2 = x11,y2 = y22;
//    x3 = x33,y3 = y33;
//}
//triangle::triangle(triangle &t) {
//    x1 = t.x1,y1 = t.y1;
//    x2 = t.x2,y2 = t.y2;
//    x3 = t.x3,y3 = t.y3;
//}
//double triangle::round() {
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
//           + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3))
//           + sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
//}
//double triangle::area() {
//    return 1.0 / 2.0 * (x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
//}
//void triangle::show() {
//    cout << "This shape is triangle." << endl;
//    cout << "The first coordinate is: " << x1 << " , " << y1 << endl;
//    cout << "The second coordinate is: " << x2 << " , " << y2 << endl;
//    cout << "The third coordinate is: " << x3 << " , " << y3 << endl;
//    cout << "The round is: " << this->round() << endl;
//    cout << "The area is: " << this->area() << endl;
//}
//void triangle::set(double x11, double y11, double x22, double y22, double x33, double y33) {
//    x1 = x11,y1 = y11;
//    x2 = x11,y2 = y22;
//    x3 = x33,y3 = y33;
//}
//
//class trapezoid : public shape {
//private:
//    double x1,y1,x2,y2,x3,y3,x4,y4;
//public:
//    trapezoid();
//    trapezoid(double x11,double y11,double x22,double y22,double x33,double y33,double x44,double y44);
//    trapezoid(trapezoid &t);
//    virtual double round();
//    virtual double area();
//    virtual void show();
//    void set(double x11,double y11,double x22,double y22,double x33,double y33);
//};
//trapezoid::trapezoid() {
//    x1 = 0.0,y1 = 0.0;
//    x2 = 1.0,y2 = 0.0;
//    x3 = 1.0,y3 = 1.0;
//    x4 = 0.0,y4 = 1.0;
//}
//trapezoid::trapezoid(double x11, double y11, double x22, double y22, double x33, double y33,double x44,double y44) {
//    x1 = x11,y1 = y11;
//    x2 = x11,y2 = y22;
//    x3 = x33,y3 = y33;
//    x4 = x44,y4 = y44;
//}
//trapezoid::trapezoid(trapezoid &t) {
//    x1 = t.x1,y1 = t.y1;
//    x2 = t.x2,y2 = t.y2;
//    x3 = t.x3,y3 = t.y3;
//    x4 = t.x4,y4 = t.y4;
//}
//double trapezoid::round() {
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
//           + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3))
//           + sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4))
//           + sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
//}
//double trapezoid::area() {
//    return 1.0 / 2.0 * (x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2)
//           + 1.0 / 2.0 * (x1 * y3 + x3 * y4 + x4 * y1 - x1 * y4 - x3 * y1 - x4 * y3);
//}
//void trapezoid::show() {
//    cout << "This shape is trapezoid." << endl;
//    cout << "The first coordinate is: " << x1 << " , " << y1 << endl;
//    cout << "The second coordinate is: " << x2 << " , " << y2 << endl;
//    cout << "The third coordinate is: " << x3 << " , " << y3 << endl;
//    cout << "The forth coordinate is: " << x4 << " , " << y4 << endl;
//    cout << "The round is: " << this->round() << endl;
//    cout << "The area is: " << this->area() << endl;
//}
//void trapezoid::set(double x11, double y11, double x22, double y22, double x33, double y33) {
//    x1 = x11,y1 = y11;
//    x2 = x11,y2 = y22;
//    x3 = x33,y3 = y33;
//}
//
//void test() {
//    rectangle r;
//    circle c;
//    triangle t;
//    trapezoid tt;
//    shape * ptr = &r;
//    ptr->show();
//    ptr = &c;
//    ptr->show();
//    ptr = &t;
//    ptr->show();
//    ptr = &tt;
//    ptr->show();
//};
//int main()
//{
//    test();
//    return 0;
//}