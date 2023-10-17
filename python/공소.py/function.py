def print_string(*mytext): #가변 매개 변수 사용
    result = ' '
    for s in mytext:
        result = result + s
    return result
print(print_string('파이썬은','정말','재미있다')) #매개변수를 여러개 사용가능

def intsum(*ints):#5개 정수 가변 매개 변수로 전달해서 합 구하기
    sum=0
    for s in ints:
        sum +=s
    return sum
val=[]
for i in range(0,5,1):
    val.append(int(input()))
print(intsum(val[0],val[1],val[2],val[3],val[4]))

def func_multiple(x, y, z) : #함수 값 반환하기
    return z, y, x
a, b, c = func_multiple(1,2,3) 
print(a, b, c)
d = func_multiple(1,2,3)
print(type(d))
print(d)


def factorial(n) :#재귀함수
    if n == 0: 
        return 1 
    elif n > 0 :
        return factorial(n-1)*n
print(factorial(int(input())))

def print_hello(s) : #함수를 변수에 저장해서 호출하기
    print(s)
p = print_hello
p(123)
p('hello')

def plus(a, b) : #함수를 변수(list)에 저장해서 호출하기
    return a+b
def minus(a, b) : 
    return a-b
myfunc=[plus, minus] 
print(myfunc[0](1, 2))
print(myfunc[1](1, 2))

def sum(x) :
    x[0] = x[0] + 10
a = [5] 
sum(a)
print(a[0])
# x는 형식 매개변수
# a는 리스트로 가변 객체 # a는 실 매개변수

def spam(eggs) : 
    eggs.append(100)#여기에는 원래 호출된 ham이 들어감
    eggs=[2,3]#이건 함수 안에서 eggs라는 새로운 변수 정의
    eggs.append(1)#위에 정의된 eggs 리스트에 추가
    print(eggs)#새로 정의된 eggs출력
ham = [0] 
spam(ham) 
print(ham)#함수에 의해 100추가된 ham출력

#빌트인 함수들
a=[1,2,3]
print('Hello')  #print
print(type(0))  #type
print(sum(a)) #sum
print(max(1,2,3))  #max
print(min(1,2,3))  #min
print(len(a))   #len
print(sorted(a))#sorted
print(int('1')) #int
print(str(3))   #str
print(float(3)) #float


a=[]
for i in range(0,5): #5개 문자열 입력받기
    a.append(input())
def sort_list(n): #리스트 받아서 정렬
    n.sort(key=len)
sort_list(a)
print(a)

a=[]
def add(s): #입력인자 받아서 a리스트에 추가
    a.append(s)
for i in range(0,5): #5개 문자열 add함수 호출해서 받기
    add(input())
a.sort(key=len) #문자열 길이순으로 정렬
print(a)