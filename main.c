#include <stdio.h>

double power(double a, double n)
{
    double i,
        result = 1;

    for (i = 0; i < n; i++)
    {
        result *= a;
    }
    return result;
}

double jatulat()
{
    printf("Area of jatulat\n");
    double a;
    printf("please input A value: ");
    scanf("%lf", &a);
    return power(a, 2);
}

double kharngmu()
{
    printf("Area of kharngmu\n");
    double b1, b2, h;
    printf("please input Base1 value: ");
    scanf("%lf", &b1);
    printf("please input Base2 value: ");
    scanf("%lf", &b2);
    printf("please input h value: ");
    scanf("%lf", &h);
    return ((b1 + b2) * h) / 2;
}

double cycle()
{
    printf("Area of cycle\n");
    double r;
    printf("please input R value: ");
    scanf("%lf", &r);
    float pi = 3.14;
    return 2 * pi * power(r, 2);
}

double trianlgel()
{
    printf("Area of triangle\n");
    double b, h;
    printf("please input Base1 value: ");
    scanf("%lf", &b);
    printf("please input Height value: ");
    scanf("%lf", &h);
    return (b * h) / 2;
}

double zijae()
{
    printf("Area of zijae\n");
    double a, b;
    printf("please input A value: ");
    scanf("%lf", &a);
    printf("please input B value: ");
    scanf("%lf", &b);
    return a * b;
}

void start()
{
    printf("please select function:\n");
    printf("1. find area of zijae\n");
    printf("2. find area of jatulat\n");
    printf("3. find area of kharngmu\n");
    printf("4. find area of triangle\n");
    printf("5. find area of cycle\n");
    printf("\ninput number of function: ");
}

void main()
{
    do
    {
        int func;
        double area;
        start();
        scanf("%d", &func);
        switch (func)
        {
        case 1:
            area = zijae();
            break;
        case 2:
            area = jatulat();
            break;
        case 3:
            area = kharngmu();
            break;
        case 4:
            area = trianlgel();
            break;
        case 5:
            area = cycle();
            break;
        default:
            printf("Invalid choice\n");
            continue;
        }
        printf("Area is %lf\n", area);

        int runAgain;
        printf("Do you want to calculate another area? (1 for Yes, 0 for No): ");
        scanf("%d", &runAgain);

        if (runAgain != 1)
            break;
    } while (1);
}
