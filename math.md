# math.h
### double acos(double x)
##### 計算cosx的反函數，x為介於 [-1,+1] 區間的浮點數值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;

   x = 0.9;
   val = 180.0 / PI;

   ret = acos(x) * val;
   printf("%lf 的反余弦是 %lf 度", x, ret);
   
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
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-acos.html
***
