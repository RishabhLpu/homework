#include <iostream>
using namespace std;
int TowerOfHanoi(int n, char a, char b, char c)
{
    if(n==1)
    { cout<<" there is only one disk"<<endl;
    return 0 ;
    }
        TowerOfHanoi(n-1,a,b,c);
    cout << "Transfer disk " << n << " from " << a << " to " << c << endl;        TowerOfHanoi(n-1,c,b,a);
    }

int main() {
    int  n =6;
    TowerOfHanoi(n,'A','B','C');

    return 0;
}
