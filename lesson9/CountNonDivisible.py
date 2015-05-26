def solution(A):
  
    A_max = max(A)
  
    count = {}
    for element in A:
        if element not in count:
            count[element] = 1
        else:
            count[element] += 1
  
    divisors = {}
    for element in A:
        divisors[element] = set([1, element])
  
    # start the Sieve of Eratosthenes
    divisor = 2
    while divisor*divisor <= A_max:
        element_candidate = divisor
        while element_candidate  <= A_max:
            if element_candidate in divisors and not divisor in divisors[element_candidate]:
                divisors[element_candidate].add(divisor)
                divisors[element_candidate].add(element_candidate//divisor)
            element_candidate += divisor
        divisor += 1
  
    result = [0] * len(A)
    for idx, element in enumerate(A):
        result[idx] = (len(A)-sum([count.get(divisor,0) for divisor in divisors[element]]))
  
    return result
