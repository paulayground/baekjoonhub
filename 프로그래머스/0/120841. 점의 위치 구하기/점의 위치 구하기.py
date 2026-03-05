def solution(dot):
    x,y = dot
    
    if 0 < x and 0 < y: 
        answer = 1
    elif 0 > x and 0 < y: 
        answer = 2
    elif 0 > x and 0 > y: 
        answer = 3
    else:
        answer = 4
    
    return answer