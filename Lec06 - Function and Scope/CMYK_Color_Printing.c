#include <stdio.h>
#include <math.h>
#define MAX_SIZE 256

unsigned int W, H;
unsigned int image[MAX_SIZE][MAX_SIZE] = {0};
unsigned int color_C[MAX_SIZE][MAX_SIZE] = {0};
unsigned int color_M[MAX_SIZE][MAX_SIZE] = {0};
unsigned int color_Y[MAX_SIZE][MAX_SIZE] = {0};
unsigned int color_K[MAX_SIZE][MAX_SIZE] = {0};

char layers[4] = {'C', 'M', 'Y', 'K'};

void print_C(unsigned int mask[][MAX_SIZE]);
void print_M(unsigned int mask[][MAX_SIZE]);
void print_Y(unsigned int mask[][MAX_SIZE]);
void print_K(unsigned int mask[][MAX_SIZE]);
void CMYK_to_RGB();

int main() {
    // Get the dimension of the image.
    scanf("%u %u", &W, &H);

    // Declare the mask for single ink color.
    unsigned int mask[MAX_SIZE][MAX_SIZE] = {0};

    // For each layer, do the following:
    for (int layer = 0; layer < 4; ++layer) {
        // Get color mask.
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                scanf("%u", &mask[i][j]);
            }
        }

        // Print a layer of that color to the paper.
        switch (layers[layer]) {
            case 'C': print_C(mask); break;
            case 'M': print_M(mask); break;
            case 'Y': print_Y(mask); break;
            case 'K': print_K(mask); break;
        }
    }

    // Convert CMYK color to RGB color.
    CMYK_to_RGB();

    // Show the final result.
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            printf("#%06x ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void print_C(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0 ; i < H ; i++)
        for (int j = 0 ; j < W ; j++)
            color_C[i][j] = mask[i][j];
}

void print_M(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0 ; i < H ; i++)
        for (int j = 0 ; j < W ; j++)
            color_M[i][j] = mask[i][j];
}

void print_Y(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0 ; i < H ; i++)
        for (int j = 0 ; j < W ; j++)
            color_Y[i][j] = mask[i][j];
}

void print_K(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0 ; i < H ; i++)
        for (int j = 0 ; j < W ; j++)
            color_K[i][j] = mask[i][j];
}

void CMYK_to_RGB() {       //lround 函式為四捨五入後的結果 
    for (int i = 0 ; i < H ; i++)
        for (int j = 0 ; j < W ; j++) {
            image[i][j] = ((lround(255 * (100 - color_C[i][j]) * 0.01 * (100 - color_K[i][j]) * 0.01)) << 16) +
                          ((lround(255 * (100 - color_M[i][j]) * 0.01 * (100 - color_K[i][j]) * 0.01)) << 8) +
                          (lround(255 * (100 - color_Y[i][j]) * 0.01 * (100 - color_K[i][j]) * 0.01));
        }
}