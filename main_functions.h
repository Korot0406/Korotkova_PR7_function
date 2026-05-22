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

namespace namespace_string1
{
    void process(string &str){
        int len = str.length();
    
        for(int i = 0; i < len; ++i){
            if (str[i] >= '0' && str[i] <= '9'){
                str[i] = '*';
            }
        }
    }
}

namespace namespace_string2
{
    void process(string &str){
        int len = str.length();
        string result = "";
        int k = len;

        for(int i = 0; i < len; ++i){
            if (str[i] < '0' || str[i] > '9'){
                result += str[i];
                --k;
            }
        }
        str = result;

        cout << "Количество цифр в строке: " << k << "\n";
    }
}