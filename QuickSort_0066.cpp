
#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true) {
        cout << " Masukan Panjang Element array :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }
    cout << "\n-----------------" << endl;
    cout << "\nEnter array element" << endl;
    cout << "\n------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
    

}

void swap(int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_short(int low, int high) {
    int temp;
    int pivot, i, j;
    if (low > high) {
        return;
    }

    pivot = arr[low];
    i = low + 1;
    j = high;

    while (i <= j) {
        while ((arr[i] <= pivot) && (i <= high)) {
            i++;
            cmp_count++;

        }
        cmp_count++;
        while ((arr[j] > pivot) && (j >= low)) {
            j--;
            cmp_count++;

        }
        cmp_count++;
        if (i < j) {
            swap(low, j);
        }
        q_short(low, j - 1);

        q_short(j + 1, high);
    }
}


void display() {
    cout << "\n-------------" << endl;
    cout << "Sorterd Array" << endl;
    cout << "---------------" << endl;

}





int main()
{
    std::cout << "Hello World!\n";
}

