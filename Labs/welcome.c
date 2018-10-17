#include <stdio.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    This program is a demo program to understand the basics of how to
//    create a c file, edit it, save it, compile is and execute it.
//
//    Function main begins program execution

int main(void)
{
  int ID;
  float shipweight;

  ID = 4518;              // Initalize ID
  shipweight = 24.625f;   // Initialize Shipping weight

  // display contents of variables
  printf("The ID of the item is %d\n", ID);
  printf("The shipping weight of the item is %0.3f\n", shipweight);

  // We have to return
  return 0;
} // end function main
