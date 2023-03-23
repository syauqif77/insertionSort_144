
// insertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];    // membuat array dengan panjang data 20
int n;          // membuat variabel inputan n

void input()
{   // procedure input
    while (true)
    {
        cout << "masukkan jumlah data pada array : "; // membuat inputan jumlah element array
        cin >> n;                                     // memanggil variabel inputan n

        if (n <= 20)
        {   // membuat kondisi n tidak lebih dari 20
            break;
  
        }
        else
        {
            cout << "\narray yang andaa masukkan maksimal 20 element. \n";  // menampilkan
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukkan element array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)     //menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
};
void insertionsort()
{

    int temp; // membuat variabel data temporer atau penyimpananan sementara
    int j;    // membuat variabel j sebagai penanda 

    for (int i = 1; i < n; i++) // 1. looping dengan i dimulai dari 1 hingga n-1
    {
        temp = arr[i]; // 2. simpan nilai arr[i] ke variabel sementara temp

        j = i - 1; // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j > temp]) // 4. looping while dimana nilai j lebih besar sama dengan 0 dan 
        {
            // arr[j] lebih besar sama dengan temp
            arr[j + 1] = arr[j];        // a. simpan arr [j] ke dalam variabel arr[j + 1]
            j--;                        // b. decrement nilai j by 1
        }

        arr[j + 1] = temp;              // 5. simpan nilai temp ke dalam srr[j + 1]


// procedure insertionsort


int main()

{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
