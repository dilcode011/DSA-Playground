#include <iostream>
#include <string>

using namespace std;

int main() {
    int roll_number;
    string name;
    string address;
    string college;

    cout << "Enter the roll number: ";
    cin >> roll_number;

    cout << "Enter the name: ";
    getline(cin, name);

    cout << "Enter the address: ";
    getline(cin, address);

    cout << "Enter the college: ";
    getline(cin, college);

    cout<< "Roll Number: " << roll_number << endl;
    cout<< "Name: " << name << endl;
    cout<< "Address: " << address << endl;
    cout<< "College: " << college << endl;

    return 0;
}
