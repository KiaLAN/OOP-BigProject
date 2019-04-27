#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto fu = vector<int>(6,1);
    for( auto i :fu)
    {
        cout << i;
    }
    return 0;
}
