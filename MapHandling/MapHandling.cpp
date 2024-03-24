#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, float> mMarks;
    int Q, type;
    string X;
    float Y;
    std::cin >> Q;
    while (Q-- > 0)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> X >> Y;
            mMarks[X] += Y;
        }
        else if (type == 2)
        {
            cin >> X;
            mMarks.erase(X);
        }
        else if (type == 3)
        {
            cin >> X;
            map<string, float>::iterator iter = mMarks.find(X);
            if (iter == mMarks.end())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << mMarks[X] << endl;
            }
        }
    }
    return 0;
}