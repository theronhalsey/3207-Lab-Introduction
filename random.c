
#include <stdlib.h>

// macros
#define CHARMIN 65
#define CHARMAX 90

char randchar()
{
    return rand() % (CHARMAX - CHARMIN + 1) + CHARMIN;
}
