#include <iostream>
using std::cout;
using std::cin;

#define MAX 3 
class student {
private:
    char name[30];
    int courseNum;
    int total;
    float perc;
public:
    void getDetails(void); 
    void putDetails(void); 
};

void student::getDetails(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter course number: ";
    cin >> courseNum;
    cout << "Enter total grades out of 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}

void student::putDetails(void) {
    cout << "Student details:\n";
    cout << "Name: " << name << ", Course Number: " << courseNum
         << ", Total: " << total << ", Percentage: " << perc << "%\n";
}

int main() {
    student students[MAX]; 

    for (int i = 0; i < MAX; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getDetails();
    }

    cout << "\nDetails of students who appeared in the examination:\n";
    for (int i = 0; i < MAX; ++i) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].putDetails();
    }

    return 0;
}
