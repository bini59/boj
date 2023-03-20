def solution(participant, completion):
    participant.sort()
    completion.sort()
    i = 0
    while True:
        if i == len(completion):
            answer = participant[i]
            break
        if participant[i] != completion[i]:
            answer = participant[i]
            break
        i += 1

    return answer