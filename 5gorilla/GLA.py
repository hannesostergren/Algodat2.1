m = {}
p = []
starCost = -4
cost = []
queries = []
Q = 0
words = []

with open("data/sample/1.in") as f:
    chars = f.readline().strip().split(' ')
    cost = []
    queries = []
    k = len(chars)
    for i in range(k):
        cost.append(f.readline().strip().split(' '))
    Q = int(f.readline())
    for i in range(Q):
        queries.append(f.readline().strip().split(' '))
labelToIndex = {v : k for k, v in enumerate(chars)}

    
def opt(i, j):
    if len(j) == 0:
        words[0] = '*' + words[0][len(j)+1:]
        return starCost * len(i)
    if len(i) == 0:
        words[1] = '*' + words[1][len(i)+1:]
        return starCost * len(j)
    else:
        return max(
                int(cost[labelToIndex[i[-1]]][labelToIndex[j[-1]]]) + opt(i[:-1],j[:-1]),
                starCost + opt(i, j[:-1]),
                starCost + opt(i[:-1], j)
                )



def main():
    for query in queries:
        words = query.copy()
        s = query[0]
        t = query[1]
        print(opt(s, t))
        print(s, t)



if __name__ == "__main__":
    main()