/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: cat2 q3 code
*/

#include <stdio.h>

#include <stdlib.h>

void write_input_file();

void process_and_write_output();

void display_files();

int main() {

    write_input_file();

    process_and_write_output();

    display_files();

    return 0;

}

void write_input_file() {

    FILE *fp;

    fp = fopen("input.txt", "w");

    if (fp == NULL) { perror("Error opening input.txt");

        exit(1);

    }

    printf("Please enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {

        int number;

        printf("Enter integer #%d: ", i + 1);

        scanf("%d", &number);

        fprintf(fp, "%d\n", number);

    }

    fclose(fp);

}

void process_and_write_output() {

    FILE *in_fp, *out_fp;

    in_fp = fopen("input.txt", "r");

    if (in_fp == NULL) {

        perror("Error opening input.txt");

        exit(1);

    }

    out_fp = fopen("output.txt", "w");

    if (out_fp == NULL) {

        perror("Error opening output.txt");

        fclose(in_fp);

        exit(1);

    }


    int sum = 0;

    int count = 0;

    int number;

    while (fscanf(in_fp, "%d", &number) == 1) {

        sum += number;

        count++;

    }



    if (count > 0) {

        double average = (double)sum / count;

        fprintf(out_fp, "Sum: %d\n", sum);

        fprintf(out_fp, "Average: %.2f\n", average);

    } else {

        fprintf(out_fp, "No numbers found in input.txt\n");

    }


    fclose(in_fp);

    fclose(out_fp);

}

void display_files() {

    FILE *in_fp, *out_fp;

    char ch;

    // Display contents of input.txt

    in_fp = fopen("input.txt", "r");

    if (in_fp == NULL) {

        perror("Error opening input.txt for display");

        return;

    }

    printf("\n--- Contents of input.txt ---\n");

    while ((ch = fgetc(in_fp)) != EOF) {

        printf("%c", ch);

    }

    fclose(in_fp);

    // Display contents of output.txt

    out_fp = fopen("output.txt", "r");

    if (out_fp == NULL) {

        perror("Error opening output.txt for display");

        return;

    }

    printf("\n--- Contents of output.txt ---\n");

    while ((ch = fgetc(out_fp)) != EOF) {

        printf("%c", ch);

    }

    fclose(out_fp);

}
