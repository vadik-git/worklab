#include <iostream>
#include<ctime>
#include <cstdlib>



using namespace std;
int seredne = 0;
int sum = 0;



void function(int randomDigits[]) {
	for (int i = 0; i < 100; i++) {
		cout << randomDigits[i] << " ";
	}
	cout << endl;
}



void random(int *randomDigits) {


	for (int i = 0; i < 100; i++)
	{
		randomDigits[i] = rand() % 200;

	}





}
void vivod(int *randomDigits) {


	for (int i = 0; i < 100; i++)
	{

		cout << i + 1 << ".)" << randomDigits[i] << endl;


	}

}

void seredn(int *randomDigits) {

	for (int i = 0; i < 100; i++)
	{


		sum = sum += randomDigits[i];


	}
	seredne = sum / 100;
	cout << "sum - " << sum << endl;
	cout << "seredne = " << seredne << endl;

}

void sortbuble(int *randomDigits) {

	/*const int size = 10;
		int arr[size] = { 10,5,7,11,45,6,8,2,3,6 };
		//buuble


		/*for (int i = 0; i < size-1;i++) {
			for (int j = 0; j < size-i-1;j++) {

				if (arr[j]>arr[j+1]) {

					int temp = arr[j];

					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
	int temp;*/
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100 - i - 1; j++) {

			if (randomDigits[j] > randomDigits[j + 1]) {
				int temp = randomDigits[j];
				randomDigits[j] = randomDigits[j + 1];
				randomDigits[j + 1] = temp;

			}






		}
	}

	function(randomDigits);




}
void poisk(int *randomDigits) {


	int a = 0;
	cout << "enter numb" << endl;
	cin >> a;
	for (int i = 0; i < 100; i++) {

		if (a == *randomDigits + i) {
			cout << i << endl;
		}
	}
}

void cratne(int *randomDigits) {

	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (*randomDigits + i % 5 == 0) {
			count++;
		}
	}
	cout << "cratne 5 " << count << endl;

}
void sortselect(int *randomDigits) {

	/*for (int i = 1; i < size;i++) {
		int temp;
		int indexprev;

		temp = arr[i];
		indexprev = i - 1;
		while (arr[indexprev] > temp && indexprev>=0 ) {

			arr[indexprev + 1] = arr[indexprev];
			arr[indexprev] = temp;
			indexprev--;



		}

	}
}

int main() {

	/*const int size = 10;
	int arr[size] = { 10,5,7,11,45,6,8,2,3,6 };
	//buuble


	/*for (int i = 0; i < size-1;i++) {
		for (int j = 0; j < size-i-1;j++) {

			if (arr[j]>arr[j+1]) {

				int temp = arr[j];

				arr[j] = arr[j + 1];
				arr[j + 1] = temp;




			}

		}

	}
	function(arr,size);*/

	/* 2.for (int i = 0; i < size;i++) {
		for (int j = i+1 ; j < size;j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}*/

	/*for (int i = 1; i < size;i++) {
		int temp;
		int indexprev;

		temp = arr[i];
		indexprev = i - 1;
		while (arr[indexprev] > temp && indexprev>=0 ) {

			arr[indexprev + 1] = arr[indexprev];
			arr[indexprev] = temp;
			indexprev--;



		}

	}
	function(arr, size);*/


	for (int i = 1; i < 100; i++) {
		int temp;
		int indexprev;

		temp = randomDigits[i];
		indexprev = i - 1;
		while (randomDigits[indexprev] > temp && indexprev >= 0) {
			randomDigits[indexprev + 1] = randomDigits[indexprev];
			randomDigits[indexprev] = temp;
			indexprev--;
		}
	}
	function(randomDigits);

}

void sortvstav(int * randomDigits) {
	/* 2.for (int i = 0; i < size;i++) {
		for (int j = i+1 ; j < size;j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}*/
	for (int i = 0; i < 100; i++) {
		for (int j = i + 1; j < 100; j++) {
			if (randomDigits[i] > randomDigits[j]) {
				int temp = randomDigits[i];
				randomDigits[i] = randomDigits[j];
				randomDigits[j] = temp;
			}
		}
	}

	function(randomDigits);


}



int main() {
	int a;
	int randomDgits[100];

	do {

		cout << "1.zapovneniya rand chislamy masiva" << endl;
		cout << "2.vivod masiva" << endl;
		cout << "3.znaiyu element v masivi" << endl;
		cout << "4.sortuvaniya" << endl;
		cout << "5.seredne masiva" << endl;
		cout << "6.kilkist elementiv kratni 5" << endl;
		cout << "7.exit" << endl;

		cout << "select action" << endl;
		cin >> a;
		switch (a) {
		case 1:
			random(randomDgits);
			break;
		case 2:
			vivod(randomDgits);
			break;
		case 3:
			poisk(randomDgits);
			break;
		case 4:
			cout << "1.buble sort" << endl;
			cout << "2.select sort" << endl;
			cout << "3.vstavnikovi" << endl;
			cout << "select action" << endl;
			cin >> a;
			switch (a) {
			case 1:
				sortbuble(randomDgits);
				break;
			case 2:
				sortselect(randomDgits);
				break;
			case 3:
				sortvstav(randomDgits);
				break;

			}
			break;
		case 5:
			seredn(randomDgits);
			break;
		case 6:
			cratne(randomDgits);
			break;
		case 7:
			return 0;
			break;

		}









	} while (a != 7);







	system("pause");
	return 0;
}