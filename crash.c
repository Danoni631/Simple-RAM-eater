#include "includer.h"

void Defs()
{
  size_t capacity = 16;
    size_t size = 0;
    char **memory_chunks = malloc(capacity * sizeof(char*));
    if (!memory_chunks) {
        fprintf(stderr, "Fail to allocate memory :(\n");
        return 1;
    }
}
