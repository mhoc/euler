# The Super Fizzbuzz

Three stage problem which is actually impossible in some languages.

1. Implement fizzbuzz: For every number between 1 and 100, print "fizzbuzz" if it is divisible by 3 and 5, "fizz" if just 3, "buzz" if just 5, and the number if neither.
2. Implement fizzbuzz using the modulus operator if they didn't in step 1, or to not use the operator if they _did_ in Step 1.
3. Implement fizzbuzz as a single lexical expression in your language of choice.

Definition of a single lexical expression?

It depends on the language, but in general, I'd define an expression as anything that can fit on the right-hand side of an assignment statement.
If your "expression" can evaluate into something that looks like...

```
[ "1", "2", "fizz", "4", "buzz" "6" ...]
```

You're fine. If it can create that and actually _print_ the array as well, bonus points (hint: Python can).

Basically, I want to be able to say either

```
var x = <<whatever_you_create>>
x.forEach((thing) => console.log(thing))
```

I'm fairly confident that step 3 is impossible in some languages, but should actually be pretty easy in many functional languages.
It all depends on what kind of expressiveness power the language gives you.
That's why I like the question so much; it requires you to know the ins-and-outs of the languages you choose, as well as stretch your creativity to get it to fit into a single expression.
