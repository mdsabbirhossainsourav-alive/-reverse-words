#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,w;
    getline(cin,s);
    stringstream ss(s);
    bool first = true;
    while (ss >> w)
    {
        reverse(w.begin(),w.end());
        if (first != 1)
        {
            cout <<  " ";
        }    
        cout << w;
        first = false;
    }
    return 0;
}


