
#include <stdio.h>


#define PI 3.14159265

int main() {
    int m1 = 3; //
    double lambda1 = 530e-9;
    double theta1_deg = 65.0;

    int m2 = 2;
    double lambda2 = 700e-9;


    double theta1_rad = theta1_deg * PI / 180.0;


    double d = (m1 * lambda1) / sin(theta1_rad);


    double sin_theta2 = (m2 * lambda2) / d;

    if (sin_theta2 > 1.0) {
        printf("No visible bright spot for red light in second order (sin > 1)\n");
    } else {
        double theta2_rad = asin(sin_theta2);
        double theta2_deg = theta2_rad * 180.0 / PI;

        printf("The angle for red light (2nd order) is: %.2f degrees\n", theta2_deg);
    }

    return 0;
}
