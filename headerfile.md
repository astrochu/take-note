# assert.h
#### void assert(int expression)
##### 它提供了一個用於測試和調試的宏，並不是一個函數。
#### 範例:
```C
#include <assert.h>
#include <stdio.h>
 
int main()
{
   int a;
   char str[50];
     
   printf("请输入一个整数值： ");
   scanf("%d", &a);
   assert(a >= 10); //條件
   printf("输入的整数是： %d\n", a);
    
   printf("请输入字符串： ");
   scanf("%s", str);
   assert(str != NULL); //條件
   printf("输入的字符串是： %s\n", str);
    
   return(0);
}
```
##### 說明:assert通常用於除錯，如果程式條件回傳錯誤，則會終止程式。
##### 出處:https://www.runoob.com/cprogramming/c-macro-assert.html
