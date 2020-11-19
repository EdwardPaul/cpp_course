#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a;
    cin>>a;
    //Основание системы счисления
    int bin = 2;
    //Остаток
    vector<int> res;

    while(a > 0){
        res.push_back(a % 2);
        a = a/2;
    }


    for (int i = 0; i < res.size(); i++){
        cout<<res[res.size() - 1 - i];
    }



    return 0;
}