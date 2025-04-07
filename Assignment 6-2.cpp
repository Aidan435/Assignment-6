#include <stdio.h>
#include <string.h>

int countAandE(char str[], char letter1, char letter2) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letter1 || str[i] == letter2) {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[100];
    int countA, countE;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character from fgets
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Count the number of As and Es
    countA = countAandE(sentence, 'A', 'a');
    countE = countAandE(sentence, 'E', 'e');

    // Display the counts
    printf("Number of As: %d\n", countA);
    printf("Number of Es: %d\n", countE);

    return 0;
}
