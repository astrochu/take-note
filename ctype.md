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
檢查字符var1-4，如果var1-4是一個字母或數字，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isalnum.html

#### int isalpha(int c)
##### 判斷字符 c 是否是字母。
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
    
   if( isalpha(var1) )
   {
      printf("var1 = |%c| 是一个字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个字母\n", var1 );
   }
   if( isalpha(var2) )
   {
      printf("var2 = |%c| 是一个字母\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是一个字母\n", var2 );
   }
   if( isalpha(var3) )
   {
      printf("var3 = |%c| 是一个字母\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是一个字母\n", var3 );
   }
   if( isalpha(var4) )
   {
      printf("var4 = |%c| 是一个字母\n", var4 );
   }
   else
   {
      printf("var4 = |%c| 不是一个字母\n", var4 );
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
檢查字符var1-4，如果var1-4是一個字母，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isalpha.html

#### int isdigit(int c)
##### 判斷字符 c 是否是數字。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) )
   {
      printf("var1 = |%c| 是一个数字\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个数字\n", var1 );
   }
   if( isdigit(var2) )
   {
      printf("var2 = |%c| 是一个数字\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是一个数字\n", var2 );
   }
  
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |h| 不是一个数字
var2 = |2| 是一个数字

```
</details>

##### 說明:
檢查字符var1-4，如果var1-4是一個數字，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isdigit.html

#### int iscntrl(int c)
##### 判斷字符 c 是否是控制字符。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) )
   {
      printf("var1 = |%c| 是一个数字\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个数字\n", var1 );
   }
   if( isdigit(var2) )
   {
      printf("var2 = |%c| 是一个数字\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是一个数字\n", var2 );
   }
  
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |h| 不是一个数字
var2 = |2| 是一个数字

```
</details>

<details>
<summary>*控制字元</summary>

##### "控制字元" 通常指 ASCII 控制字元，這是 ASCII 字元集中的一組特殊字符，其 ASCII 值在 0 到 31 之間。這些字符通常不是可見字符，而是用於控制輸出設備或執行特定的控制功能。
##### 常見的控制字元:
NUL (Null) - ASCII 0:

通常用於字串終結符號。
SOH (Start of Header) - ASCII 1:

在通信協議中用於表示報文開始。
STX (Start of Text) - ASCII 2:

在通信協議中用於指示正文的開始。
ETX (End of Text) - ASCII 3:

在通信協議中用於指示正文的結束。
ENQ (Enquiry) - ASCII 5:

用於發出查詢。
ACK (Acknowledge) - ASCII 6:

表示接收到報文，通常用於通信協議中的確認。
BEL (Bell) - ASCII 7:

通常用於產生聲音提示或閃爍螢幕。
BS (Backspace) - ASCII 8:

用於後退一個位置。
HT (Horizontal Tab) - ASCII 9:

用於水平定位，通常在顯示文本時用於定位到下一個 tab 位置。
LF (Line Feed) - ASCII 10:

用於在文本中換行。
VT (Vertical Tab) - ASCII 11:

用於垂直定位。
FF (Form Feed) - ASCII 12:

用於換頁。
CR (Carriage Return) - ASCII 13:

用於將光標移到行首。
SO (Shift Out) - ASCII 14:

在字符集中切換到另一半。
SI (Shift In) - ASCII 15:

切換回原始字符集。

</details>

##### 說明:
檢查字符var1-4，如果var1-4是一個數字，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isdigit.html
