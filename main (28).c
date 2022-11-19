#include <stdio.h>
/*
  An array cannot be passed by value to a function. However, an array name is a pointer, so just passing an array name to a function is passing a pointer to the array.
  */

int add_up (int *a, int num_elements){  
int total = 0;  
int k;  
 
for (k = 0; k < num_elements; k++) {  
total += a[k];  
}  
 
return (total);  
}  

int * get_evens() {  
  /*
Note that a pointer, not an array, is declared to store the value returned by the function. Also note that when a local variable is being passed out of a function, you need to declare it as static in the function. 
Keep in mind that a[k] is the same as *(a + k). 
*/
static int nums[5];  
int k;  
int even = 0;  
 
for (k = 0; k < 5; k++) {  
nums[k] = even += 2;  
}  
 
return (nums);  
}

int main(void) {
int orders[5] = {100, 220, 37, 16, 98};  
 
printf("Total orders is %d\n", add_up(orders, 5)); 

  
  //Functions that Return an Array --- Just as a pointer to an array can be passed into a function, a pointer to an array can be returned
  int *a;  
int k;  
 
a = get_evens(); /* get first 5 even numbers */  
for (k = 0; k < 5; k++)  
printf("%d\n", a[k]);  
 

  
  return 0;
}