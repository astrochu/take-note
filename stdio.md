# stdio.h
### int fclose(FILE *stream)
##### stream 為指向 FILE 的指針。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>

int main()
{
   FILE *fp;
 
   fp = fopen("file.txt", "w");

   fprintf(fp, "%s", "这里是 runoob.com");
   fclose(fp);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
这里是 runoob.com
```
</details>

##### 說明:
這將建立一個檔案file.txt，然後讀取下面的文字行，最後使用fclose()函數關閉檔案。
##### 出處:
https://www.runoob.com/cprogramming/c-function-fclose.html
***
### void clearerr(FILE *stream)
##### stream 為指向 FILE 的指針。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>

int main()
{
   FILE *fp;
   char c;

   fp = fopen("file.txt", "w");

   c = fgetc(fp);
   if( ferror(fp) )
   {
      printf("读取文件：file.txt 时发生错误\n");
   }
   clearerr(fp); //清除給定流的文件結束和錯誤標識符
   if( ferror(fp) )
   {
      printf("读取文件：file.txt 时发生错误\n");
   }
   fclose(fp);

   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
读取文件：file.txt 时发生错误
```
</details>

##### 說明:
file.txt，它是一個空文件，因為我們嘗試讀取一個以只寫模式開啟的文件，這將無法正常執行。
##### 出處:
https://www.runoob.com/cprogramming/c-function-clearerr.html
***
### int feof(FILE *stream)
##### stream 為指向 FILE 的指針。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>

int main ()
{
   FILE *fp;
   int c;
  
   fp = fopen("file.txt","r");
   if(fp == NULL) 
   {
      perror("打开文件时发生错误");
      return(-1);
   }
   while(1)
   {
      c = fgetc(fp);
      if( feof(fp) )
      { 
          break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
这里是 runoob.com
```
</details>

##### 說明:
打開文件，進入無窮迴圈，將文件的內容一個字符一個字符地輸出，使用 feof 檢查是否到達文件結尾，如果回傳值為非零值，跳出迴圈。
##### 出處:
https://www.runoob.com/cprogramming/c-function-feof.html
***
### int ferror(FILE *stream)
##### stream 為指向 FILE 的指針。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>

int main()
{
   FILE *fp;
   char c;

   fp = fopen("file.txt", "w");

   c = fgetc(fp);
   if( ferror(fp) )
   {
      printf("读取文件：file.txt 时发生错误\n");
   }
   clearerr(fp);
   if( ferror(fp) )
   {
      printf("读取文件：file.txt 时发生错误\n");
   }
   fclose(fp);

   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
读取文件：file.txt 时发生错误
```
</details>

##### 說明:
ferror 函數用於檢查文件指針 fp 所指向的文件是否發生了錯誤。如果發生錯誤，則輸出錯誤信息。
##### 出處:
https://www.runoob.com/cprogramming/c-function-ferror.html
***
### int fflush(FILE *stream)
##### stream 為指向 FILE 的指針。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <string.h>
 
int main()
{
 
   char buff[1024]; //創建一個長度為 1024 的字符數組 buff，用於作為輸出緩衝區
 
   memset( buff, '\0', sizeof( buff )); //使用 memset 函數將 buff 數組的所有元素初始化為空字符，確保緩衝區是空的。
 
   fprintf(stdout, "启用全缓冲\n"); 
   setvbuf(stdout, buff, _IOFBF, 1024); //使用 setvbuf 函數將標準輸出設置為使用 buff 數組作為輸出緩衝區，並啟用全緩衝模式，緩衝區大小為 1024 個字節。
 
   fprintf(stdout, "这里是 runoob.com\n");
   fprintf(stdout, "该输出将保存到 buff\n");
   fflush( stdout ); //使用 fflush 函數將緩衝區的內容強制刷新到標準輸出，這樣前面的兩行輸出才會顯示在終端上。

   // 這兩行輸出的內容會再次保存在緩衝區中，並在 sleep(5); 休眠五秒後顯示在終端上。
   fprintf(stdout, "这将在编程时出现\n");
   fprintf(stdout, "最后休眠五秒钟\n");
 
   sleep(5); 
 
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
启用全缓冲
这里是 runoob.com
该输出将保存到 buff
这将在编程时出现
最后休眠五秒钟
```
</details>

##### 說明:
設置標準輸出的全緩衝模式。
##### 出處:
https://www.runoob.com/cprogramming/c-function-fflush.html
***
