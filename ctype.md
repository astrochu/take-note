# ctype.h
#### int isalnum(int c)
##### 判斷字符 c 是否是字母（大寫或小寫）或數字。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| 是字母数字\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是字母数字\n", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| 是字母数字\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是字母数字\n", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| 是字母数字\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是字母数字\n", var3 );
   }
   if( isalnum(var4) )
   {
      printf("var4 = |%c| 是字母数字\n", var4 );
   }
   else
   {
      printf("var4 = |%c| 不是字母数字\n", var4 );
   }
    
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |d| 是一个字母
var2 = |2| 不是一个字母
var3 = | | 不是一个字母
var4 = | | 不是一个字母
```
</details>

##### 說明:
檢查字符var1~4，如果var1~4是一個字母或數字，該函數返回非零值，若不是則返回零。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isalnum.html


