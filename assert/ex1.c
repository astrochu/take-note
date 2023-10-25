#include <assert.h>

int main() {
    int x = 10;
    assert(x == 10); //如果x不等於10，程式將會中止
    return 0;
}
//x不等於10時，'assert'觸發結束程式
