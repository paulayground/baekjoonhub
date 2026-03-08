def solution(numbers):
    
    numbers.sort()
    
    c1 = numbers[0] * numbers[1]
    c2 = numbers[-1] * numbers[-2]
    answer = max(c1, c2)
    
    return answer