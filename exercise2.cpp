#include <iostream>

int main() {
    // Variables to store dimensions of the array
    int rows, cols;

    // Prompt user for dimensions (with validation)
    do {
        std::cout << "Enter the number of rows (maximum 3): ";
        std::cin >> rows;
    } while (rows <= 0 || rows > 3);

    do {
        std::cout << "Enter the number of columns (maximum 3): ";
        std::cin >> cols;
    } while (cols <= 0 || cols > 3);

    // Dynamically allocate a 2D array of doubles
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    // Input values into the array
    std::cout << "Enter " << rows * cols << " values for the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array2D[i][j];
        }
    }

    // Output the values of the array
    std::cout << "Array values:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array2D[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
