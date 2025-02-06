#include <stdlib.h>
#include <stdio.h>

void convert(FILE *fp) {
    
}

int main (int argc, char **argv) {
    if (argc == 2) {
        FILE *fp = fopen(*(argv + 1), "rb");
        if (fp != NULL) convert(fp);
        else exit(EXIT_FAILURE);
    } else if (argc > 3) {
        fprintf(stderr, "Passing in more than one file is not handled\n");
        exit(EXIT_FAILURE);
    } else {
        convert(stdin); 
    }
}
