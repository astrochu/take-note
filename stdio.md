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
0.900000 的反余弦是 25.855040 度
```
</details>

##### 說明:
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度 (弧度區間為 [0, pi]) 轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-acos.html
***
