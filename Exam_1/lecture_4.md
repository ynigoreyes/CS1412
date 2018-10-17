# Lecture 4

* Conditional Operators (Ternary Operations)
```c
int i, j, k;

i = 1; j = 2;

k = i > j ? i : j; // condition ? if true : else

// or

if ( i > j ) {
  k = i;
} else {
  k = j;
}
```

* _Bool Type

```c
_Bool flag;

flag = 5;

printf("%d\n", flag); // Converts true values or any other number to 1. 0 stays 0
```

Instead of using _Bool you can use <stdbool.h>. With this you can do something like...
```c
bool truth = 1
```
