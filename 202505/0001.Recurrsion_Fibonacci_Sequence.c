#include <stdio.h>

main() {
  int a;
  int b;
  int c;
  int i; 

  a = 1;
  b = 1;

  for (i = 0; i < 10; i++) {
    c = a + b;
    printf("%d\n", c); 
    a = b + c;
    printf("%d\n", a);
    b = c + a;
    printf("%d\n", b);
  }

  return 0; 
}







#include <stdio.h>

int main() {
    int a = 1, b = 1, c;
    int n, i;

    printf("Enter how many numbers to print: ");
    scanf("%d", &n);

    // Print the first two numbers
    if (n >= 1) printf("%d\n", a);
    if (n >= 2) printf("%d\n", b);

    // Print the rest
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
