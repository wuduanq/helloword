#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<string> msg {"Hello", "c", "word", "from", "VSCode", "and the c extension!"};

    for (const string& word : msg){
        cout << word << " ";
        cout << endl;
    }

    cout << endl;
}