#include <stdio.h>
// NestedAndFalse
int main() {
  int x;
  x = 5;
  if((x<10&&x>0)&&((1/x)>0&&x!=10)) {
    printf("Incorrect x=5; (x <10 && x>0) && ( (1/x) >0 && x !=10): true\n");
  } else {
    printf("Correct\n");
  }
}
