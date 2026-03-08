import re
p = re.compile('[a-zA-Z]')

def solution(my_string):
    answer = 0
    
    for i in my_string:
        if p.match(i) == None:
            answer += int(i)
            
        
    return answer