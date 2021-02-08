#include <stdio.h>
#include <stdlib.h>

int main(){
    float fah;
    float cent;
    fah = 37;

    //F=(9C+160)/5 --> (f*5-160)/9
    cent = (fah*5-160)/9;

    printf("A temperatura em graus centigrados e %.2f\n", cent);

return 0;
}
