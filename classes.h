#pragma once
#include "lib.h"
#include "hash.h"

class Users {
public:
	string name = "";
	string public_key = "";
	int balance = 0;

	//setters
	void setName(char* i) { name = i; }
	void setBalance(int i) { balance = i; }
	void setPublicKey(int i) { public_key = i; }

	//getters
	string getName() { return name; }
	int getBalance() { return balance; }
	string getPublicKey() { return hash(public_key); } // hashes a public key
};