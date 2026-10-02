#include <stdio.h>
#include <stdlib.h>

extern int sum_array(int *array, long count);

int main(int argc, char *argv[])
{
    FILE *fp;
    int *array;
    int count;
    int sum;

    if (argc != 2)
    {
        printf("Usage: %s <data file>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fscanf(fp, "%d", &count);

    array = malloc(count * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation error.\n");
        fclose(fp);
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        fscanf(fp, "%d", &array[i]);
    }

    fclose(fp);

    sum = sum_array(array, count);

    printf("Sum: %d\n", sum);

    free(array);

    return 0;
}