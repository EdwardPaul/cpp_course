#include <iostream>
#include <string>
using namespace std;

int main(){

    string input;
    cin>>input;
    int count = 0;
    int second_entry;

    for (int i = 0; i < input.size(); i++){
        if(input[i]=='f'){
            count++;
        }
        if(count == 2){
            second_entry = i;
            cout<<second_entry;
            return 0;
        }
    }

    if (count == 1){
        cout<<-1;
    }
    if (count == 0){
        cout<<-2;
    }
}