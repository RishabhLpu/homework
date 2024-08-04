#include <iostream>
using namespace std;
int sum(int a )
{int s=0;
    while(a==1)
    return a;
     s=a+sum(a-1);
     return s;
}
int main() {
    int n=sum(6);
    cout << n << std::endl;
    return 0;
}
