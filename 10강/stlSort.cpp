#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
pair<string, pair<int, int> > b) {
    if (a.second.first == b.second.first)
    {
        return a.second.second > b.second.second;
    } else
    {
        return a.second.first > b.second.first;   
    }
}

int main(void)
{
    vector<pair<int, string> > v;
    v.push_back(pair<string, pair<int, int> >("김씨", make_pair(90, 19961222)));
    v.push_back(pair<string, pair<int, int> >("박씨", make_pair(85, 19930518)));
    v.push_back(pair<string, pair<int, int> >("이씨", make_pair(82, 19930203)));
    v.push_back(pair<string, pair<int, int> >("나씨", make_pair(98, 19921207)));
    v.push_back(pair<string, pair<int, int> >("문씨", make_pair(79, 19900302)));

    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i].second << ' ';
    }

    return 0;
}