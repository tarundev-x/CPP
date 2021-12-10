res=[]
grade=[]
if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        res.append([name,score])
        grade.append(score)#calculation of 2nd lowest
        
    grade=sorted(set(grade))
    m=grade[1]
    name=[]
    for val in res:
        if m==val[1]:
            name.append(val[0])
            
    name.sort()
    for i in name:
        print(i)
    
