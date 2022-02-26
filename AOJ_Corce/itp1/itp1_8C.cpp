#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(26);
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (isalpha(s[i]))
            {
                char ch = s[i];
                if (isupper(s[i]))
                {
                    ch = tolower(ch);
                }
                ++vec[ch - 'a'];
            }
        }
    }
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << (char)(i + 'a') << " : " << vec[i] << endl;
    }
    return 0;
}