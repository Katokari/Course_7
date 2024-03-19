#include <iostream>
#include<cstdlib>
#include <cmath>

using namespace std;
enum enprimenotprime{prime=1,notprime=2};

enprimenotprime checkprimenumber(int number) {
    int M = round(number / 2);
    for (int counter = 2;counter <= M; counter++) {
        if (number % counter == 0) {
            return enprimenotprime::notprime;
        }
    }
    return enprimenotprime::prime;
}

int randomnumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}
void fillarray(int arr[100], int &arrlength) {
    cout << "\nEnter Number Of Elements: \n";
    cin >> arrlength;
    for (int i = 0;i < arrlength;i++) {
        arr[i] = randomnumber(1,100);
        //cout << arr[i]<<" ";
    }
}


void printarray(int arr[100] , int arrlength) {
    for (int i = 0; i < arrlength;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

}



void addnumberinarray(int number, int arr[100], int& arrlength) {
    arrlength++;
    arr[arrlength - 1] = number;

}

void copynumbersdynamically(int arrsource[100] , int arrdestination[100] , int arrlength , int arrlength2) {
    for (int i = 0; i < arrlength; i++) {
        if (enprimenotprime::prime) {
            addnumberinarray(arrsource[i], arrdestination, arrlength2);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarray(arr, arrlength);
    int a, b, c, d, e, f;
    int arr2[100] , arrlength2;

    printarray(arr, arrlength);

    copynumbersdynamically(arr, arr2, arrlength, arrlength2);

    cout << a << b << c << d << e << f;
    cout << "Number In Array 1 : IS l:-- ";
    printarray(arr,arrlength);
    cout << "Number In Array 2 : IS l:-- ";
    printarray(arr2, arrlength2);

}