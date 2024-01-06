# math.h
### double acos(double x)
##### 計算cos(x)的反函數，x為介於 [-1,+1] 區間的浮點數值。
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
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度 (弧度區間為 [0, pi]) 轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-acos.html
***
### double asin(double x)
##### 計算sin(x)的反函數，x為介於 [-1,+1] 區間的浮點數值。
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

   ret = asin(x) * val;
   printf("%lf 的反正弦是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.900000 的反正弦是 64.190609 度
```
</details>

##### 說明:
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度 (弧度區間為  [-pi/2,+pi/2]) 轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-asin.html
***
### double atan2(double y, double x)
##### 計算tan(x)的反函數，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;
   x = 1.0;
   val = 180.0 / PI;

   ret = atan (x) * val;
   printf("%lf 的反正切是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
1.000000 的反正切是 45.000000 度
```
</details>

##### 說明:
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度 (弧度區間為 [-pi/2,+pi/2]) 轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-acos.html
***
### double atan2(double y, double x)
##### 傳回以弧度表示的 tan(y/x) 的反函數， y 和 x 的值的符號決定了正確的象限。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, y, ret, val;

   x = -7.0;
   y = 7.0;
   val = 180.0 / PI;

   ret = atan2 (y,x) * val;
   printf("x = %lf, y = %lf 的反正切", x, y);
   printf("是 %lf 度\n", ret);
  
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
x = -7.000000, y = 7.000000 的反正切是 135.000000 度
```
</details>

##### 說明:
定義PI，把 x、y 帶入 ret 運算，val 則是將單位從弧度 (弧度區間為 [-pi,+pi]) 轉換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-atan2.html
***
### double sin(double x)
##### 傳回以弧度表示的 sin(x)，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;

   x = 45.0;
   val = PI / 180;
   ret = sin(x*val);
   printf("%lf 的正弦是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
45.000000 的正弦是 0.707107 度
```
</details>

##### 說明:
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-sin.html
***
### double cos(double x)
##### 傳回以弧度表示的 cos(x)，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;

   x = 60.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("%lf 的余弦是 %lf 度\n", x, ret);
   
   x = 90.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("%lf 的余弦是 %lf 度\n", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
60.000000 的余弦是 0.500000 度
90.000000 的余弦是 0.000000 度
```
</details>

##### 說明:
定義PI，把 x 帶入 ret 運算，val 則是將單位從弧度換成度數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-cos.html
***
### double cosh(double x)
##### 傳回 x 的雙曲餘弦，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x;

   x = 0.5;
   printf("%lf 的双曲余弦是 %lf\n", x, cosh(x));

   x = 1.0;
   printf("%lf 的双曲余弦是 %lf\n", x, cosh(x));

   x = 1.5;
   printf("%lf 的双曲余弦是 %lf\n", x, cosh(x));

   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.500000 的双曲余弦是 1.127626
1.000000 的双曲余弦是 1.543081
1.500000 的双曲余弦是 2.352410
```
</details>

##### 說明:
計算 x 為不同值時的雙曲餘弦。
##### 出處:
https://www.runoob.com/cprogramming/c-function-cosh.html
***
### double sinh(double x)
##### 傳回 x 的雙曲正弦，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 0.5;

   ret = sinh(x);
   printf("%lf 的双曲正弦是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.500000 的双曲正弦是 0.521095 度
```
</details>

##### 說明:
計算 x 的雙曲正弦。
##### 出處:
https://www.runoob.com/cprogramming/c-function-sinh.html
***
### double exp(double x)
##### 傳回 e 的 x 次冪值，x為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 0.5;

   ret = sinh(x);
   printf("%lf 的双曲正弦是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.500000 的双曲正弦是 0.521095 度
```
</details>

##### 說明:
計算 x 的雙曲正弦。
##### 出處:
https://www.runoob.com/cprogramming/c-function-sinh.html
***
