#include "lib.h"
#include "classes.h"
#include "generateUsers.h"

void generateUsers() {
	Users users[1000];

	ofstream fout("users.txt");

	char name[5][10] = { "Tom", "Ryan" , "Scott", "Katie", "Sam" };

	srand(time(0x0));

	for (int i = 0; i < 1000; i++) {
		users[i].setName(name[rand() % 5]);
		users[i].setBalance(100 + rand() % 999999); // range from 100 to 1,000,000
		users[i].setPublicKey(rand() % 1000000); // sets a random public key

		cout << "User " << i + 1 << ":\n" << "Name: " << users[i].getName() << "\n";
		cout << "Balance: " << users[i].getBalance() << endl;
		cout << "Hashed public key: " << users[i].getPublicKey() << endl << endl; //gets a hashed value of a public key

		fout << "User " << i + 1 << ":\n" << "Name: " << users[i].getName() << "\n";
		fout << "Balance: " << users[i].getBalance() << endl;
		fout << "Hashed public key: " << users[i].getPublicKey() << endl << endl; //gets a hashed value of a public key
	}
}