//
// Created by mytal on 11/3/2021.
//
#include <stdio.h>
#include <math.h>

float grade;
float maxpoints;
float achpoints;
int eingabe1;
int eingabe2;

void basic() {

    printf("Choose max. amount of points: \n");
    scanf("%f", &maxpoints);

    printf("Choose achieved amount of points: \n");
    scanf("%f", &achpoints);

    grade = achpoints / maxpoints * 5 + 1;
    printf("%.1f\n\n", grade);

}

void zehntelUmrechner() {
    printf("Ihre Note ist:\t%.1f\n\n", grade);
}

void viertelUmrechner() {
    grade /= 0.25;
    grade = round(grade);
    grade *= 0.25;

    printf("Ihre Note ist:");
    printf("\t%.2f\n\n", grade);
}

void notenrechner() {

    basic();
    printf("Runden auf 10tel Note? \n");
    printf("(1)-----Ja\n");
    scanf("%d", &eingabe1);
    if (eingabe1 == 1) {
        zehntelUmrechner();
    }
    printf("Runden auf Viertel Note? \n");
    printf("(1)-----Ja\n");
    scanf("%d", &eingabe2);
    if (eingabe2 == 1) {
        viertelUmrechner();
    }

}
