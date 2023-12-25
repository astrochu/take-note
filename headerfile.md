# assert.h
### void assert(int expression)
##### 它提供了一個用於測試和調試的宏，並不是一個函數。
### 範例:
```C
#include <assert.h>
#include <stdio.h>
 
int main()
{
   int a;
   char str[50];
     
   printf("请输入一个整数值： ");
   scanf("%d", &a);
   assert(a >= 10);
   printf("输入的整数是： %d\n", a);
    
   printf("请输入字符串： ");
   scanf("%s", str);
   assert(str != NULL);
   printf("输入的字符串是： %s\n", str);
    
   return(0);
}
```
