
def prime(n)
  if n == 2
    return true
  end
  for i in 2..(n-1)
    if n % i == 0
      return false
    end
  end
  return true
end

iterator = 1
counter = 0
while counter < 10001
  if prime(iterator += 1)
    puts iterator
    counter += 1
  end
end
