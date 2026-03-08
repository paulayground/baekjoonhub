def solution(cipher, code):
    answer = ''
    
    for i, n in enumerate(cipher, 1):
        if i % code == 0:
            answer += n
        
    return answer