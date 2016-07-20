# Stage 3
# This relies on a few very specific features of the python language to work
# 1. Comprehensions as a single expression! :)
# 2. print() being an expression (in python 2 it was a statement and thus wouldn't work)
# 3. Dictionary merging syntax (**) available only in python 3.5
# 4. The fact that later items listed in a dictmerge override earlier items
{
    print(p) for x, p in
    {
        **{ x: x for x in range(100) },
        **{ x: "fizz" for x in range(3, 100, 3) },
        **{ x: "buzz" for x in range(5, 100, 5) },
        **{ x: "fizzbuzz" for x in range(15, 100, 15) }
    }.items()
}
