#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> data{};
    char Value {};
    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Enter Your Choice: ";
        cin >> Value;
        
        if (Value == 'P' || Value == 'p') {
        cout << "===========================" << endl;
            cout << " The numbers are [ ";
        for (auto s1 : data) {
            cout << s1 << " ";
        }
        cout << "]" <<endl;
        cout << "===========================" << endl;
        }
    
        else if (Value == 'A' || Value == 'a') {
        cout << "Tell the number to add : ";
        int a {};
        cin >> a;
        data.push_back(a);
        cout << "Number added is: " << a <<endl;
        }
        
        else if (Value == 'M' || Value == 'm') {
            int sum {0};
            for (auto s1 : data) {
            sum += s1;
            }
            double mean {};
            mean = sum/data.size();
            cout << "The mean is : " << mean << endl;
        }
        else if (Value == 'S' || Value == 's') {
            for (unsigned i = 0; i < data.size(); ++i) {
                for (unsigned j = 1; i < data.size(); ++j) {
                    int smallest_num = data.at(i);
                    if (data.at(i) > data.at(j)) {
                        smallest_num = data.at(j);
                    }
                }
            }
        }
        
        else {
            cout << "Invalid input, Please enter again." << endl;
        }
        
    }
    while (Value != 'Q' || Value != 'q'); 
    cout << "Goodbye... " << endl;
    
    return 0;
}

