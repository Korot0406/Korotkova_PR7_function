#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void process(string &str){
    int len = str.length();
    
    for(int i = 0; i < len; ++i){
        if (str[i] >= '0' && str[i] <= '9'){
            str[i] = '*';
        }
    }
}

void process(char *str){
    int len = strlen(str);
    int j = 0;
    int k = len;

    for(int i = 0; i < len; ++i){
        if (str[i] < '0' || str[i] > '9'){
            str[j++] = str[i];
            --k;
        }
    }

    str[j] = '\0';

    cout << "Количество цифр в строке: " << k << "\n";
}

namespace namespace_string3
{
    void process(string &str){

    }
}

namespace namespace_string2
{
    void process(char *str){

    }
}