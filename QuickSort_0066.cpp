
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

    

}

int main()
{
    std::cout << "Hello World!\n";
}

