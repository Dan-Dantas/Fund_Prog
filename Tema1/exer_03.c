#include <stdio.h>
#include <stdlib.h>

int main (){

    float km;
    float m;
    float cm;

    km=5;
    m=km*1000;
    cm=m*100;

    printf ("Os valores sao %.1f km, %1.f m e %1.f cm\n", km, m, cm);

return 0;
}
