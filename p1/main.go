
package main

import (
	"fmt"
)

func main() {
	sum := 0
	for iter := 0; iter < 1000; iter++ {
		if iter % 3 == 0 {
			sum += iter
		} else if iter % 5 == 0 {
			sum += iter
		}
	}
	fmt.Println(sum)	
}
