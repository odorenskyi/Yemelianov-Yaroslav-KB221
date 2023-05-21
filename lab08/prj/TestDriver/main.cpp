#include <iostream>
#include <cmath>
#include "ModulesYemelyanov.h"
#define ARRAY_SIZE 5

using namespace std;

int main() {
    const float x[ARRAY_SIZE] = {2, 4, 4, 4, 6};
    const float y[ARRAY_SIZE] = {3, 3, 8, -5, -7};
    const float z[ARRAY_SIZE] = {4, 4, 4, 4, 2};
    const float expectedResult[ARRAY_SIZE] = {10, 141, 1021, 397, 2742};

    for (short int i = 0; i < ARRAY_SIZE; i++)
        {
            const float currentReasult = round(s_calculation(x[i], y[i], z[i])*10000) / 10000;

            if (currentReasult == expectedResult[i])
            cout << "Test #" << i+1 << " - PASSED\n"; else
            cout << "Test #" << i+1 << " - FAILED\n";
        }
}

