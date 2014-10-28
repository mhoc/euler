
package main

import (
  "fmt"
  "math"
)

func isPrime(n int) bool {

  if (n <= 1) {
    return false
  }
  if (n == 2) {
    return true
  }
  if (n % 2 == 0) {
    return false
  }

  for i := 3; i <= int(math.Ceil(math.Sqrt(float64(n)))); i += 2 {
    if n % i == 0 {
      return false
    }
  }

  return true

}

func main() {

  max := 2000000
  sum := 0
  for i := 0; i < max; i++ {
    fmt.Println(i)
    if isPrime(i) {
      sum += i
    }
  }

  fmt.Println(sum)

}
