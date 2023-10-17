#sys모듈
import sys

print("version = ",sys.version) #파이썬 버전
print("platform = ",sys.platform)#OS값
print("path = ",sys.path)#모듈 검색을 위한 폴더 값

#time
import time

t=time.time()#1970년 이후 지난 시간을 초로 출력
#소수점은 나노 초 까지 표현

print(t)
print(time.ctime(t))#년도, 월, 일, 요일, 시간으로 변환 출력
print(time.localtime(t))#struct_time 형식으로 변환 출력

start = time.time()
for a in range(100):
    print(a, end=',')
print()
end = time.time()
print(end-start)

#random
import random

for i in range(5):
    print(random.random())#난수 생성

for i in range(5):
    print(random.randint(1,10))#1~10중의 정수 난수 생성

for i in range(5):
    print(random.uniform(1,10))#1~10중의 실수 난수 생성

food=["짜장면","짬뽕","탕수육","군만두"]
print(random.choice(food))#푸드 리스트에서 하나를 무작위 선택
print(random.sample(food,2))#푸드 리스트에서 2개를 선택
random.shuffle(food)#푸드 리스트의 요소를 무작위로 섞음
print(food)

#statistics
import statistics

score = [30, 40, 50, 60, 70, 90] 
print(statistics.mean(score)) #평균
print(statistics.median(score)) #중간값
print(statistics.stdev(score)) #표준편차
print(statistics.variance(score)) #분산

#turtle
import turtle as t

t.shape("turtle")
t.right(60) 
t.forward(100) 
t.right(120) 
t.forward(100) 
t.right(120) 
t.forward(100) 
t.done()

t.shape("turtle")
for a in range(5) :
      t.forward(150)
      t.right(144)
t.done()

t.shape("turtle")
t.pensize(3) 
t.color("blue") 
t.bgcolor("green") 
t.fillcolor("yellow") 
t.begin_fill() 
t.circle(100)
t.end_fill()
t.done()

#원그리기
r=int(input())
t.circle(r)

#난수 생성해서 평균, 표준편차 구하기
import random
import statistics

ran=[]
for i in range(10):
    ran.append(random.randint(1,100))
print(ran)
print(statistics.mean(ran))
print(statistics.stdev(ran))