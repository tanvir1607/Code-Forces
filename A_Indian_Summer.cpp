// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int size;
//     cin >> size;
//     cin.ignore();
//     string str;
//     set<string> Set;
//     while (size--) getline(cin, str), Set.insert(str);
//     cout << Set.size() << endl;

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size;
    cin >> size;
    string a, b;
    map<pair<string, string>, bool> Map;
    while (size--) cin >> a >> b, Map.insert({{a, b}, true});
    cout << Map.size() << endl;

    return 0;
}

