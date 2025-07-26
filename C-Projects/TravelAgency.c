#include <stdio.h>
#include <string.h>
struct Driver
{
    char Name[344];
    char DLNo[254]; // Driving License No.
    char Route[545];
    int Kms;
};

int main()
{
    struct Driver driver[100];
    int n;
    printf("Enter the no.of drivers whose details are to be filled up:\n");
    scanf("%d", &n);

    if (n == 0)
    {
        goto end;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the details of driver %d:\n", i);

        printf("Enter your Name:\n");
        scanf("%s", &driver[i].Name);

        printf("Enter your Driving license No. :\n");
        scanf("%s", &driver[i].DLNo);

        printf("Enter the route address you have came through:\n");
        scanf("%s", &driver[i].Route);

        printf("Enter the distance you travelled in Kms :\n");
        scanf("%d", &driver[i].Kms);
    }

    for (int j = 1; j <= n; j++)
    {
        printf("Details of Driver %d :\n", j);
        printf("\n");
        printf("\n");
        printf("Name of the driver is %s\n", driver[j].Name);
        printf("\n");
        printf("DLNo of the driver is %s\n", driver[j].DLNo);
        printf("\n");
        printf("Route of the driver came through is %s\n", driver[j].Route);
        printf("\n");
        printf("Distance travelled by the driver (in Kms) is %d\n", driver[j].Kms);
        printf("\n");

    }

end:
        printf("\n");
        printf("\t~~~Thank you~~~\t\n");
        printf("\n");

    return 0;
}
