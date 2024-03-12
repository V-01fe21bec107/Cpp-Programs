#include <iostream>

int main() {
    int num = 5;

    // Pre-increment
    int preIncrementResult = ++num;

    // Post-increment
    int postIncrementResult = num++;

    // Reset the value for demonstration of decrement operations
    num = 5;

    // Pre-decrement
    int preDecrementResult = --num;

    // Post-decrement
    int postDecrementResult = num--;

    // Display results
    std::cout << "Original value: 5\n";
    std::cout << "After pre-increment (++num): " << preIncrementResult << "\n";
    std::cout << "After post-increment (num++): " << postIncrementResult << "\n";
    std::cout << "After pre-decrement (--num): " << preDecrementResult << "\n";
    std::cout << "After post-decrement (num--): " << postDecrementResult << "\n";

    return 0;
}
