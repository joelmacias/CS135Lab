#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "input an number" << endl;
    cin >> x;
    
    int inttx;
    inttx=int(x);
    
    double diff;
    
    diff=x-inttx;
    
    if (diff==0)
        cout << "this is an integer" << endl;
    
    else
        cout << "this is not an integer" << endl;
    
    return 0;
}