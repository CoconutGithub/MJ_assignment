import matplotlib.pyplot as plt
# 0~10까지 x, y에 대입 
x=y=[i for i in range(0, 11)]
plt.plot(x, y) 
plt.show()

import numpy as np
import matplotlib.pyplot as plt
# 사인곡선에 해당하는 x와 y 좌표를 계산 
x = np.arange(0, 3 * np.pi, 0.1)
y = np.sin(x)
# matplotlib를 사용해 점들을 표시 
plt.plot(x, y)
plt.show()

#기상청 사이트에서 도시별 날씨 웹크롤링 해오는 프로그램
from urllib import request
import bs4
target = request.urlopen("https://www.weather.go.kr/w/index.do")
soup = bs4.BeautifulSoup(target, "html.parser")
for city in soup.select("location") :
    name = city.select_one("city").string
    wf = city.select_one("wf").string
    tmn = city.select_one("tmn").string
    tmx = city.select_one("tmx").string 
    print(name, ': ', wf, '(', tmn, '~', tmx, ')')

#원 반지름 받아서 면적 출력
import numpy as np
r=int(input())
circle=np.pi*r*r
print(circle)

#x는 1에서 10까지 1씩 증가하는 정수이고, y는 x의 거듭제곱 그래프
import matplotlib.pyplot as plt

# x=[]
# y=[]
# for i in range(11):
#     x.append(i)
#     y.append(i*i)

#위 프로그램과 같음
x=[i for i in range(0,11)]
y=[i*i for i in range(0,11)]

plt.plot(x, y) 
plt.show()