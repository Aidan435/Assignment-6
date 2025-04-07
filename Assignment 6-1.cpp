#include <stdio.h>

char getGradeLetter(int grade) { //Sets ranges for each of the grades
    if (grade >= 90) return 'A';
    else if (grade >= 80) return 'B';
    else if (grade >= 70) return 'C';
    else if (grade >= 60) return 'D';
    else return 'F';
}

int main() {
    int grades[5];
    int i, min, max;

    // Input grades from user
    printf("Enter 5 grades (0 - 100):\n");
    for (i = 0; i < 5; i++) {
        do {
            printf("Grade %d: ", i + 1);
            scanf("%d", &grades[i]);
            if (grades[i] < 0 || grades[i] > 100)
                printf("Invalid input. Please enter a grade between 0 and 100.\n");
        } while (grades[i] < 0 || grades[i] > 100);
    }

    // Initialize min and max
    min = max = grades[0];

    // Find minimum and maximum grades
    for (i = 1; i < 5; i++) {
        if (grades[i] < min) min = grades[i];
        if (grades[i] > max) max = grades[i];
    }

    // Display minimum and maximum grades with corresponding letters
    printf("\nMinimum grade: %d (%c)\n", min, getGradeLetter(min));
    printf("Maximum grade: %d (%c)\n", max, getGradeLetter(max));

    return 0;
}
