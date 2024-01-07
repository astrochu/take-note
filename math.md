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
##### 傳回以弧度表示的 sin(x)，x 為浮點值。
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
##### 傳回以弧度表示的 cos(x)，x 為浮點值。
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
##### 傳回 x 的雙曲餘弦，x 為浮點值。
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
##### 傳回 x 的雙曲正弦，x 為浮點值。
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
### double tanh(double x)
##### 傳回 x 的雙曲正切，x 為浮點值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 0.5;

   ret = tanh(x);
   printf("%lf 的双曲正切是 %lf 度", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.500000 的双曲正切是 0.462117 度
```
</details>

##### 說明:
計算 x 的雙曲正切。
##### 出處:
https://www.runoob.com/cprogramming/c-function-tanh.html
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
   double x = 0;
  
   printf("e 的 %lf 次幂是 %lf\n", x, exp(x));
   printf("e 的 %lf 次幂是 %lf\n", x+1, exp(x+1));
   printf("e 的 %lf 次幂是 %lf\n", x+2, exp(x+2));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
e 的 0.000000 次幂是 1.000000
e 的 1.000000 次幂是 2.718282
e 的 2.000000 次幂是 7.389056
```
</details>

##### 說明:
計算 e 的 1、2、3 次冪值。
##### 出處:
https://www.runoob.com/cprogramming/c-function-exp.html
***
### double frexp(double x, int *exponent)
##### 把浮點數 x 分解成尾數和指數。傳回值為尾數，把指數存入指數中。exponent 為指向一個物件的指針，該物件儲存了指數的值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x = 1024, fraction;
   int e;
   
   fraction = frexp(x, &e);
   printf("x = %.2lf = %.2lf * 2^%d\n", x, fraction, e);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
x = 1024.00 = 0.50 * 2^11
```
</details>

##### 說明:
將浮點數 x 分解為顯示部分和指數部分。所得的值為 x = 尾數 * 2 ^ 指數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-frexp.html
***
### double ldexp(double x, int exponent)
##### x 為有效位數的浮點數值，exponent 為指數的值。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   int n;

   x = 0.65;
   n = 3;
   ret = ldexp(x ,n);
   printf("%f * 2^%d = %f\n", x, n, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
0.650000 * 2^3 = 5.200000
```
</details>

##### 說明:
傳回 x 乘以 2 的指數 exponent 次冪。
##### 出處:
https://www.runoob.com/cprogramming/c-function-ldexp.html
***
### double log(double x)
##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 2.7;

   /* 计算 log(2.7) */
   ret = log(x);
   printf("log(%lf) = %lf", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
log(2.700000) = 0.993252
```
</details>

##### 說明:
計算 x （基數為 e 的對數）的自然對數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-log.html
***
### double log10(double x)
##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 10000;
  
   /* 计算 log10(10000) */
   ret = log10(x);
   printf("log10(%lf) = %lf\n", x, ret);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
log10(10000.000000) = 4.000000
```
</details>

##### 說明:
計算 x 的常用對數（基數為 10 的對數）。
##### 出處:
https://www.runoob.com/cprogramming/c-function-log10.html
***
### double modf(double x, double *integer)
##### x 為浮點數。integer 為指向一個物件的指針，該物件儲存了整數部分。
<details>
<summary>範例</summary>
   
```C
#include<stdio.h>
#include<math.h>

int main ()
{
   double x, fractpart, intpart;

   x = 8.123456;
   fractpart = modf(x, &intpart);

   printf("整数部分 = %lf\n", intpart);
   printf("小数部分 = %lf \n", fractpart);
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
整数部分 = 8.000000
小数部分 = 0.123456 
```
</details>

##### 說明:
印出 x 的小數部分（小數點後的部分）與整數部分。
##### 出處:
https://www.runoob.com/cprogramming/c-function-modf.html
***
### double pow(double x, double y)
##### x 、y 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   printf("值 8.0 ^ 3 = %lf\n", pow(8.0, 3));

   printf("值 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
值 8.0 ^ 3 = 512.000000
值 3.05 ^ 1.98 = 9.097324
```
</details>

##### 說明:
印出 8 的 3 次冪與 3.05 的 1.98 次冪。
##### 出處:
https://www.runoob.com/cprogramming/c-function-pow.html
***
### double sqrt(double x)
##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{

   printf("%lf 的平方根是 %lf\n", 4.0, sqrt(4.0) );
   printf("%lf 的平方根是 %lf\n", 5.0, sqrt(5.0) );
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
4.000000 的平方根是 2.000000
5.000000 的平方根是 2.236068
```
</details>

##### 說明:
印出 4、5 的平方根。
##### 出處:
https://www.runoob.com/cprogramming/c-function-sqrt.html
***
### double ceil(double x)
##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf ("value1 = %.1lf\n", ceil(val1));
   printf ("value2 = %.1lf\n", ceil(val2));
   printf ("value3 = %.1lf\n", ceil(val3));
   printf ("value4 = %.1lf\n", ceil(val4));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
value1 = 2.0
value2 = 2.0
value3 = 3.0
value4 = 3.0
```
</details>

##### 說明:
印出大於或等於 1.6、1.2、2.8、2.3 的最小整數值。
##### 出處:
https://www.runoob.com/cprogramming/c-function-celi.html
***
### double fabs(double x);
### float fabsf(float x);
### long double fabsl(long double x);

##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   int a, b;
   a = 1234;
   b = -344;
 
   printf("%d 的绝对值是 %lf\n", a, fabs(a));
   printf("%d 的绝对值是 %lf\n", b, fabs(b));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
1234 的绝对值是 1234.000000
-344 的绝对值是 344.000000
```
</details>

##### 說明:
印出 1234、-344 的絕對值。
##### 出處:
https://www.runoob.com/cprogramming/c-function-fabs.html
***
### double floor(double x)
##### x 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf("Value1 = %.1lf\n", floor(val1));
   printf("Value2 = %.1lf\n", floor(val2));
   printf("Value3 = %.1lf\n", floor(val3));
   printf("Value4 = %.1lf\n", floor(val4));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
Value1 = 1.0
Value2 = 1.0
Value3 = 2.0
Value4 = 2.0
```
</details>

##### 說明:
印出小於或等於 1.6、1.2、2.8、2.3 的最大的整數值。
##### 出處:
https://www.runoob.com/cprogramming/c-function-floor.html
***
### double fmod(double x, double y)
##### x、y 為浮點數。
<details>
<summary>範例</summary>
   
```C
#include <stdio.h>
#include <math.h>

int main ()
{
   float a, b;
   int c;
   a = 9.2;
   b = 3.7;
   c = 2;
   printf("%f / %d 的余数是 %lf\n", a, c, fmod(a,c));
   printf("%f / %f 的余数是 %lf\n", a, b, fmod(a,b));
   
   return(0);
}
```
</details>

<details>
<summary>結果</summary>

```C
9.200000 / 2 的余数是 1.200000
9.200000 / 3.700000 的余数是 1.800000
```
</details>

##### 說明: 
印出 9.2 / 2、9.2/3.7 的餘數。
##### 出處:
https://www.runoob.com/cprogramming/c-function-fmod.html
***
