//
// Created by Matrix on 2023/3/3.
//
//#include <cstring>
//#include <cmath>
//#include <cstdio>
//#include <iomanip>
//#include <iostream>
//#include <vector>
//#include <iterator>
//using namespace std;
//class programmer {
//protected:
//    char name[7];
//    bool sex;
//    int age;
//    int salary;
//public:
//    virtual int getSalary() = 0;
//    virtual void show() = 0;
//};
//class junior_programmer : public programmer {
//public:
//    junior_programmer() {
//        strcpy(name,"alex");
//        sex = true;
//        age = 18;
//        salary = 1000;
//    }
//    junior_programmer(const char * n,bool s,int a) {
//        strcpy(name,n);
//        sex = s;
//        age = a;
//        salary = 1000;
//    }
//    int getSalary() {
//        return salary;
//    }
//    void show() {
//        cout << setw(7) << setfill(' ') << left << name << "  ";
//        cout << (sex ? "man  " : "women") << "   ";
//        cout << setw(5) << setfill(' ') << salary << "    ";
//        cout << "junior" << endl;
//    }
//};
//class mid_programmer : public programmer {
//public:
//    mid_programmer() {
//        strcpy(name,"alice");
//        sex = false;
//        age = 28;
//        salary = 2000;
//    }
//    mid_programmer(const char * n,bool s,int a) {
//        strcpy(name,n);
//        sex = s;
//        age = a;
//        salary = 2000;
//    }
//    int getSalary() {
//        return salary;
//    }
//    void show() {
//        cout << setw(7) << setfill(' ') << left << name << "  ";
//        cout << (sex ? "man  " : "women") << "   ";
//        cout << setw(5) << setfill(' ') << salary << "    ";
//        cout << "middle" << endl;
//    }
//};
//class adv_programmer : public programmer {
//public:
//    adv_programmer() {
//        strcpy(name,"nancy");
//        sex = true;
//        age = 38;
//        salary = 3000;
//    }
//    adv_programmer(const char * n,bool s,int a) {
//        strcpy(name,n);
//        sex = s;
//        age = a;
//        salary = 3000;
//    }
//    int getSalary() {
//        return salary;
//    }
//    void show() {
//        cout << setw(7) << setfill(' ') << left << name << "  ";
//        cout << (sex ? "man  " : "women") << "   ";
//        cout << setw(5) << setfill(' ') << salary << "    ";
//        cout << "advanced" << endl;
//    }
//};
//class architect : public programmer {
//public:
//    architect() {
//        strcpy(name,"kevin");
//        sex = true;
//        age = 18;
//        salary = 1000;
//    }
//    architect(const char * n,bool s,int a) {
//        strcpy(name,n);
//        sex = s;
//        age = a;
//        salary = 1000;
//    }
//    int getSalary() {
//        return salary;
//    }
//    void show() {
//        cout << setw(7) << setfill(' ') << left << name << "  ";
//        cout << (sex ? "man  " : "women") << "   ";
//        cout << setw(5) << setfill(' ') << salary << "    ";
//        cout << "architect" << endl;
//    }
//};
//void test() {
//    cout << "name" << "     " << "sex" << "     " << "salary" << "   " << "position" << endl;
//    junior_programmer j;
//    mid_programmer m;
//    adv_programmer adv;
//    architect a;
//    j.show();
//    m.show();
//    adv.show();
//    a.show();
//};
//int main()
//{
//    test();
//    return 0;
//}