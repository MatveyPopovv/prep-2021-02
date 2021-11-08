#include <stdlib.h>
#include <stdio.h>


int main(int argc, const char **argv) {
    if (argc != 2) {
        return -1;
    }
    printf("Hello, world!");
    const char *path_to_eml = argv[1];
    puts(path_to_eml);

    char st1[100];
    FILE *fin;
    fin=fopen("btests/emails/8bitmime.eml", "r");
    if ( NULL != fgets ( st1, 100, fin ) ){
        // выводим строку на экран
        printf("%s ",st1);
        }  

    return 0;
}
