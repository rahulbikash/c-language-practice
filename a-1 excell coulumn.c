#include <stdio.h>

 int excel_title_to_Number(char* s) {
    int k = 0;
    while (s && *s) {
        k = k * 26 + (*s) - 'A' + 1;
        s ++;
    }
    return k;
}

int main(void)
{
    char col_title1[ ] ="C";
    printf("\nExcel column title: = %s", col_title1);
    printf("\nCorresponding number: %d ",excel_title_to_Number(col_title1));
    char col_title2[ ] ="AC";
    printf("\n\nExcel column title: = %s", col_title2);
    printf("\nCorresponding number: %d ",excel_title_to_Number(col_title2));
    char col_title3[ ] ="ZY";
    printf("\n\nExcel column title: = %s", col_title3);
    printf("\nCorresponding number: %d ",excel_title_to_Number(col_title3));
    return 0;
}