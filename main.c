#include <stdio.h>

#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main(void) {
   printf("Here is the message: %s\n", MESSAGE);

#if (!defined(HAVE_GETHOSTBYNAME_R) || !defined(HAVE_GETHOSTBYADDR_R) || \
           !defined(HAVE_GETPWUID_R)      || !defined(HAVE_GETGRGID_R)) && \
          (!defined(HAVE_MTSAFE_GETHOSTBYNAME) || !defined(HAVE_MTSAFE_GETHOSTBYADDR))
          blabla
          blabla
#endif /* (!defined(HAVE_GETHOSTBYNAME_R) || !defined(HAVE_GETHOSTBYADDR_R) || \
           !defined(HAVE_GETPWUID_R)      || !defined(HAVE_GETGRGID_R)) && \
          (!defined(HAVE_MTSAFE_GETHOSTBYNAME) || !defined(HAVE_MTSAFE_GETHOSTBYADDR)) */

#if (!defined(HAVE_GETHOSTBYNAME_R) || !defined(HAVE_GETHOSTBYADDR_R)) && \
    (!defined(HAVE_MTSAFE_GETHOSTBYNAME) || !defined(HAVE_MTSAFE_GETHOSTBYADDR))
hello
#endif
}
