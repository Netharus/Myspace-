#include<iostream>
#include<time.h>
#include<conio.h>

using namespace std;

bool prime(unsigned long long n) {
	for (unsigned long long i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {

	setlocale(LC_ALL, "Ru");

	srand(time(NULL));

	unsigned long long lim_min, lim_max, secret_num, ans, attempts=1,buff=0,sum=0,fact=1;
	

	cout << "Lim_min" << endl;
	cin >> lim_min;
	cout << "Lim_max" << endl;
	cin >> lim_max;
	

	secret_num = lim_min + rand() % (lim_max - lim_min);
	
	while(true)
	{
		cout << "�������� �����" << endl;
		cin >> ans;
		if (ans == secret_num) {
			cout << "����� ������� " << attempts << endl;
			break;
		}
		else {
			attempts++;
		}
		if (ans > secret_num) {
			cout << "������"<<endl;
		}
		else {
			cout << "������" << endl;
		}
		system("cls");
		
	}

	while (secret_num != 0) {
		buff= secret_num % 10;
		sum += buff;
		secret_num /= 10;
	}

	cout <<"����� �����:"<< sum<<endl;

	for (long long i=1;i <= ans;i++) {
		fact *= i;
	}
	
	cout <<"��������� :"<< fact << endl;

	if (prime(ans)==true) {
		cout << "Prostoe" << endl;
	}
	else
	{
		cout << "��������"<< endl;

		for(unsigned long long i=2; i<=sqrt(ans);i++)
			if (ans % i == 0) {
				cout << i << endl;
			}
	}

	return 0;

}