#include <stdio.h>

int main() {
    int n, i;
    int id[100];
    char name[100][50];
    float attendance[100];
    float grade[100];
    int behavior[100];
    int at_risk[100];
    int financial[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        id[i] = i + 1;

        printf("\nEnter data for Student %d\n", id[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Attendance (%%): ");
        scanf("%f", &attendance[i]);

        printf("Grade: ");
        scanf("%f", &grade[i]);

        printf("Behavior Score (1-10): ");
        scanf("%d", &behavior[i]);

        printf("Financial Need (1=Yes, 0=No): ");
        scanf("%d", &financial[i]);

        if (attendance[i] < 60.0 || grade[i] < 50.0 || behavior[i] < 5) {
            at_risk[i] = 1;
        } else {
            at_risk[i] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        printf("\n--- Student Report ---\n");
        
        
        
        
        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Attendance: %.2f%%\n", attendance[i]);
        printf("Grade: %.2f\n", grade[i]);
        printf("Behavior Score: %d/10\n", behavior[i]);
        printf("Risk Status: %s\n", at_risk[i] ? "AT RISK" : "SAFE");
        printf("Financial Need: %s\n", financial[i] ? "Yes" : "No");

        if (at_risk[i]) {
            printf("[Parent Alert] %s is at risk. Please attend the support meeting.\n", name[i]);
        }

        if (at_risk[i] && financial[i]) {
            printf("[Financial Aid] %s may qualify for scholarship assistance.\n", name[i]);
        }
    }

    return 0;
}
