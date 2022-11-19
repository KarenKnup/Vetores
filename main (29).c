#include <stdio.h>

void swap (int *num1, int *num2) {  
int temp;  
 
temp = *num1;  
*num1 = *num2;  
*num2 = temp;  
}


int main(void) {
int a5[5] = {22, 33, 44, 55, 66};  
int *ptr3 = NULL;  
int i;  
 
ptr3 = a5;  
for (i = 0; i < 5; i++) {  
printf("%d ", *(ptr3 + i));  
} 
  /*
The program output is: 22 33 44 55 66 
 
An important concept with arrays is that an array name acts as a pointer to the first element of the array. Therefore, the statement ptr = a can be thought of as ptr = &a[0]. 
Consider the following statement, which prints the first element of the array: printf("%d ", *a); 
    */

  int a2[5] = {22, 33, 44, 55, 66};
int *ptr2 = a2;
int res = *(ptr2 + 2);
printf("%d", res);

//-------------------------------------
   

int a[5] = {22, 33, 44, 55, 66};  
int *ptr = NULL;  
 
ptr = a; /* point to the first array element */  
printf("%d %x\n", *ptr, ptr); /* 22 */  
ptr++;  
printf("%d %x\n", *ptr, ptr); /* 33 */  
ptr += 3;  
printf("%d %x\n", *ptr, ptr); /* 66 */  
ptr--;  
printf("%d %x\n", *ptr, ptr); /* 55 */  
ptr -= 2;  
printf("%d %x\n", *ptr, ptr); /* 33 */  

  /*
22 febd4760
33 febd4764
66 febd4770
55 febd476c
33 febd4764
    */

  int ar[]={1,2,3};
  int *p=ar;
    p++;
  printf("%d",*p);

  /*
Pointers greatly expand the possibilities for functions. No longer are we limited to returning one value. With pointer parameters, your functions can alter actual data rather than a copy of data. 
To change the actual values of variables, the calling statement passes addresses to pointer parameters in a function. 
For example, the following program swaps two values: 
    */
  int x = 25;  
int y = 100;  
 
printf("x is %d, y is %d\n", x, y);  
swap(&x, &y);  
printf("x is %d, y is %d\n", x, y); 
  
  return 0;
}