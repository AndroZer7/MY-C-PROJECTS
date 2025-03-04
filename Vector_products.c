// This program outputs the dot and cross product of two vectors.
#include <stdio.h>
#include <math.h>

// vector struct
struct Vector
{
    int i;
    int j;
    int k;
};

// Function to calculate the dot product of two vectors.
int dotProduct(struct Vector vector1, struct Vector vector2);

// Function to calculate the cross product of two vectors.
struct Vector crossProduct(struct Vector vector1, struct Vector vector2);

int main()
{
    printf("This program calculates the dot and cross product of two vectors.\n");
    struct Vector a, b;

    printf("This program calculates the dot and cross product of two vectors.\n");
    printf("Enter the components of the first vector:\n");
    printf("Enter the value of i j k: ");
    scanf("%d %d %d", &a.i, &a.j, &a.k);

    printf("Enter the components of the second vector:\n");
    printf("Enter the value of i j k: ");
    scanf("%d %d %d", &b.i, &b.j, &b.k);

    // Calculate dot product
    int dot = dotProduct(a, b);

    // Calculate cross product
    struct Vector cross = crossProduct(a, b);

    // Display results
    printf("\nDot product: %d\n", dot);
    printf("Cross product: %di + %dj + %dk\n", cross.i, cross.j, cross.k);

    return 0;
}
// Function to calculate the dot product of two vectors.
int dotProduct(struct Vector vector1, struct Vector vector2)
{
    return vector1.i * vector2.i + vector1.j * vector2.j + vector1.k * vector2.k;
}

// Function to calculate the cross product of two vectors.
struct Vector crossProduct(struct Vector vector1, struct Vector vector2)
{
    struct Vector result;
    result.i = vector1.j * vector2.k - vector1.k * vector2.j;
    result.j = vector1.k * vector2.i - vector1.i * vector2.k;
    result.k = vector1.i * vector2.j - vector1.j * vector2.i;
    return result;
}
