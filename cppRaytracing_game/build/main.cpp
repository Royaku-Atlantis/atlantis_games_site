#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int abcde;
    cout << "Hello World";

    char a = ' ';
    do {
        a = getch();
        cout<<a;
    }while (a!=0x0a);
    return 0;
}