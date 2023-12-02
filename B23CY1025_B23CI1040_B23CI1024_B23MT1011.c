#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define PI 3.14159265359

// Function to convert a string to lowercase for uniformity
void toLowerCase(char d[]) {
    for (int i = 0; d[i] != '\0'; ++i) {
        d[i] = tolower(d[i]);
    }
}

// Function to standardize dimension names
void toDimension(char d[]) {
    // mapping full dimension names to their abreviations
    if (strcmp(d, "centimetre") == 0) strcpy(d, "cm");
    else if (strcmp(d, "metre") == 0) strcpy(d, "m");
    else if (strcmp(d, "millimetre") == 0) strcpy(d, "mm");
    else if (strcmp(d, "nanometre") == 0) strcpy(d, "nm");
    else if (strcmp(d, "decametre") == 0) strcpy(d, "dam");
    else if (strcmp(d, "inch") == 0) strcpy(d, "in");
    else if (strcmp(d, "feet") == 0) strcpy(d, "ft");
}

// Function to calculate area, perimeter, and volume for different shapes
void calculate_area(char shape[], char d[]) {
    // Variable declarations for various shape parameters
    float side, length, width, base, height, radius, angle, diagonal_a, diagonal_b;
    double area, circumference, volume, slant_height, diagonal, circumcircle_radius, incircle_radius, perimeter, surface_area, curved_surface_area, base_surface_area, base_circumference, base_area, base_perimeter, lateral_surface_area, face_diagonal, body_diagonal, total_surface_area;

    // Conversion to lowercase for uniformity
    toLowerCase(shape);
    toDimension(d);

    // Output header
    printf("\n");
    printf("                ---- RESULT ----                \n");
    printf("The shape is %s\n", shape);

    // Handling different shapes
    if (strcmp(shape, "square") == 0) {
        // Prompt for user input
        printf("The value of side of square: ");
        scanf("%f", &side);
        
        // Calculate square properties
        area = side * side;
        perimeter = 4 * side;
        diagonal = side * sqrt(2);
        
        // Output calculated values 
        printf("Diagonal: %.3f %s\n", diagonal, d);
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "rectangle") == 0) {
        // Prompt for user input
        printf("The values of length and width of rectangle: ");
        scanf("%f %f", &length, &width);
        
        // Calculate rectangle properties
        area = length * width;
        perimeter = 2.0 * (length + width);
        diagonal = sqrt((length * length) + (width * width));
        
        // Output calculated values
        printf("Diagonal: %.3f %s\n", diagonal, d);
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "pentagon") == 0) {
        // Prompt for user input
        printf("The value of side of pentagon: ");
        scanf("%f", &side);
        
        
        // Calculate pentagon properties
        area = (1.720477 * side * side);
        perimeter = 5.0 * side;
        circumcircle_radius = (side / 10 * sqrt(50 + 10 * sqrt(5)));
        incircle_radius = (side / 10 * sqrt(25 + 10 * sqrt(5)));
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "hexagon") == 0) {
        // Prompt for user input
        printf("The value of side of hexagon: ");
        scanf("%f", &side);
        
        // Calculate hexagon properties
        area = (2.598076 * side * side);
        perimeter = 6.0 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "heptagon") == 0) {
        // Prompt for user input
        printf("The value of side of heptagon: ");
        scanf("%f", &side);
        
        // Calculate heptagon properties
        area = ((7.0 / 4.0) * side * side * (1 / tan(PI / 7.0)));
        perimeter = 7.0 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "octagon") == 0) {
        // Prompt for user input
        printf("The value of side of octagon: ");
        scanf("%f", &side);
        
        // Calculate octagon properties
        area = (2 * (1 + sqrt(2)) * side * side);
        perimeter = 8.0 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "nonagon") == 0) {
        // Prompt for user input
        printf("The value of side of nonagon: ");
        scanf("%f", &side);
        
        // Calculate nonagon properties
        area = ((9.0 / 4.0) * side * side * (1 / tan(PI / 9.0)));
        circumference = 9.0 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "decagon") == 0) {
        // Prompt for user input
        printf("The value of side of decagon: ");
        scanf("%f", &side);
        
        // Calculate decagon properties
        area = ((5.0 / 2.0) * side * side * sqrt(5.0 + (2.0 * sqrt(5.0))));
        perimeter = 10 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "undecagon") == 0) {
        // Prompt for user input
        printf("The value of side of undecagon: ");
        scanf("%f", &side);
        
        // Calculate undecagon properties
        area = (9.3656 * side * side);
        perimeter = 11 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "dodecagon") == 0) {
        // Prompt for user input
        printf("The value of side of dodecagon: ");
        scanf("%f", &side);
        
        // Calculate dodecagon properties
        area = (11.1961 * side * side);
        perimeter = 12 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "tridecagon") == 0) {
        // Prompt for user input
        printf("The value of side of tridecagon: ");
        scanf("%f", &side);
        
        // Calculate tridecagon properties
        area = (13.1858 * side * side);
        perimeter = 13 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "tetradecagon") == 0) {
        // Prompt for user input
        printf("The value of side of tetradecagon: ");
        scanf("%f", &side);
        
        // Calculate tetradecagon properties
        area = (15.3345 * side * side);
        perimeter = 14 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "pentadecagon") == 0) {
        // Prompt for user input
        printf("The value of side of pentadecagon: ");
        scanf("%f", &side);
        
        // Calculate pentadecagon properties
        area = (17.6424 * side * side);
        perimeter = 15 * side;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Perimeter: %.3f %s\n", perimeter, d);
        return;
    }
    else if (strcmp(shape, "circle") == 0) {
        // Prompt for user input
        printf("The value of radius: ");
        scanf("%f", &radius);
        
        // Calculate circle properties
        area = PI * radius * radius;
        circumference = 2.0 * PI * radius;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        printf("Circumference: %.3f %s\n", circumference, d);
        return;
    }
    else if (strcmp(shape, "triangle") == 0) {
        // Prompt for user input
        printf("The values of base and height of triangle: ");
        scanf("%f %f", &base, &height);
        
        // Calculate triangle properties
        area = 0.5 * base * height;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "rightangletriangle") == 0) {
        // Prompt for user input
        printf("The values of base and height of right angle triangle: ");
        scanf("%f %f", &base, &height);
        
        // Calculate rightangletriangle properties
        area = 0.5 * base * height;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "parallelogram") == 0) {
        // Prompt for user input
        printf("The values of base and height of parallelogram: ");
        scanf("%f %f", &base, &height);
        
        // Calculate parallelogram properties
        area = base * height;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "trapezoid") == 0) {
        // Prompt for user input
        float side_a, side_b;
        printf("The values of side_a, side_b, and height of trapezoid: ");
        scanf("%f %f %f", &side_a, &side_b, &height);
        
        // Calculate trapezoid properties
        area = (((side_a + side_b) / 2) * height);
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "ellipse") == 0) {
        // Prompt for user input
        printf("The lengths of semi-major axis and semi-minor axis: ");
        scanf("%f %f", &length, &width);
        
        // Calculate ellipse properties
        area = PI * length * width;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "sector") == 0) {
        // Prompt for user input
        printf("The values of radius and angle (in radians) of sector: ");
        scanf("%f %f", &radius, &angle);
        
        // Calculate sector properties
        area = (angle * radius * radius) / 2.0;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "rhombus") == 0) {
        // Prompt for user input
        printf("The values of diagonal_a and diagonal_b of rhombus: ");
        scanf("%f %f", &diagonal_a, &diagonal_b);
        
        // Calculate rhombus properties
        area = (diagonal_a * diagonal_b) / 2;
        
        // Output calculated values
        printf("Area: %.3f %s²\n", area, d);
        return;
    }
    else if (strcmp(shape, "cylinder") == 0) {
        // Prompt for user input
        printf("The values of height and radius of cylinder: ");
        scanf("%f %f", &height, &radius);
        
        // Calculate cylinder properties
        base_area = PI * radius * radius;
        total_surface_area = 2 * PI * radius * (radius + height);
        lateral_surface_area = 2 * PI * radius * height;
        base_circumference = 2 * PI * radius;
        volume = PI * radius * radius * height;

        // Output calculated values
        printf("Total surface area: %.3f %s²\n", total_surface_area, d);
        printf("Lateral surface area: %.3f %s²\n", lateral_surface_area, d);
        printf("Base area: %.3f %s²\n", base_area, d);
        printf("Base circumference: %.3f %s²\n", base_circumference, d);
        printf("Volume: %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "cube") == 0) {
        // Prompt for user input
        printf("The value of side of cube: ");
        scanf("%f", &side);
        
        // Calculate cube properties
        area = 6.0 * side * side;
        lateral_surface_area = (4.0 * side * side);
        perimeter = 12.0 * side;
        face_diagonal = sqrt(2.0) * side;
        body_diagonal = sqrt(3.0) * side;
        volume = side * side * side;
        
        // Output calculated values
        printf("Face diagonal : %.3f %s\n", face_diagonal, d);
        printf("Body diagonal : %.3f %s\n", body_diagonal, d);
        printf("Perimeter : %.3f %s\n", perimeter, d);
        printf("Lateral surface area : %.3f %s²\n", lateral_surface_area, d);
        printf("Total Surface area : %.3f %s²\n", area, d);
        printf("Volume : %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "cuboid") == 0) {
        // Prompt for user input
        printf("The values of length, width, and height of cuboid: ");
        scanf("%f %f %f", &length, &width, &height);
        
        // Calculate cuboid properties
        area = 2 * (length * width + width * height + height * length);
        lateral_surface_area = (2 * (length + width) * height);
        perimeter = (4.0 * (length + width + height));
        face_diagonal = (sqrt((length * length) + (width * width)));
        body_diagonal = (sqrt((length * length) + (width * width) + (height * height)));
        volume = length * width * height;
        
        // Output calculated values
        printf("Face diagonal : %.3f %s\n", face_diagonal, d);
        printf("Body diagonal : %.3f %s\n", body_diagonal, d);
        printf("Perimeter : %.3f %s\n", perimeter, d);
        printf("Lateral surface area : %.3f %s²\n", lateral_surface_area, d);
        printf("Total Surface area : %.3f %s²\n", area, d);
        printf("Volume : %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "sphere") == 0) {
        // Prompt for user input
        printf("The value of radius of sphere: ");
        scanf("%f", &radius);
        
        // Calculate sphere properties
        surface_area = 4 * PI * radius * radius;
        volume = (4.0 / 3.0) * PI * radius * radius * radius;

        // Output calculated values
        printf("Total Surface area: %.3f %s²\n", surface_area, d);
        printf("Volume: %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "cone") == 0) {
        // Prompt for user input
        printf("The values of height and radius of cone: ");
        scanf("%f %f", &height, &radius);
        
        // Calculate cone properties
        slant_height = sqrt(radius * radius + height * height);
        area = PI * radius * (radius + slant_height);
        base_area = PI * radius * radius;
        lateral_surface_area = PI * radius * slant_height;
        volume = (1.0 / 3.0) * PI * radius * radius * height;

        // Output calculated values
        printf("Slant height : %.3f %s\n", slant_height, d);
        printf("Total surface area: %.3f %s²\n", area, d);
        printf("Lateral surface area: %.3f %s²\n", lateral_surface_area, d);
        printf("Base area: %.3f %s²\n", base_area, d);
        printf("Volume: %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "pyramid") == 0) {
        // Prompt for user input
        printf("The values of height, base_length, and base_width of pyramid: ");
        scanf("%f %f %f", &height, &length, &width);
        
        // Calculate pyramid properties
        area = length * width + 2 * length * sqrt((width / 2) * (width / 2) + height * height);
        base_area = length * width;
        base_perimeter = 2 * (length + width);
        lateral_surface_area = length * sqrt((width / 2) * (width / 2) + height * height) + width * sqrt((length / 2) * (length / 2) + height * height);
        volume = (1.0 / 3.0) * length * width * height;

        // Output calculated values
        printf("Base area: %.3f %s²\n", base_area, d);
        printf("Base perimeter: %.3f %s\n", base_perimeter, d);
        printf("Lateral surface area: %.3f %s²\n", lateral_surface_area, d);
        printf("Total surface area: %.3f %s²\n", area, d);
        printf("Volume: %.3f %s³\n", volume, d);
        return;
    }
    else if (strcmp(shape, "hemi-sphere") == 0) {
        // Prompt for user input
        printf("The value of radius of hemisphere: ");
        scanf("%f", &radius);
        
        // Calculate hemi-sphere properties
        surface_area = 3.0 * PI * radius * radius;
        curved_surface_area = (2 * PI * radius * radius);
        base_surface_area = PI * radius * radius;
        base_circumference = 2.0 * PI * radius;
        volume = (2.0 / 3.0) * PI * radius * radius * radius;

        // Output calculated values
        printf("Total Surface area: %.3f %s²\n", surface_area, d);
        printf("Base surface area : %.3f %s²\n", base_surface_area, d);
        printf("Base circumference : %.3f %s\n", base_circumference, d);
        printf("Curved Surface area: %.3f %s²\n", curved_surface_area, d);
        printf("Volume: %.3f %s³\n", volume, d);
        return;
    }
    else {
        printf("Invalid shape!\n");
        return;
    }
}

// Function to validate dimension names
int dimension(char d[]) {
    toLowerCase(d);

    // Check if the provided dimensions are valid are not
    if (strcmp(d, "centimetre") == 0 || strcmp(d, "inch") == 0 || strcmp(d, "feet") == 0 || strcmp(d, "metre") == 0 || strcmp(d, "millimetre") == 0 || strcmp(d, "nanometre") == 0 || strcmp(d, "decametre") == 0) {
        return 1; // Dimension is valid
    } else {
        return 0; // Dimension is invalid
    }
}

// Function to validate shape names
int check_shape(char shapes[]) {
    toLowerCase(shapes);

    // Check if the provided name is valid 
    if (strcmp(shapes, "square") == 0 || strcmp(shapes, "rectangle") == 0 || strcmp(shapes, "pentagon") == 0 || strcmp(shapes, "hexagon") == 0 || strcmp(shapes, "heptagon") == 0 || strcmp(shapes, "octagon") == 0 || strcmp(shapes, "nonagon") == 0 || strcmp(shapes, "decagon") == 0 || strcmp(shapes, "circle") == 0 || strcmp(shapes, "triangle") == 0 || strcmp(shapes, "rightangletriangle") == 0 || strcmp(shapes, "parallelogram") == 0 || strcmp(shapes, "trapezoid") == 0 || strcmp(shapes, "ellipse") == 0 || strcmp(shapes, "sector") == 0 || strcmp(shapes, "rhombus") == 0 || strcmp(shapes, "cylinder") == 0 || strcmp(shapes, "sphere") == 0 || strcmp(shapes, "cone") == 0 || strcmp(shapes, "pyramid") == 0 || strcmp(shapes, "cube") == 0 || strcmp(shapes, "cuboid") == 0 || strcmp(shapes, "hemi-sphere") == 0) {
        return 1; // Shape is valid
    } else {
        return 0; // Shape is invalid
    }
}

// Function to display the menu
void displayMenu() {
    printf("\nMENU:\n");
    printf("1. Calculate shape area/volume\n");
    printf("2. Calculate combined perimeter/area/volume\n");
    printf("3. Exit\n");
}

// Function to handle shape input
void handleShapeInput(char dimension[], int i) {
    char shape[50];

    printf("\n---------------- INPUT %d ----------------\n", i);
    printf("Enter the shape (e.g., Square, Circle, Cylinder): ");
    scanf("%s", shape);
    
    // Calculate and display shape properties
    printf("\n---------------- SHAPE %d ----------------", i);
    calculate_area(shape, dimension);
    printf("\n------------------------------------------\n");
}

// Function to handle combined shapes input
void handleCombinedShapes() {
    int n;
    printf("\nEnter the number of shapes: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a valid number of shapes.\n");
        return;
    }

    int sum = 0;
    int value;
    for (int i = 0; i < n; i++) {
        printf("\nEnter the value of perimeter/area/volume for shape %d: ", i + 1);
        if (scanf("%d", &value) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return;
        }
        sum += value;
    }

    printf("\nThe combined perimeter/area/volume is %d\n", sum);
}
int main() {
    // Welcome message
    printf("--> AREA CALCULATOR <--\n");

    // User input for dimension
    char d[20];
    printf("\nChoose a Dimension (e.g., centimetre, inch, feet, metre): ");
    scanf("%s", d);

    // Validate dimension
    if (dimension(d)) {
        int choice;
        int n = 0;  // Initialize the number of shapes to zero

        // Main program loop 
        do {
            // Display menu options
            displayMenu();
            
            // Display selected dimension
            printf("\nSelected Dimension: %s\n", d);
            
            // User input for menu choices
            printf("Enter your choice: ");
            if (scanf("%d", &choice) != 1) {
                // Invalid input, clear the input buffer
                while (getchar() != '\n');
                printf("Invalid input. Please enter a number.\n");
                continue;
            }

            // Switch based on user's choice
            switch (choice) {
                case 1:
                    // User input for the number of shapes
                    printf("\nEnter the number of shapes for calculating perimeter/surface area/volume: ");
                    if (scanf("%d", &n) != 1) {
                        // Invalid input, clear the input buffer
                        while (getchar() != '\n');
                        printf("Invalid input. Please enter a number.\n");
                        n = 0;  // Reset the number of shapes
                        continue;
                    }
                    // Calculate and display properties for each shape
                    if (n > 0) {
                        for (int i = 1; i <= n; i++) {
                            handleShapeInput(d, i);
                            printf("\n");
                        }
                    } else {
                        printf("Enter a valid number of shapes.\n");
                    }
                    break;
                case 2:
                    // Calculate and display combined properties for multiple shapes
                    handleCombinedShapes();
                    break;
                case 3:
                    // Exit the program
                    printf("\nExiting program.\n");
                    printf("Thank you for using our AREA CALCULATOR (^_^)\n");
                    break;
                default:
                    printf("Invalid choice. Please enter a valid option.\n");
            }
        } while (choice != 3); // Continue until the user chooses to exit
    } else {
        // Invalid dimension
        printf("\nEnter a valid dimension.\n");
    }

    return 0;
}
