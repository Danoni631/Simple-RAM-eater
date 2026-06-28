#include "includer.h"

int main()
{
    printf("=== MEMORY EATER MODE ACTIVED ===\n");
    printf("Allocating memory in 3 seconds\n");
    sleep(3);

    Defs();
    RAM_Breaker();
  
    printf("Allocated with sucess: %zu MB\n", total_allocated / (1024 * 1024));

    /*
      U can add this part
             |
             |
            \_/

      usleep(50000);
    */

    printf("Press enter to close program\n");
    getchar();

    // Cleaning
    for (size_t i = 0; i < size; i++) {
        free(memory_chunks[i]);
    }
    free(memory_chunks);

    return 0;
}
