#include <iostream>
const int ARRAY_LEN = 10;
int val(){
    return 1;
}
int val(int a){
    return 2;
}
int val(int a, int b, int c){
    return 3;
}
int main() {
    int arr[ARRAY_LEN] = {10}; // Note implicit initialization of
    // other elements
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;
    std::cout << *xPtr << ' ' << *yPtr; // Should output
    return 0;
 }
