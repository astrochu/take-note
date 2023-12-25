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
***
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
***
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
檢查字符var1、var2，如果var1、var2是一個數字，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isdigit.html
***
#### int iscntrl(int c)
##### 判斷字符 c 是否是控制字符。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0, j = 0;
   char str1[] = "all \a about \t programming";
   char str2[] = "Runoob \n tutorials";
  
   /* 输出字符串直到控制字符 \a */
   while( !iscntrl(str1[i]) ) 
   {
      putchar(str1[i]); //主要用於單個字符的簡單輸出
      i++;
   }
  
   /* 输出字符串直到控制字符 \n */
   while( !iscntrl(str2[j]) ) 
   {
      putchar(str2[j]); //主要用於單個字符的簡單輸出
      j++;
   }
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
all Runoob 
```
</details>

<details>
<summary>*控制字元</summary>

##### "控制字元" 通常指 ASCII 控制字元，這是 ASCII 字元集中的一組特殊字符，其 ASCII 值在 0 到 31 之間。這些字符通常不是可見字符，而是用於控制輸出設備或執行特定的控制功能。
##### 常見的控制字元:
##### NUL (Null) - ASCII 0:通常用於字串終結符號。
##### SOH (Start of Header) - ASCII 1:在通信協議中用於表示報文開始。
##### STX (Start of Text) - ASCII 2:在通信協議中用於指示正文的開始。
##### ETX (End of Text) - ASCII 3:在通信協議中用於指示正文的結束。
##### ENQ (Enquiry) - ASCII 5:用於發出查詢。
##### ACK (Acknowledge) - ASCII 6:表示接收到報文，通常用於通信協議中的確認。
##### BEL (Bell) - ASCII 7:通常用於產生聲音提示或閃爍螢幕。
##### BS (Backspace) - ASCII 8:用於後退一個位置。
##### HT (Horizontal Tab) - ASCII 9:用於水平定位，通常在顯示文本時用於定位到下一個 tab 位置。
##### LF (Line Feed) - ASCII 10:用於在文本中換行。
##### VT (Vertical Tab) - ASCII 11:用於垂直定位。
##### FF (Form Feed) - ASCII 12:用於換頁。
##### CR (Carriage Return) - ASCII 13:用於將光標移到行首。
##### SO (Shift Out) - ASCII 14:在字符集中切換到另一半。
##### SI (Shift In) - ASCII 15:切換回原始字符集。

</details>

##### 說明:
檢查字符str1、str2，如果str1、str2是一個控制字符，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-iscntrl.html
***
#### int isgraph(int c)
##### 判斷字符 c 是否有圖形表示法。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>
 
int main()
{
   int var1 = '3';
   int var2 = 'm';
   int var3 = ' ';
    
   if( isgraph(var1) )
   {
       printf("var1 = |%c| 是可打印的\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 是不可打印的\n", var1 );
   }
   if( isgraph(var2) )
   {
       printf("var2 = |%c| 是可打印的\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 是不可打印的\n", var2 );
   }
   if( isgraph(var3) )
   {
       printf("var3 = |%c| 是可打印的\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 是不可打印的\n", var3 );
   }
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |3| 是可打印的
var2 = |m| 是可打印的
var3 = | | 是不可打印的

```
</details>

<details>
<summary>C語言中的所有圖形字符</summary>

! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~

</details>

##### 說明:
檢查字符var1-3，如果var1-3有圖形表示法，該函數返回非零值，若沒有則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isgraph.html
***
#### int islower(int c)
##### 判斷字符 c 是否為小寫字母。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'Q';
   int var2 = 'q';
   int var3 = '3';
    
   if( islower(var1) )
   {
       printf("var1 = |%c| 是小写字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是小写字母\n", var1 );
   }
   if( islower(var2) )
   {
       printf("var2 = |%c| 是小写字母\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是小写字母\n", var2 );
   }
   if( islower(var3) )
   {
       printf("var3 = |%c| 是小写字母\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是小写字母\n", var3 );
   }
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |Q| 不是小写字母
var2 = |q| 是小写字母
var3 = |3| 不是小写字母
```
</details>

##### 說明:
檢查字符var1-3，如果var1-3是小寫字母，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-islower.html
***
#### int isupper(int c)
##### 判斷字符 c 是否為大寫字母。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'M';
   int var2 = 'm';
   int var3 = '3';
    
   if( isupper(var1) )
   {
      printf("var1 = |%c| 是大写字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是大写字母\n", var1 );
   }
   if( isupper(var2) )
   {
      printf("var2 = |%c| 是大写字母\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是大写字母\n", var2 );
   }   
   if( isupper(var3) )
   {
      printf("var3 = |%c| 是大写字母\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是大写字母\n", var3 );
   }
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |M| 是大写字母
var2 = |m| 不是大写字母
var3 = |3| 不是大写字母
```
</details>

##### 說明:
檢查字符var1-3，如果var1-3是大寫字母，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isupper.html
***
#### int isprint(int c)
##### 判斷字符 c 是否是一個可以打印的字符。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isprint(var1) )
   {
      printf("var1 = |%c| 是可打印的\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 是不可打印的\n", var1 );
   }
   if( isprint(var2) )
   {
      printf("var2 = |%c| 是可打印的\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 是不可打印的\n", var2 );
   }
   if( isprint(var3) )
   {
      printf("var3 = |%c| 是可打印的\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 是不可打印的\n", var3 );
   }
   if( isprint(var4) )
   {
      printf("var4 = |%c| 是可打印的\n", var4 );
   }
   else
   {
      printf("var4 = |%c| 是不可打印的\n", var4 );
   }
   
   return(0);
}   
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |k| 是可打印的
var2 = |8| 是可打印的
var3 = |    | 是不可打印的
var4 = | | 是可打印的
```
</details>

##### 說明:
檢查字符var1-4，如果var1-4可以打印，該函數返回非零值，若不可以則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isprint.html
***
#### int ispunct(int c)
##### 判斷字符 c 是否是標點符號。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = '/';
   int var4 = ' ';

   if( ispunct(var1) )
   {
       printf("var1 = |%c| 是标点符号字符\n", var1 );
   }
   else
   {
       printf("var1 = |%c| 不是标点符号字符\n", var1 );
   }
   if( ispunct(var2) )
   {
       printf("var2 = |%c| 是标点符号字符\n", var2 );
   }
   else
   {
       printf("var2 = |%c| 不是标点符号字符\n", var2 );
   }
   if( ispunct(var3) )
   {
       printf("var3 = |%c| 是标点符号字符\n", var3 );
   }
   else
   {
       printf("var3 = |%c| 不是标点符号字符\n", var3 );
   }
   if( ispunct(var4) )
   {
       printf("var4 = |%c| 是标点符号字符\n", var4 );
   }
   else
   {
       printf("var4 = |%c| 不是标点符号字符\n", var4 );
   }
   
   return(0);
}    
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |t| 不是标点符号字符
var2 = |1| 不是标点符号字符
var3 = |/| 是标点符号字符
var4 = | | 不是标点符号字符
```
</details>

##### 說明:
檢查字符var1-4，如果var1-4是標點符號，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-ispunct.html
***
#### int isspace(int c)
##### 判斷字符 c 是否是空白字符。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = ' ';

   if( isspace(var1) )
   {
       printf("var1 = |%c| 是空白字符\n", var1 );
   }
   else
   {
       printf("var1 = |%c| 不是空白字符\n", var1 );
   }
   if( isspace(var2) )
   {
       printf("var2 = |%c| 是空白字符\n", var2 );
   }
   else
   {
       printf("var2 = |%c| 不是空白字符\n", var2 );
   }
   if( isspace(var3) )
   {
       printf("var3 = |%c| 是空白字符\n", var3 );
   }
   else
   {
       printf("var3 = |%c| 不是空白字符\n", var3 );
   }
   
   return(0);
}   
```
</details>

<details>
<summary>結果</summary>

```C
var1 = |t| 不是空白字符
var2 = |1| 不是空白字符
var3 = | | 是空白字符
```
</details>

<details>
<summary>標準的空白字符包括</summary>
' '     (0x20)    space (SPC) 空格符
'\t'    (0x09)    horizontal tab (TAB) 水平制表符    
'\n'    (0x0a)    newline (LF) 换行符
'\v'    (0x0b)    vertical tab (VT) 垂直制表符
'\f'    (0x0c)    feed (FF) 换页符
'\r'    (0x0d)    carriage return (CR) 回车符
</details>

##### 說明:
檢查字符var1-3，如果var1-3是空白字符，該函數返回非零值，若不是則返回0。
##### 出處:
https://www.runoob.com/cprogramming/c-function-isspace.html
***
#### int isxdigit(int c)
##### 判斷字符 c 是否是十六進制數字。
<details>
<summary>範例1</summary>
   
```C
#include <ctype.h>
#include <stdio.h>
 
int main() {
   char c = '5';
   int result;
 
   // 传入字符
   result = isxdigit(c); // result 返回非 0
   printf("%c 传入到 isxdigit() 函数结果为: %d", c, isxdigit(c));
   printf("\n");  // 换行
   c = 'M';
 
   // 非十六进制数作为参数
   result = isxdigit(c); // result 为 0
 
   printf("%c 传入到 isxdigit() 函数结果为: %d", c, isxdigit(c));
 
   return 0;
}    
```
</details>

<details>
<summary>結果1</summary>

```C
5 传入到 isxdigit() 函数结果为: 1
M 传入到 isxdigit() 函数结果为: 0

```
</details>

##### 說明:
檢查字符c，如果c是十六進制數字，該函數返回非零值，若不是則返回0。

<details>
<summary>範例2</summary>
   
```C
#include<ctype.h>
#include<stdio.h>
int main()
{
    char str[]="123c@#run[oobe?";
    int i;
    for(i=0;str[i]!='\0';i++) {
        if(isxdigit(str[i])) {
            printf("%c 是一个十六进制数\n",str[i]);
        }
    }
    
}    
```
</details>

<details>
<summary>結果2</summary>

```C
1 是一个十六进制数
2 是一个十六进制数
3 是一个十六进制数
c 是一个十六进制数
b 是一个十六进制数
e 是一个十六进制数
```
</details>

##### 說明:
檢查字符組str，如果str是十六進制數字，用 printf 將其輸出。

##### 出處:
https://www.runoob.com/cprogramming/c-function-isxdigit.html
***
