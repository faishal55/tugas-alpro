#include <iostream>
using namespace std;

int baris[5][5] = {14797, 14798, 14799, 14800, 14801}, {80, 90, 89, 96, 70};

void menu(){
    cout << "[1] Sorting dengan Bubble Sort" << endl;
    cout << "[2] Sorting dengan Selection Sort" << endl;
    cout << "[3] Search dengan brute force" << endl;
    cout << "[4] Search dengan binary search" << endl;
}


void brute_force_search(int baris[5][5], int cariBil){
    bool isFound;
    for(int i=0;i<5;i++){
        if(cariBil == baris[i]){
            cout << "ketemu bang di index ke-" << i << endl;
            isFound = true;
        }
    }
    if(isFound != true){
        cout << "Waduh gada bang" << endl;
    }
}

int binary_searchu(int baris[], int size, int searchKey){
    int left = 0;
    int right = size-1;
    int middle = 0;
    while(left<=right){
        middle = (left + right)/2;
        if(baris[middle] == searchKey){
            return middle;
        }
        else if(searchKey < baris[middle]){
            right = middle -1;
        }
        else {
            left = middle+1;
        }
    }

    return -1;
}

void selection_sort(){
    // selection
    int minimum,temp;
    for(int i=0;i<5-1;i++){
        minimum = i;
        for(int j=i+1; j<5; j++){
            if(baris[j] < baris[minimum]){
                minimum=j;
            }
        }

        temp = baris[i];
        baris[i] = baris[minimum];
        baris[minimum] = temp;
    }
}

void bubble_sort(){
    int i, j, temp;

    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(baris[j] > baris[j+1]){
                temp = baris[j];
                baris[j] = baris[j+1];
                baris[j+1] = temp;
            }
        }
    }
}

int main(){
    int i;
    int idx;
    int temp;
    int cariBil;
    int inp;

    for(int i=0;i<5;i++){
        cout << baris[i] << " ";
    }
    cout << endl;

    menu();
    cout << "menu: ";cin >> inp;
    if (inp == 1) {
        bubble_sort();
        for(int i=0;i<5;i++){
            cout << baris[i] << " ";
        }
        cout << endl;

    } else if (inp == 2) {
        selection_sort();
        for(int i=0;i<5;i++){
            cout << baris[i] << " ";
        }
        cout << endl;

    } else if (inp == 3) {
        cout << "nyari apa bang? "; cin >> cariBil;
        brute_force_search(baris, cariBil);

    } else if (inp == 4) {
        cout << "nyari apa bang? "; cin >> cariBil;
        selection_sort();
        for(int i=0;i<5;i++){
            cout << baris[i] << " ";
        }
        cout << endl;
        idx = binary_searchu(baris, 5, cariBil);
        if(idx != -1){
            cout << "loh ketemu bang di index ke-" << idx << endl;
        } else {
            cout << "loh gak ketemu bang" << endl;
        }
    } else {
        cout << "[error]: menu tidak ada di list" <<endl;
    }



    return 0;
}
