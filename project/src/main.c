#include <stdlib.h>
#include <stdio.h>


int main(int argc, const char **argv) {
    if (argc != 2) {
        return -1;
    }

    const char *path_to_eml = argv[1];
    puts(path_to_eml);
    char st1[100];
    char from[100];
    char to[100] ;
    char date[100] ;
    char contenttipe[100];
    FILE *fin;
    fin=fopen("8bitmime.eml", "r");
    for (size_t i = 0; i < 11; i++){

        if (i==1){
            if ( NULL != fgets ( from, 100, fin ) ){ 
            }  
        }
        else if (i==2){
            if ( NULL != fgets ( to, 100, fin ) ){
            }  
        }
        else if (i==4){
            if ( NULL != fgets ( date, 100, fin ) ){
            }  
        }
        else if (i==3){
            if ( NULL != fgets ( contenttipe, 100, fin ) ){
            }  
        }
        else{
            if ( NULL != fgets ( st1, 100, fin ) ){
            }  
        }

    }
    printf("%s|%s|%s|%s", from, to, date, contenttipe);





    fclose(fin);
    return 0;
}
