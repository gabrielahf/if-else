#include "stdio.h"
#include "math.h"
int main() {

    float la, lb, lc;
    float sp; 
    float area;

    printf("lado a:  ");
    scanf("%f", &la); 
    printf("lado b:  ");
    scanf("%f", &lb);
    printf("lado c:  ");
    scanf("%f", &lc);

   if (lc >= (la + lb) || la >= (lb + lc) || lb >= (la + lc))
   {
     printf("valor invalido\n");
   } else {
            sp = (la + lb + lc) / 2;
            area = sqrt (sp * (sp - la) * (sp - lb) * (sp - lc));
                          printf("area:  ");
                          scanf("%f", &area);
    } 
    

}
