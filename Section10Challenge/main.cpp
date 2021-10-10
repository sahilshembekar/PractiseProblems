#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string msg_to_encode {};
    cout << "Enter the Message to code: ";
    getline (cin, msg_to_encode);
    
    cout << "Message Entered is: " << msg_to_encode << endl;
    
    for (size_t i{0}; i< msg_to_encode.length(); ++i) {
        for (size_t j{0}; j< alphabet.length(); ++j) {
            if (msg_to_encode.at(i) == alphabet.at(j)) {
                msg_to_encode.at(i) = key.at(j);
            break;
            }
        }
    }
    cout << "The encoded message is:" << msg_to_encode <<endl;
    cout << endl;
    return 0;
}

