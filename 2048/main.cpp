#include <iostream>

void sette_nullbak_v(int a[4]) {
    for (int i = 0; i < 4; i++) {
        if (a[0] == 0){
            a[0] = a[1];
            a[1] = a[2];
            a[2] = a[3];
            a[3] = 0;
        }
        else if (a[1] == 0) {
            a[1] = a[2];
            a[2] = a[3];
            a[3] = 0;
        }
        else if (a[2] == 0) {
            a[2] = a[3];
            a[3] = 0;
        }
    }

}

void plussesammen_v(int b[4]) {
    for (int i = 0; i < 3; i++) {
        if (b[i] == b[i+1]) {
            b[i] = (b[i] * 2);
            b[i+1] = 0;
        }
    }
}

void sette_nullbak_h(int a[4]) {
    for (int i = 3; i >= 0; i--) {
        if (a[3] == 0){
            a[3] = a[2];
            a[2] = a[1];
            a[1] = a[0];
            a[0] = 0;
        }
        else if (a[2] == 0) {
            a[2] = a[1];
            a[1] = a[0];
            a[0] = 0;
        }
        else if (a[2] == 0) {
            a[2] = a[1];
            a[0] = 0;
        }
    }

}


void plussesammen_h(int b[4]) {
    for (int i = 3; i >= 0; i--) {
        if (b[i] == b[i-1]) {
            b[i] = (b[i] * 2);
            b[i-1] = 0;
        }
    }
}



int main(){
    int choice;
    int first_row[4] = {0};
    int second_row[4] = {0};
    int third_row[4] = {0};
    int forth_row[4] = {0};

    for(int i = 0; i < 4; i++) std::cin >> first_row[i];
    for(int i = 0; i < 4; i++) std::cin >> second_row[i];
    for(int i = 0; i < 4; i++) std::cin >> third_row[i];
    for(int i = 0; i < 4; i++) std::cin >> forth_row[i];
    std::cin >> choice;

    if (choice == 0) {
        sette_nullbak_v(first_row);
        plussesammen_v(first_row);
        sette_nullbak_v(first_row);

        sette_nullbak_v(second_row);
        plussesammen_v(second_row);
        sette_nullbak_v(second_row);

        sette_nullbak_v(third_row);
        plussesammen_v(third_row);
        sette_nullbak_v(third_row);

        sette_nullbak_v(forth_row);
        plussesammen_v(forth_row);
        sette_nullbak_v(forth_row);
        for (int i = 0; i < 4; i++) {
            std::cout << first_row[i] << " ";
        }
        std::cout << "\n";
        for (int i = 0; i < 4; i++) {
            std::cout << second_row[i] << " ";
        }
        std::cout << "\n";
        for (int i = 0; i < 4; i++) {
            std::cout << third_row[i] << " ";
        }
        std::cout << "\n";
        for (int i = 0; i < 4; i++) {
            std::cout << forth_row[i] << " ";
        }
    }
        else if (choice == 2) {
            sette_nullbak_h(first_row);
            plussesammen_h(first_row);
            sette_nullbak_h(first_row);

            sette_nullbak_h(second_row);
            plussesammen_h(second_row);
            sette_nullbak_h(second_row);

            sette_nullbak_h(third_row);
            plussesammen_h(third_row);
            sette_nullbak_h(third_row);

            sette_nullbak_h(forth_row);
            plussesammen_h(forth_row);
            sette_nullbak_h(forth_row);

            for (int i = 0; i < 4; i++) {
                std::cout << first_row[i] << " ";
            }
            std::cout << "\n";

            for (int i = 0; i < 4; i++) {
                std::cout << second_row[i] << " ";
            }
            std::cout << "\n";

            for (int i = 0; i < 4; i++) {
                std::cout << third_row[i] << " ";
            }
            std::cout << "\n";

            for (int i = 0; i < 4; i++) {
                std::cout << forth_row[i] << " ";
            }
            std::cout << "\n";
        }



    return 0;
}