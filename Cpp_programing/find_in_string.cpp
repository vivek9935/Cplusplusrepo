#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
void print(int id, std::string::size_type n, string const& s);
int main()
{
    string::size_type n;
    string const s = "This is a string";  /*
                             ^  ^  ^
                             1  2  3           */
    // search from beginning of string
    n = s.find("is");
    print(1, n, s);
    // search from position 5
    n = s.find("is", 5);
    print(2, n, s);
    // find a single character
    n = s.find('a');
    print(3, n, s);
    // find a single character
    n = s.find('q');
    print(4, n, s);
}
void print(int id, string::size_type n, string const& s)
{
    std::cout << id << ") ";
    if (string::npos == n)
        cout << "not found! n == npos\n";
    else
        cout << "found @ n = " << n << ", substr(" << n << ") = "
                  << quoted(s.substr(n)) << "\n";
}