#include <iostream>
using namespace std;

// Function to check if a digit is a prime
bool isPrime(int digit) {
	if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
		return true;
	else
		return false;
}

// Function to count prime digits
int countPrimeDigits(long studentID) {
	int count = 0;
	while (studentID > 0) {
		int digit = studentID % 10;
		if (isPrime(digit))
			count++;
		studentID /=10;
	}
	return count;
}

// Function to some prime digits
int sumPrimeDigits(long studentID) {
	int sum = 0;
	while (studentID > 0) {
		int digit = studentID % 10;
		if (isPrime(digit))
			sum += digit;
		studentID /= 10;
	}
	return sum;
}

// Function to find average of prime digits
double averagePrimeDigits(long studentID) {
	int sum = 0, count = 0;
	while (studentID > 0) {
		int digit = studentID % 10;
		if (isPrime(digit)) {
			sum += digit;
			count++;
		}
		studentID /= 10;
	}
	if (count ==0)
		return 0.0;
	return (double)sum / count;
}

//Function to find maximum prime digit
int maxPrimeDigit(long studentID) {
	int maxDigit = -1;
	while (studentID > 0) {
		int digit = studentID % 10;
		if (isPrime(digit) && digit > maxDigit)
			maxDigit = digit;
		studentID /= 10;
	}
	return maxDigit;
}

// Function to find minimum prime digit
int minPrimeDigit(long studentID) {
	int minDigit = 10;
	while (studentID > 0) {
		int digit = studentID % 10;
		if (isPrime(digit) && digit < minDigit)
			minDigit = digit;
		studentID /= 10;
	}
	if (minDigit == 10)
		return -1;
	return minDigit;
}

// Main Function
int main() {
	cout << "Name: Abdul Rehmaan" << endl;
	cout << "Your VU Student ID: BC250408163" << endl;
	
	long studentID = 250408163;
	cout << "Numerical part of ID: " << studentID << endl;
	
	cout << "\nPrime digits in the ID: ";
	long temp = studentID;
	while (temp > 0) {
		int digit = temp % 10;
		if (isPrime(digit))
			cout << digit << " ";
		temp /= 10;
	}
	cout << endl;
	
	int count = countPrimeDigits(studentID);
	int sum = sumPrimeDigits(studentID);
	double avg = averagePrimeDigits(studentID);
	int maxP = maxPrimeDigit(studentID);
	int minP = minPrimeDigit(studentID);
	
	cout << "\nTotal number of prime digits: " << count << endl;
	cout << "Sum of prime digits: " << sum << endl;
	cout << "Average of prime digits: " << avg << endl;
	cout << "Maximum prime digits: " << maxP << endl;
	cout << "Minimum prime digit: " << minP << endl;
	
	return 0;
}
