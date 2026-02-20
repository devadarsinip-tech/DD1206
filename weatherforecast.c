#include <stdio.h>
#include <stdlib.h>

#define DAYS 30

void inputData(float t[]);
float average(float t[]);
void maxMin(float t[]);
void heatwave(float t[]);
void graph(float t[]);
void save(float t[]);

int main() {
    float temp[DAYS];
    int choice, data = 0;

    while (1) {
        printf("\n1.Enter Data\n2.Analysis\n3.Graph\n4.Save\n5.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            inputData(temp);
            data = 1;
        }
        else if (choice >= 2 && choice <= 4 && !data) {
            printf("Enter data first!\n");
        }
        else {
            switch (choice) {
                case 2:
                    printf("Average: %.2f\n", average(temp));
                    maxMin(temp);
                    heatwave(temp);
                    break;

                case 3:
                    graph(temp);
                    break;

                case 4:
                    save(temp);
                    break;

                case 5:
                    return 0;

                default:
                    printf("Invalid choice!\n");
            }
        }
    }
}

void inputData(float t[]) {
    for (int i = 0; i < DAYS; i++)
        scanf("%f", &t[i]);
}

float average(float t[]) {
    float sum = 0;
    for (int i = 0; i < DAYS; i++)
        sum += t[i];
    return sum / DAYS;
}

void maxMin(float t[]) {
    float max = t[0], min = t[0];
    for (int i = 1; i < DAYS; i++) {
        if (t[i] > max) max = t[i];
        if (t[i] < min) min = t[i];
    }
    printf("Max: %.2f\nMin: %.2f\n", max, min);
}

void heatwave(float t[]) {
    for (int i = 0; i < DAYS; i++)
        if (t[i] > 40)
            printf("Heatwave Day %d\n", i + 1);
}

void graph(float t[]) {
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: ", i + 1);
        for (int j = 0; j < (int)t[i]; j++)
            printf("*");
        printf("\n");
    }
}

void save(float t[]) {
    FILE *f = fopen("climate.txt", "w");
    if (!f) return;
    for (int i = 0; i < DAYS; i++)
        fprintf(f, "Day %d: %.2f\n", i + 1, t[i]);
    fclose(f);
    printf("Saved!\n");
}
