def solution(my_string):
#     answer = []
#     for i in my_string:
#         if i.isdigit():
#             answer.append(int(i))
            
#     answer.sort()
    
    answer = sorted(int(i) for i in my_string if i.isdigit())
    return answer