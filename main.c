#include <stdio.h>

#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main(void) {
   printf("Here is the message: %s\n", MESSAGE);

   #if 0
    fprintf (stderr, "computed %d,%d,%d (%d) provided %d,%d,%d (%d)\n",
	     m, n, r, S3_CLOCK(m,n,r),
	     t->dac_m, t->dac_n, t->dac_r,
	     S3_CLOCK(t->dac_m, t->dac_n, t->dac_r));
#endif
hello
}
