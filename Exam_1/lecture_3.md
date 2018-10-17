# Lecture 3
### Formatted Input/Output

```c
printf("format string\n", expression, ...);
```
Example:
```c
int i, j;
float x, y;

i = 10; j = 20;
x = 43.2892f; y = 5527.0f;

printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); // prints 6 decimal points
// "i = 10, j = 20, x = 43.289200f, y = 5527.000000f"
```

* Providing a undefined value to printf, the compiler replaces is with 0

* *Compilers do not check that the number of conversions spec matches the number of number of output items*

* Different format types
1. `%e` exponential form
2. `%f` fixed decimal format
3. `%g` either exponential format or fixed decimal, depending on size

* `scanf()`
```c
int i, j;
float x, y;

scanf("%d%d%f%f", &i, &j, &x, &y);
```
