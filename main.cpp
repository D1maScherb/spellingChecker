#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{

    char str[50];
    int abc;

    gets(str);

    for(int i = 0; i <= strlen(str) + 1; i++){
        if(str[i] == str[0]){
            str[i] = toupper(str[i]);
        } else if(str[i] != str[0] && isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    
    cout << "length = " << strlen(str) << endl;//DEBUG
    str[strlen(str)] = '.';
    cout << "length = " << strlen(str) << endl;//DEBUG

    cout << str;

    cin >> abc;

    return 0;
}
