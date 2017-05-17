#include <stdio.h>
main(void)
{
  int nletter, c, i;
  char histo = '#';
  while ((c = getchar()) !=  EOF) {
    if (c != ' ' && c != '\n') {
      putchar(histo);
    }
    else {
      putchar('\n');
    }
  }


}
