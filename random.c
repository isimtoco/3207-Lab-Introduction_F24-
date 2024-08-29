#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    srand(time(NULL));

    char random_char = 'A' + (rand() % 26);

    return random_char;
}

int main(){
    char c = randchar();
    return 0;
}