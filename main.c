


#ifndef _DB_STL_RESOURCE_MANAGER_H__
#include <stdio.h>
// Some changes at the start
#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#else
   // do nothing
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
#if defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif
#endif

// some changes at the end