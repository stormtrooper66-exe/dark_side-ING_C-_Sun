#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    /*
     версия курильщика 
    int vector_1;
    int vector_2;
    int x_1;
    cin >> x_1;
    int y_1;
    cin >> y_1;
    int x_2;
    cin >> x_2;
    int y_2;
    cin >> y_2;
    vector_1 = x_1-x_2;
    vector_2 = y_1-y_2;
    if(vector_1 == 5; vector_2 == 2)
    {
        cout << "YESSSS!"<<endl;
    }
    else if (vector_1 == 2; vector_2 == 5)
    {
        cout << "YESSSS!"<<endl;
    }
    else
    {
        cout << "NO no"<<endl;
    }
    */
   
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        if (abs(x1-y1)==5 && abs(x2-y2)==2)
    {
        cout << "YES";
    }
        if   (abs(x1-y1)==2 && abs(x2-y2)==5)
    {
             cout << "YES";
    }
        else
    {
        cout << "NO";
    }
    return 0;
}
// 3 x1
// 6 y1
// 1 x2
// 1 y2
