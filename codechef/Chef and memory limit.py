for distractions in range(int(input())):
    wife = int(input())
    life = list(map(int, input().split()))
    goals = life[0]
    for aim in range(wife - 1):
        if life[aim] < life[aim + 1]:
            goals += life[aim + 1] - life[aim]
    print(goals)
