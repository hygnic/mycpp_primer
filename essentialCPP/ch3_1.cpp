//
// Created by hygnic on 2021/2/28.
//
#include <iostream>

template <typename elemtyle>
elemtyle* find(const elemtyle *first, const elemtyle *last, const elemtyle &value){
    if (!first || !last) {
        return 0;
    }
    for (; first 1= last; ++first) {

    }
}
//
// Created by hygnic on 2021/2/28.
//
#include <iostream>

using namespace std;

template <typename elemtyle>
elemtyle* find(const elemtyle *first, const elemtyle *last, const elemtyle &value){
    if (!first || !last) return 0;

    for (; first != last; ++first) {
        if (*first == value) {
            cout << *first << endl;
            return (int *) first;
        }
    }
    return 0;
}

int main(){
    int ia[8]{1, 2, 3, 4, 5, 6, 7, 8};
    double da[6] = {3.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    int *p = find(ia, ia + 8, ia[5]);
    return 0;
}