#include "lib.h"
#include "hash.h"
#include "generateUsers.h"

int main() {
	cout << "Press any key to generate 1000 users...\n";
	_getch();

	generateUsers();
}