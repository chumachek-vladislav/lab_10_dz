#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "");
    int figure;
    int name;

    printf("Выберите фигуру:\n");
    printf("1 - Круг\n");
    printf("2 - Прямоугольник\n");
    printf("3 - Треугольник\n");
    printf("Ваш выбор: ");
    scanf("%d", &figure);

    printf("\nВыберите действие:\n");
    printf("1 - Рассчитать площадь\n");
    printf("2 - Определение фигуры\n");
    printf("3 - Нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf("%d", &name);

    if (figure == 1) {
        float r;
        if (name == 1) {
            printf("Введите радиус: ");
            scanf("%f", &r);
            float area = 3.14159 * r * r;
            printf("Площадь круга = %.2f\n", area);
        }
        else if (name == 2) {
            printf("Круг — это фигура, у которой все точки равноудалены от центра.\n");
        }
        else if (name == 3) {
            printf("Введите радиус (целое число): ");
            scanf("%f", &r);
            for (int y = -r; y <= r; y++) {
                for (int x = -r; x <= r; x++) {
                    if (x * x + y * y <= r * r)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        else {
            printf("Неверный выбор действия, попробуйте другое\n");
        }
    }

    else if (figure == 2) {
        float a, b;
        if (name == 1) {
            printf("Введите стороны прямоугольника (a b): ");
            scanf("%f %f", &a, &b);
            float area = a * b;
            printf("Площадь прямоугольника = %.2f\n", area);
        }
        else if (name == 2) {
            printf("Прямоугольник — это четырёхугольник с прямыми углами.\n");
        }
        else if (name == 3) {
            printf("Введите стороны прямоугольника (a b): ");
            scanf("%f %f", &a, &b);
            for (int i = 0; i < (int)a; i++) {
                for (int j = 0; j < (int)b; j++) {
                    printf("* ");
                }
                printf("\n");
            }
        }
        else {
            printf("Неверный выбор действия, попробуйте другое\n");
        }
    }

    else if (figure == 3) {
        float a, b, c;
        if (name == 1) {
            printf("Введите стороны треугольника (a b c): ");
            scanf("%f %f %f", &a, &b, &c);
            float p = (a + b + c) / 2;
            float under = p * (p - a) * (p - b) * (p - c);
            if (under <= 0) {
                printf("Такой треугольник не существует.\n");
            }
            else {
                float area = sqrt(under);
                printf("Площадь треугольника = %.2f\n", area);
            }
        }
        else if (name == 2) {
            printf("Треугольник — это фигура с тремя сторонами.\n");
        }
        else if (name == 3) {
            int n;
            printf("Введите размер (высоту треугольника): ");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
        }
        else {
            printf("Неверный выбор действия, попробуйте другое\n");
        }
    }

    else {
        printf("Неверный выбор фигуры.\n");
    }

    system("pause");
    return 0;
}