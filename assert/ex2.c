#include <assert.h>

int main() {
    int*ptr = NULL; //ptr:pointer to array 指向陣列的指標
    assert(ptr != NULL); //如果ptr是空指標，終止程式
    return 0;
}
