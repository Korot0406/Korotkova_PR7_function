#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

// Функция 1 для замены цифр в строке на символ "*"
void process(string &str){
    int len = str.length();
    
    for(int i = 0; i < len; ++i){
        if (str[i] >= '0' && str[i] <= '9'){
            str[i] = '*';
        }
    }
}

// Функция 2 для подсчета цифр в строке и их удалении 
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

// Пространство имен 1, содержащем функцию, которая заменяет цифры в строке на символ "*"
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

// Пространство имен 2, содержащем функцию, которая подсчитывает цифры и удаляет их
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

// Шаблонная функция, которая считает сумму элементова массива
template <typename T>
T sum_array(const T*arr, int size){
    T sum = 0;

    for(int i = 0; i < size; ++i){
        sum += arr[i];
    }

    return sum;
}

// Рекурсивная функция, которая возводит число в степень
double power_number(double x, int n){
    if(n == 0){
        return 1;
    }
    else if(n > 0){
        return x * power_number(x, n - 1);
    }
    else{
        return 1 / (x * power_number(x, -n - 1));
    }
}

// Функция, которая считает сумму положительных чисел массива
int sum_positive(int* arr, int size, auto lambda_func){
    int sum = 0;

    for(int i = 0; i < size; ++i){
        if(lambda_func(arr[i], size)) sum += arr[i];
    }

    return sum;
}