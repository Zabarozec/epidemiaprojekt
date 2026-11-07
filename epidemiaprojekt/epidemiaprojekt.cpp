// epidemiaprojekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
#include <cmath>
int susceptible = 80;
int infected = 10;
int recovered = 10;
double infectionRate = 0.2;
double recoveryRate = 0.1;
int day = 0;
int Total = infected + susceptible + recovered;
 

void simulateDay() {
	int ninfected = infected * infectionRate;
	int nrecovered = recovered * recoveryRate;
	recoveryRate == recoveryRate <= infected;
	infectionRate == infectionRate <= susceptible;
	infected = floor (infected +ninfected - nrecovered);
    susceptible = floor(susceptible -ninfected) ;
	recovered = floor(recovered + nrecovered);
	day += 1;
}

void showPopulation() {
	
	cout << "Day: " << day << endl;
	cout << "Susceptible " << susceptible << endl;
	cout << "Infected: " << infected << endl;
	cout << "Recovered: " << recovered << endl;
	cout << "Total: " << infected + susceptible + recovered << endl;
	
	

	
	
}
bool checkPopulation() {
	if (Total == 100)
	{
		return true;
	}
	else {
		return false;
	}
	if (infected > 0 && susceptible > 0 && recovered > 0) {
		return true;
	}
	else {
		return false;
	}
}
	void changeParametr(){
		int z;
		cout << "Specify which parameter you want to change: " << endl;
		cout << "infection rate: 1" << endl;
		cout << "recovery rate: 2" << endl; 
		cout << "both: 3" << endl; 
		cin >> z;
		cout << "Provide new values for the model/s parameter, in the range from 0 to 1 : " << endl;
       if (z == 1) {
		   
			   cin >> infectionRate;

			   if (infectionRate > 1 || infectionRate < 0) {
				   while (infectionRate < 0 || infectionRate > 1) {
				   cout << "You provided a number outside the range" << endl;
				   cin >> infectionRate;
			   }
		   }
		}
		else if (z == 2) {
		   
			   cin >> recoveryRate;
			   if (recoveryRate > 1 && recoveryRate < 0) {
				   while (recoveryRate < 1 || recoveryRate < 0) {
				   cout << "You provided a number outside the range" << endl;
				   cin >> recoveryRate;
				   
			   }
		   }
		}
		else if (z == 3) {
		   
			   cin >> infectionRate >> recoveryRate;
			   if (recoveryRate > 1 || recoveryRate < 0 || infectionRate > 1 || infectionRate < 0) {
				   while (recoveryRate > 1 || recoveryRate < 0 || infectionRate > 1 || infectionRate < 0) {
				   cout << "You provided a number outside the range" << endl;
				   cin >> infectionRate >> recoveryRate;
			   }
		   }
		}
		else {
			cout << "wrong number!!!" << endl;
		}

	}


int main()
{
	int susceptible = 80;
	int infected = 10;
	int recovered = 10;
	double infectionRate = 0.2;
	double recoveryRate = 0.1;
	int day = 0;
	showPopulation();
	int x;
	cout << " === Epidemic Simulator === " << endl;
	cout << "1. Simulate next day: " << endl;
	cout << "2. Change model parameters: " << endl;
	cout << "3. Exit: " << endl;
		
	do {
		cout << "Wybierz opcje z menu: " << endl;
		cin >> x;

		switch (x) {
		case 1:
			cout << " === Simulate next day === " << endl;
			simulateDay();
			showPopulation();
			checkPopulation();

			break;
		case 2:
			cout << " === Change model parameters === " << endl;
			changeParametr(); 
			break;
		case 3:
			break;
		default:
			cout << " ERROR!!! Bledny numer!!! " << endl;
		}
	} while (x != 3);

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
