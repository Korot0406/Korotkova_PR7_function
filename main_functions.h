#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
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

template <typename T>
T sum_array(const T*arr, int size){
    T sum = 0;

    for(int i = 0; i < size; ++i){
        sum += arr[i];
    }

    return sum;
}

int power_number(int x, int n){
    if(n == 0){
        return 1;
    }
    while(n > 0){
        --n;
        return power_number(x, n) * x;
    }
}

int sum_positive(int* arr, int size, auto lambda_func){
    int sum = 0;

    for(int i = 0; i < size; ++i){
        if(lambda_func(arr[i], size)) sum += arr[i];
    }

    return sum;
}