#include <iostream>

//int hammingDistance(int x, int y) {
//    int x_bit, y_bit;
//    int count = 0;
//    while(x || y){
//        if(x){
//            x_bit = x % 2;
//            x /= 2;
//        }
//        else x_bit = 0;
//        if(y){
//            y_bit = y % 2;
//            y /= 2;
//        }
//        else y_bit = 0;
//        count += (x_bit != y_bit);
//    }
//    return count;
//}

int hammingDistance(int x, int y) {
    int z = x ^ y;
    int distance = 0;
    while(z){
        distance++;
        z &= (z - 1);
    }
    return distance;
}

int main() {
    std::cout << hammingDistance(1002, 0) << std::endl;
    return 0;
}