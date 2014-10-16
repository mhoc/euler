
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

var NUM = 600851475143

/** Returns a list of factors of a number */
var factor = function(number) {

  var results = []

  for (var i = 1; i < Math.sqrt(number); i++) {
    if (number % i == 0) {
      results.push(i)
    }
  }

  return results

}

/** Determines if a number is prime */
var prime = function(number) {

  for (var i = 2; i < number / 2; i++) {
    if (number % i == 0) {
      return false
    }
  }
  return true

}

var nfactors = factor(NUM)
var largest = 0
nfactors.forEach(function(n) {
  if (prime(n) && n > largest) {
    largest = n
  }
})

console.log(largest)
