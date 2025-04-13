
#include <stdio.h>

#define PI 3.14159265


const char* getColor(double wavelength) {
    if (wavelength >= 380 && wavelength < 450)
        return "Violet";
    else if (wavelength >= 450 && wavelength < 485)
        return "Blue";
    else if (wavelength >= 485 && wavelength < 500)
        return "Cyan";
    else if (wavelength >= 500 && wavelength <= 565)
        return "Green";
    else if (wavelength > 565 && wavelength <= 590)
        return "Yellow";
    else if (wavelength > 590 && wavelength <= 625)
        return "Orange";
    else if (wavelength > 625 && wavelength <= 750)
        return "Red";
    else
        return "Out of visible range";
}

int main() {
    int m;
    double theta_deg, d_um;

    printf("Enter order of diffraction (m): ");
    scanf("%d", &m);

    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta_deg);

    printf("Enter slit distance d (in micrometers): ");
    scanf("%lf", &d_um);

    double d_m = d_um * 1e-6;

    double theta_rad = theta_deg * PI / 180.0;

    double wavelength_m = (d_m * sin(theta_rad)) / m;

    double wavelength_nm = wavelength_m * 1e9;
    wavelength_nm = round(wavelength_nm);


    printf("\n--- Result ---\n");
    printf("Calculated Wavelength: %.0f nm\n", wavelength_nm);
    printf("Color of the light   : %s\n", getColor(wavelength_nm));

    return 0;
}
