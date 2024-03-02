#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class sample{
private:
    int a;
    char b;
    float c;
public:
    void get_data(){
        cout << "Enter integer value for a: ";
        cin >> a;
        cout << "Enter character value for b: ";
        cin >> b;
        cout << "Enter float value for c: ";
        cin >> c;
    }
    
    void print_data(){
        cout << "Values entered:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main(void){
    sample s;
    s.get_data();
    s.print_data();
    return 0;
}
