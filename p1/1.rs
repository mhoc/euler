


// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

fn main() {

	let mut sum = 0i;

	for iter in range(0,1000) {
		if iter % 3 == 0 {
			sum += iter;
		} else if iter % 5 == 0 {
			sum += iter;
		}
	}

	println!("{}", sum);

}
