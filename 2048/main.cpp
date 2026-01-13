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


void redo_rows(int a[4], int b[4], int c[4], int d[4], int rad1[4], int rad2[4], int rad3[4], int rad4[4]){
    rad1[0] = a[0];
    rad1[1] = b[0];
    rad1[2] = c[0];
    rad1[3] = d[0];

    rad2[0] = a[1];
    rad2[1] = b[1];
    rad2[2] = c[1];
    rad2[3] = d[1];

    rad3[0] = a[2];
    rad3[1] = b[2];
    rad3[2] = c[2];
    rad3[3] = d[2];

    rad4[0] = a[3];
    rad4[1] = b[3];
    rad4[2] = c[3];
    rad4[3] = d[3];
}



int main(){
    int choice;
    int first_row[4] = {0};
    int second_row[4] = {0};
    int third_row[4] = {0};
    int forth_row[4] = {0};

    int flipped_row1[4] = {0};
    int flipped_row2[4] = {0};
    int flipped_row3[4] = {0};
    int flipped_row4[4] = {0};

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
        else if(choice == 3){
            redo_rows(first_row, second_row, third_row, forth_row, flipped_row1, flipped_row2, flipped_row3, flipped_row4);
            sette_nullbak_h(flipped_row1);
            plussesammen_h(flipped_row1);
            sette_nullbak_h(flipped_row1);

            sette_nullbak_h(flipped_row2);
            plussesammen_h(flipped_row2);
            sette_nullbak_h(flipped_row2);
            
            sette_nullbak_h(flipped_row3);
            plussesammen_h(flipped_row3);
            sette_nullbak_h(flipped_row3);

            sette_nullbak_h(flipped_row4);
            plussesammen_h(flipped_row4);
            sette_nullbak_h(flipped_row4);
            for(int i = 0; i < 4; i++) {
                std::cout << flipped_row1[i] << " " << flipped_row2[i] << " " << flipped_row3[i] << " " << flipped_row4[i] << "\n";
            }
        }
        else{
            redo_rows(first_row, second_row, third_row, forth_row, flipped_row1, flipped_row2, flipped_row3, flipped_row4);
            sette_nullbak_v(flipped_row1);
            plussesammen_v(flipped_row1);
            sette_nullbak_v(flipped_row1);

            sette_nullbak_v(flipped_row2);
            plussesammen_v(flipped_row2);
            sette_nullbak_v(flipped_row2);
            
            sette_nullbak_v(flipped_row3);
            plussesammen_v(flipped_row3);
            sette_nullbak_v(flipped_row3);

            sette_nullbak_v(flipped_row4);
            plussesammen_v(flipped_row4);
            sette_nullbak_v(flipped_row4);
            for(int i = 0; i < 4; i++) {
                std::cout << flipped_row1[i] << " " << flipped_row2[i] << " " << flipped_row3[i] << " " << flipped_row4[i] << "\n";
        }
    }



    return 0;
}