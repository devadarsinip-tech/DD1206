#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    char email[100];
    char phone[20];
    char address[200];
    char education[200];
    char skills[200];
    char experience[200];

    printf("----- Resume Builder -----\n");

    // Take user inputs
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter your phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter your education details: ");
    fgets(education, sizeof(education), stdin);

    printf("Enter your skills: ");
    fgets(skills, sizeof(skills), stdin);

    printf("Enter your experience: ");
    fgets(experience, sizeof(experience), stdin);

    // Save to file
    FILE *file = fopen("resume.txt", "w");
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "----- Resume -----\n\n");
    fprintf(file, "Name: %s", name);
    fprintf(file, "Email: %s", email);
    fprintf(file, "Phone: %s", phone);
    fprintf(file, "Address: %s", address);
    fprintf(file, "Education: %s", education);
    fprintf(file, "Skills: %s", skills);
    fprintf(file, "Experience: %s", experience);

    fclose(file);

    printf("\nResume created successfully in resume.txt!\n");

    return 0;
}
