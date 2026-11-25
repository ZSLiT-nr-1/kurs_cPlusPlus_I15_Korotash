#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*
    double srednia;
    cout << "Wprowadz srednia ocen ucznia: ";
cin >> srednia;
if (srednia < 0) {
    cout << "Srednia powinna byc dodatnia" << endl;
    return 0;
}

double frekwencja;
    cout << "Wprowadz frekwencje ucznia: ";
cin >> frekwencja;
if (frekwencja < 0) {
    cout << "Frekwencja powinna byc dodatnia" << endl;
    return 0;
}
const double progSrednia = 3.0;
const double progFrekwencja = 50.0;

if (srednia >= progSrednia && frekwencja >= progFrekwencja) {
    cout << "Zdal";
    return 0;
}
if ( srednia < progSrednia){
cout << "Nie zdal";
return 0;}
if ( frekwencja < progFrekwencja){
cout << "Nie zdal";
return 0;}
*/

/*
int liczba;
cout << "Wprowadz liczbe calkowita: ";
cin >> liczba;

 if (liczba / 2 % 2 == 0){
    cout << "Liczba jest podzielna przez 2" << endl;

 } else{
 cout << "Liczba nie jest podzielna przez 2" << endl;
 }
    */

/*
double pierwszybok;
double drugibok;
double trzecibok;
cout << "Wprowadz dlugosc pierwszego boku trojkata: ";
cin >> pierwszybok;
cout << "Wprowadz dlugosc drugiego boku trojkata: ";   
cin >> drugibok;
cout << "Wprowadz dlugosc trzeciego boku trojkata: ";
cin >> trzecibok;
if (pierwszybok + drugibok > trzecibok && pierwszybok + trzecibok > drugibok && drugibok + trzecibok > pierwszybok) {
    cout << "Mozna zbudowac trojkat" << endl;
} else {
    cout << "Nie mozna zbudowac trojkata" << endl;
}
*/
double liczba;
cout <<"Wprowadz liczbe: ";
cin >> liczba;
if (liczba < 0) {
    cout << "liczba jest ujemna";

} else {
    cout << "Wynik wynosi: " << sqrt(liczba);
    
}
return 0;
}