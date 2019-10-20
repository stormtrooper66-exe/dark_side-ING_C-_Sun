#include <cstring>
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    string str;
    getline(cin,str);
    int colvo = str.size();
    double money = (colvo * 0.23f);
    cout << money << endl ;
    
    
    return 0;
}

