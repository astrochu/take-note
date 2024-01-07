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
