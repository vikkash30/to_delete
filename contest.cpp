#include <iostream>
#include <string>
using namespace std;
int main()
{
    int stid, p, b, cr;
    float fee, dis, fin, d;
    string name, dept, type;
    char a;
    cout << "Enter the student ID: ";
    cin >> stid;
    cout << "Enter the student name: ";
    cin >> name;
    cout << "Enter 1 for CSE\n";
    cout << "Enter 2 for IT\n";
    cout << "Enter 3 for Electronics\n";
    cout << "Enter 4 for Mechanical\n";
    cout << "Enter 5 for Civil\n";
    cout << "Enter the department: ";
    cin >> a;
    if (a == '1') {
        dept = "Computer Science Engineering";
        p = 1500;
    }
    else if (a == '2') {
        dept = "Information Technology";
        p = 1400;
    }
    else if (a == '3') {
        dept = "Electronics";
        p = 1300;
    }
    else if (a == '4') {
        dept = "Mechanical";
        p = 1200;
    }
    else if (a == '5') {
        dept = "Civil";
        p = 1100;
    }
    else {
        cout << "Wrong input";
        return 0;
    }
    cout << "\nEnter 1 for Regular";
    cout << "\nEnter 2 for Scholarship";
    cout << "\nEnter 3 for Sports";
    cout << "\nEnter 4 for Merit";
    cout << "\nEnter Student category: ";
    cin >> b;
    if (b == 1) {
        type = "Regular";
        d = 0;
    }
    else if (b == 2) {
        type = "Scholarship";
        d = 0.25;
    }
    else if (b == 3) {
        type = "Sports";
        d = 0.15;
    }
    else if (b == 4) {
        type = "Merit";
        d = 0.20;
    }
    else {
        cout << "Wrong input";
        return 0;
    }
    cout << "\nEnter number of credits: ";
    cin >> cr;
    fee = p * cr;
    dis = d * fee;
    fin = fee - dis;
    cout << "\n\n=========================== FEE RECEIPT ===========================";
    cout << "\n\nStudent ID  : " << stid;
    cout << "\nStudent Name  : " << name;
    cout << "\nDepartment  : " << dept;
    cout << "\nCategory  : " << type;
    cout << "\nCredits  : " << cr;
    cout << "\nBasic Fee  : " << fee << " Rs";
    cout << "\nDiscount  : " << dis << " Rs";
    cout << "\nFinal Fee  : " << fin << " Rs";
    cout << "\n\n===================================================================";
    return 0;
}