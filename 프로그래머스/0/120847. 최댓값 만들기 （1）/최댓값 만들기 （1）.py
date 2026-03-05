def solution(numbers):
    answer = numbers
    answer.sort(reverse=True)
    
    return answer[0] * answer[1]