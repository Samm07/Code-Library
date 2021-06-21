def count_reversals(exp):

    # print(exp)
    if(len(exp)%2):
        return -1

    s=[]

    for i in range(len(exp)):
        if exp[i]=='}' and len(s):
            if s[-1]=='{':
                s.pop(-1)
            else:
                s.append(exp[i])

        else:
            s.append(exp[i])

    x=s.count('{')
    y=s.count('}')

    return (x//2)+(x%2!=0) + (y//2)+(y%2!=0)


print(count_reversals('}{{}}{{{'))
