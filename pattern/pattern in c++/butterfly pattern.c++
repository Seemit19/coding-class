*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

//printing above pettrn//


#include <iostream>

int main() {
    int n;
    std::cout<<"Enter size : ";
    std::cin>>n;
    for (int i = 1; i <=n; i++) {
        // Print asterisks on the left side
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }

        // Print spaces in the middle
        for (int j = 1; j <=n*2 - 2 * i; j++) {
            std::cout << " ";
        }

        // Print asterisks on the right side
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    for (int i = n; i >= 1 ; i--) {
        // Print asterisks on the left side
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }

        // Print spaces in the middle
        for (int j = 1; j <=n*2 - 2 * i; j++) {
            std::cout << " ";
        }

        // Print asterisks on the right side
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    return 0;
}
