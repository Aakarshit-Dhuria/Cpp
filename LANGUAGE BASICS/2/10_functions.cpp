#include<iostream>
using namespace std;

void greetMsg(){
    cout << "Hi,\n";
    cout << "Welcome to GeeksForGeeks\n";
}

void exitMsg(){
    cout << "Bye\n";
    cout << "Visit Again\n";
}

int main(){
    greetMsg();
    cout << "Hope you are enjoying.\n";
    exitMsg();
    return 0;
}