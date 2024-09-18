#include <stdio.h>

int main()
{
    int phy;
    int math;
    int chem;
    int total;
    printf("Enter Physics Marks: \n");
    scanf("%d", &phy);
    printf("Enter Mathematics Marks: \n");
    scanf("%d", &math);
    printf("Enter Chemistry Marks: \n");
    scanf("%d", &chem);
    printf("Enter total marks: \n");
    scanf("%d", &total);

    if (phy > 33 && chem > 33 && math > 33 && total > 40)
    {

        printf("The student pass \n");
    }
    else
    {
        printf("The student fail");
    }
    return 0;
}