#include <iostream>
using namespace std;
void fun(int **p2)
{
    //p2 = p2 + 1;
    //*p2=*p2+1;
    **p2=**p2+1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << endl;
    cout << "i before    " << i << endl;
    cout << "p before    " << p << endl;
    cout << "p2 before   " << p2 << endl;
    fun(p2);
    cout << "i after     " << i << endl;
    cout << "p after     " << p << endl;
    cout << "p2 after    " << p2 << endl;
    return 0;
}