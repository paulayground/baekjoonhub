def solution(array):
    answer = []
    
    max = 0
    index = 0
    for i, n in enumerate(array):
        if n > max:
            max = n
            index = i
            
    
    return [max, index]