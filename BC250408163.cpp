#include <iostream>
using namespace std;

// function to check if a number is a prime

bool isPrime(int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0)
		return false;
	}
	return true;
}

int main()
{
	// Hardcoded Student ID and Name
	string studentID = "BC250408163";
	string name = "Abdul Rehmaan";
	
	cout << studentID << " belongs to " << name << endl;
	
	// Counters
	int zeroCount = 0, evenCount = 0, oddCount = 0, primeCount = 0;
	
	// Loop through each character in the ID
	for (int i = 0; i < studentID.length(); i++) {
		char ch = studentID[i];
		if (isdigit(ch)) {
			int digit = ch - '0';  // convert character to int
			
			if (digit == 0) {
				cout << digit << " zero found in id" << endl;
				zeroCount++;
			}
			else if (isPrime(digit)) {
				cout << digit << " is a prime number " << endl;
				primeCount++;
			}
			else if (digit % 2 == 0) {
				cout << digit << " is even number " << endl;
				evenCount++;
			}
			else {
				cout << digit << " is an odd number " << endl;
				oddCount++;
			}
		}
	}
	
	// Display summary
	
	cout << endl;
	cout << " Total Counts: " << endl;
	cout << " Zeros: " << zeroCount << endl;
	cout << " Even numbers: " << evenCount << endl;
	cout << " Odd numbers: " << oddCount << endl;
	cout << " Prime numbers: " << primeCount << endl;
	
	return 0;
	
	
}
