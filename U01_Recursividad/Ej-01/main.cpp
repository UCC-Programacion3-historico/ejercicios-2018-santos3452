#include <iostream>

    using namespace std;



void mostrar(char *arr) {
    if (arr[0] != '\0') {
        mostrar(arr + 1);
        cout << arr[0] << " ";
    }
}


int main() {
    char a[] = "Hola Mundo Lindo";
    mostrar(a);
    return 0;
}

    int main() {
        int a[5];
        a[0] = 1;
        a[1] = 3;
        a[2] = 2;
        a[3] = 3;
        a[4] = 2;
        cout << "Hay " << contar(a, 3) << " tres en el arreglo " << endl;
        return 0;
    }
    return 0;
}




