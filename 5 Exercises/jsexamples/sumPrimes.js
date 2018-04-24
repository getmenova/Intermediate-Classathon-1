function isPrime(val) {
	for (var i = 2; i < val; i++) {
		if (val % i === 0) {
			return false;
		}
	}
	return true;
}

function sumPrimes(num) {
	var answer = 0;
	//loop through all numbers from 2 to input value
	for (var i = 2; i <= num; i++) {
		//sum only prime numbers, skip all others
		if (isPrime(i)) {
			answer += i;
		}
	}
	return answer;
}
sumPrimes(666); //36888