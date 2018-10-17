Ynigo Reyes 8-31-18

# Lecture 1 - Basic Concepts of C

```c
#include <stdio.h> // Directives
#define PI 3.1416  // Runs at compile time. Kind of like a replace operation

// Uses main to start
int main(void) // void means nothing is passed. Same as main()
{
  // These are called statements. Each line is one statement.
  printf("To C, or not to C.\n");
  return 0; // Actually doesn't matter what number you return
}
```

**Statement**: A command to be executed when the program runs.

**Directives**: Always begin with a `#` Executed before program runs; runs at **compilation** time.
These commands are intended for the preprocessor

## The Compilation Process
* **Preprocessing**
* **Compiling**
* **Linking** - *link function calls that are not defined to their sources*
