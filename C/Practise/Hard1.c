#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_POINTS 100

struct Point {
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    double a, b, c;
    printf("Enter value of 'a', 'b', and 'c' separated by space: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int n;
    printf("Enter the number of points: ");
    scanf("%d", &n);

    struct Point points[MAX_POINTS];
    int c1_count = 0, c2_count = 0, c3_count = 0;
    struct Point c1_points[MAX_POINTS], c2_points[MAX_POINTS], c3_points[MAX_POINTS];
    for (int i = 0; i < n; i++) {
        double x, y;
        printf("Enter x and y coordinates of point %d: ", i+1);
        scanf("%lf %lf", &x, &y);

        double value = a*x + b*y + c;

        if (fabs(value) < 1e-6) {
            c1_points[c1_count].x = x;
            c1_points[c1_count].y = y;
            c1_count++;
        }
        else if (value > 0) {
            c2_points[c2_count].x = x;
            c2_points[c2_count].y = y;
            c2_count++;
        }
        else {
            c3_points[c3_count].x = x;
            c3_points[c3_count].y = y;
            c3_count++;
        }
    }

    // Sorting outliers of side 1
    printf("Outliers of side 1: ");
    if (c1_count == 0) {
        printf("None\n");
    } else {
        for (int i = 0; i < c1_count; i++) {
            printf("(%lf, %lf) ", c1_points[i].x, c1_points[i].y);
        }
        printf("\n");
    }

    // Sorting outliers of side 2
    printf("Outliers of side 2: ");
    if (c2_count == 0 && c3_count == 0) {
        printf("None\n");
    } else {
        double c2_x_sum = 0, c2_y_sum = 0, c3_x_sum = 0, c3_y_sum = 0;
        for (int i = 0; i < c2_count; i++) {
            c2_x_sum += c2_points[i].x;
            c2_y_sum += c2_points[i].y;
        }
        double c2_x_centroid = c2_x_sum / c2_count;
        double c2_y_centroid = c2_y_sum / c2_count;
        for (int i = 0; i < c3_count; i++) {
            c3_x_sum += c3_points[i].x;
            c3_y_sum += c3_points[i].y;
        }
        double c3_x_centroid = c3_x_sum / c3_count;
        double c3_y_centroid = c3_y_sum / c3_count;
double c2_average_distance = 0;
if (c2_count > 0) {
    for (int i = 0; i < c2_count; i++) {
        double d = distance(c2_points[i], (struct Point){c2_x_centroid, c2_y_centroid});
        c2_average_distance += d;
    }
    c2_average_distance /= c2_count;
}


    // Output outliers of side1
    printf("Outliers of side1 in sorted order:\n");
    for (int i = 0; i < c1_count; i++) {
        double d = distance(c1_points[i], (struct Point){c2_x_centroid, c2_y_centroid});
        if (d > c2_average_distance) {
            printf("%.2f,%.2f\n", c1_points[i].x, c1_points[i].y);
        }
    }

    // Calculate average distance for side2
    double c3_average_distance = 0;
    if (c3_count > 0) {
        double c3_distance_sum = 0;
        for (int i = 0; i < c3_count; i++) {
            double d = distance(c3_points[i], (struct Point){c3_x_centroid, c3_y_centroid});
            c3_distance_sum += d;
        }
        c3_average_distance = c3_distance_sum / c3_count;
    }

    // Output outliers of side2
    printf("Outliers of side2 in sorted order:\n");
    for (int i = 0; i < c3_count; i++) {
        double d = distance(c3_points[i], (struct Point){c3_x_centroid, c3_y_centroid});
        if (d > c3_average_distance) {
            printf("%.2f,%.2f\n", c3_points[i].x, c3_points[i].y);
        }
    }

    return 0;
}
}
