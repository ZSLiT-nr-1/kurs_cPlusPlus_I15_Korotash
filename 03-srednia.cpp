#include <iostream> 
using namespace std;
int main(){
    int LiczbaOcen;


std::cout << "Ile ocen chcesz wprowadzic?";  
cin >> LiczbaOcen;
if (LiczbaOcen <= 0){
    cout << "Liczba ocen musi byc dodantnia." << endl;
    return 0;
}

int suma = 0;
int ocena;
    for (int i = 1; i <= LiczbaOcen; i++) {
        cout << "Ocena" << i << ": " << endl;
        cin >> ocena;
        suma += ocena;
}
        double srednia = (double)suma / LiczbaOcen;

        cout << "Suma ocen" << suma << endl;  
        cout << "Srednia ocen" << srednia << endl;

return 0;
}