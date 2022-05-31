//
// Created by Matrix on 2022/5/26.
//
//#include <cstring>
//#include <cmath>
//#include <iomanip>
//#include <iostream>
//using namespace std;
//class Date{
//public:
//    int year;
//    int month;
//    int day;
//};
//class Birth:public Date{
//};
//class People{
//private:
//    int Number;
//    bool Gender; // true 表示男 false 表示女
//    Birth Birthday;
//    long Id;
//    char * name;
//    static int total;
//public:
//    //People() = default;
//    People(int num = ++total,bool gen = true,int year = 2000,int month = 1,int day = 1,long id = 12345,char * n = "null"){
//        Number = num,Gender = gen;
//        Birthday.year = year, Birthday.month = month, Birthday.day = day;
//        Id = id;
//        name = new char[10];
//        strcpy(name,n);
//    }
//    People(People &p){
//        Number = p.Number,Gender = p.Gender;
//        Birthday.year = p.Birthday.year;Birthday.month = p.Birthday.month;Birthday.day = p.Birthday.day;
//        Id = p.Id;
//        name = new char[10];
//        strcpy(name,p.name);
//    }
//    ~People() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//    void setBirthday(int y,int m,int d) {Birthday.year = y,Birthday.month = m,Birthday.day = d;}
//    inline void input(int n,bool g,int y,int m,int d,long i,char * na) {
//        Number = n, Gender = g, Id = i;
//        Birthday.year = y, Birthday.month = m, Birthday.day = d;
//        strcpy(name,na);
//    }
//    inline void output() {
//        cout << setfill(' ') << setw(5) << name << "   ";
//        cout << setfill('0') << setw(5) << Number << "   ";
//        cout << (Gender ? "Male  " : "Female") << "   ";
//        cout << setfill('0') << setw(4) << Birthday.year << ".";
//        cout << setfill('0') << setw(2) << Birthday.month << ".";
//        cout << setfill('0') << setw(2) << Birthday.day << "   ";
//        cout << setfill('0') << setw(5) << Id << endl;
//    }
//    static int getTotal() {return total;}
//};
//int People::total = 0;
//void manage(){
//    People p[20];
//    int ptr = 0;
//    while (true) {
//        char status;
//        system("cls");
//        cout << "Please enter the initials to select the action to be performed:" << endl;
//        cout << "i) input" << endl;
//        cout << "o) output" << endl;
//        cout << "e) exit" << endl;
//        cin >> status;
//        if (status == 'i') {
//            system("cls");
//            int n;bool g;int y;int m;int d;long i;string gen;char na[10];
//            cout << "Please enter the person's information:" << endl;
//            cout << "Name: "; cin >> na;
//            cout << "Number: "; cin >> n;
//            cout << "Gender: "; cin >> gen;
//            if (gen == "Male") g = true;
//            if (gen == "Female") g = false;
//            cout << "Birthday: "; cin >> y >> m >> d;
//            cout << "Id: "; cin >> i;
//            if (ptr < 20) {
//                p[ptr].input(n,g,y,m,d,i,na);
//                ++ptr;
//                cout << "Entry successful!" << endl;
//                system("pause");
//            } else {
//                cout << "Entry failed: Number of members exceeded the limit." << endl;
//                system("pause");
//            }
//        } else if (status == 'o') {
//            system("cls");
//            if (ptr == 0) {
//                cout << "No members have been entered yet." << endl;
//            } else {
//                cout << "Number  Gender   Birthday     Id" << endl;
//                for (int i = 0; i < ptr; ++i) {
//                    p[i].output();
//                }
//            }
//            system("pause");
//        } else if (status == 'e') {
//            cout << "Bye!" << endl;
//            break;
//        } else {
//            cout << "Error!" << endl;
//            break;
//        }
//    }
//}
//void test() {
//    People p1;
//    People p2(p1);
//    p2.setBirthday(20,1,1);
//    p1.output();
//    p2.output();
//    system("pause");
//    system("cls");
//}
//int main()
//{
//    test();
//    manage();
//    return 0;
//}