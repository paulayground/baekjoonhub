def solution(sides):
    sides.sort()
    answer = 1 if sides[-1] < sum(sides[:2]) else 2
    return answer