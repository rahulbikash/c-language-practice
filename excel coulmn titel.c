#include <stdio.h>
static char *convert_To_Excel_Title(int column_no)
{
    if (column_no <= 0) {
        return "";
    }

    char *result = malloc(1024);
    int len = 0;
    do {
        result[len++] = ((column_no - 1) % 26) + 'A';
        column_no = (column_no - 1) / 26;
    } while (column_no > 0);
    result[len] = '\0';

    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char c = result[i];
        result[i] = result[j];
        result[j] = c;
    }
    return result;
}

int main(void)
{
    int n = 3;
    printf("\nColumn Number n = %d", n);
    printf("\nExcel column title: %s ",convert_To_Excel_Title(n));
    n = 27;
    printf("\n\nColumn Number n = %d", n);
    printf("\nExcel column title: %s ",convert_To_Excel_Title(n));
    n = 151;
	printf("\n\nColumn Number n = %d", n);
    printf("\nExcel column title: %s ",convert_To_Excel_Title(n));
    return 0;
}