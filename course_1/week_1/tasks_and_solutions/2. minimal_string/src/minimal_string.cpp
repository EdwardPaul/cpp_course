#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<string> strings;
    string a, b, c;
    cin>>a>>b>>c;
    strings.push_back(a);
    strings.push_back(b);
    strings.push_back(c);

    sort(begin(strings),end(strings));

    cout<<strings[0];

    return 0;
}