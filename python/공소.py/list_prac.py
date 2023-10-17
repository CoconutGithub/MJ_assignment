a = [ x ** 2 for x in range(10) ]
print(a)
a = [ x for x in range(10) if x % 2 == 0 ]
print(a)

a=['Life', 'is', 'too', 'short'] 
sum=''
for i in a:
    sum = sum +' '+i

print(sum)

a=[]
for i in range (0,5,1): 
    a.append(input())
a.sort()
print(a)

a=[]
for i in range (0,5,1): 
    a.append(input())
max=a[0]
min=a[0]
for i in range(0,len(a),1):
    if a[i]>=max:
        max=a[i]
    if a[i]<min:
        min=a[i]
print(max)
print(min)

a, b = 12, 34
print(a, b)
a, b = b, a
print(a, b)
score = (88, 95, 70, 100, 99)
#score[0] = 100                   # 튜플은 값의 변경이 불가함
L_score = list(score)                # list()는 리스트로 변환해줌
L_score[0] = 100
print(L_score)

dic = { 'boy' : '소년', 'school': '명지', 'lecture' : 'python' }
print(dic)
dic['boy'] = '남자아이'
dic['girl'] = '여자아이'
print(dic)
print(dic.keys())
print(dic.values())
print(dic.items())
del dic['lecture']               # 삭제
print(dic)

sentence = """by the rivers of babylon, there we sat down yeah we wept,
when we remember zion.
when the wicked carried us away in captivity required from us a song
now how shall we sing the lord’s song in a strange land"""

alphabet = dict()                  # 빈 사전을 생성
for c in sentence :
    if c.isalpha() == False :
        continue
    c = c.lower()
    if c not in alphabet :
        alphabet[c] = 1
    else :
        alphabet[c] += 1
print(alphabet)
alphabet1=sorted(alphabet.items())
print(alphabet1)

a = [1, 2, 3]
b = [3, 4, 5]
c = a + b
print( c )

d=[]#중복 요소 리스트
c=a#중복 제거 리스트 합치기
for i in range (0,len(b),1):
    if b[i] not in c:
        c.append(b[i])
    elif b[i] not in d:
        d.append(b[i])
print(c)
print(d)
