#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i;
    float num[10], sum = 0, average, variance = 0;

    for (i = 0; i < 10; i++) {
        cout << i + 1 << ". Masukan Nilai:  ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / 10; //buat nentuin avg

    for (int i = 0; i < 10; i++) {
        variance += pow(num[i] - average, 2);
    }

    variance /= 10; //buat nentuin var?

// yang muncul di terminal
    cout << "Rata-rata nilai ujian di kelas ini adalah: " << average << endl;
    cout << "Varians di kelas ini adalah: " << variance << endl;

    return 0;
    //end
}
