#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int res = 1;
    for (auto c : s)
    {
        if (isupper(c)) res++;
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}