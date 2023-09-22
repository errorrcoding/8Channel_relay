#include <stdio.h>

int main() {
    // Constants for conversion rates
    const double USD_TO_CAD = 1.35;
    const double GALLON_TO_LITER = 3.785;
    const double BARREL_TO_GALLON = 31.5;

    // User inputs
    int currencyChoice, unitChoice;
    double pricePerBarrelCAD;

    // Prompt the user for inputs
    printf("Enter starting currency (1-USD, 2-CAD) -> ");
    scanf("%d", &currencyChoice);

    printf("Enter starting unit (1-g, 2-l, 3-b) -> ");
    scanf("%d", &unitChoice);

    printf("Enter current price per b (CAD) -> ");
    scanf("%lf", &pricePerBarrelCAD);

    // Convert currency to USD if CAD is chosen
    if (currencyChoice == 2) {
        pricePerBarrelCAD /= USD_TO_CAD;
    }

    // Calculate equivalent prices
    double pricePerGallonUSD = pricePerBarrelCAD / BARREL_TO_GALLON;
    double pricePerLiterUSD = pricePerGallonUSD * GALLON_TO_LITER;
    double pricePerLiterCAD = pricePerLiterUSD * USD_TO_CAD;

    // Display the results
    printf("--- Unit --- USD ----- CAD ---\n");
    printf("Gallon: $ %.2lf $ %.2lf\n", pricePerGallonUSD, pricePerGallonUSD * USD_TO_CAD);
    printf("Liter: $ %.2lf $ %.2lf\n", pricePerLiterUSD, pricePerLiterCAD);
    printf("Barrel: $ %.2lf $ %.2lf\n", pricePerBarrelCAD, pricePerBarrelCAD * USD_TO_CAD);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    return 0;
}
