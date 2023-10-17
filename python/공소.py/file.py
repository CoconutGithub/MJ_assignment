f = open("assignment.txt","w")
f.write('Hello World\n')
f.write('I love you\n')
f.close()

f = open("hello.txt", "r")
contents = f.read()
print(contents)
f.close()

lines=["we'll find a way we always have - Interstellar\n",
         "I'll find you and I'll kill you - Taken\n",
         "I'll be back - Terminator 2\n"]
with open ('movie_quotes.txt','w')as file:
    file.writelines(lines)#리스트에 있는 문장들을 한줄씩 파일에 작성
    #with open으로 열면 파일을 닫지 않아도 블럭이 끝나면 자동으로 닫힘

import shutil
shutil.copy("hello.txt","hello2.txt")#헬로파일을 헬로2파일에 복사

import os
os.mkdir("log")#log라는 파일을 생성

folder='.'
file_list=os.listdir(folder)
print(file_list)#폴더 안에 있는 파일들의 리스트를 출력
#'.'은 현재 폴더를 의미

import os
import random, datetime
if not os.path.isdir("log") : #로그라는 파일이 존재하지 않으면 생성
    os.mkdir("log")
if not os.path.exists("log/count_log.txt") :#로그카운터 파일이 존재하지 않으면 생성하고 "기록시작"을 작성함
     f = open("log/count_log.txt", "w") 
     f.write("기록 시작\n")
     f.close()
with open("log/count_log.txt", "a") as f : #현재의 시간과 랜덤한 값을 기존의 문서에 추가로 작성함
    for i in range(1, 11) :
        stamp = str(datetime.datetime.now())
        value = random.random() * 1000000
        log_line = stamp + "\t" + str(value) + "값이 생성됨" + "\n" 
        f.write(log_line)

with open("log/count_log.txt", "r") as f : 
    text = f.read()
    word_list = text.split(" ") # 빈 칸 기준으로 단어를 분리 
    line_list = text.split("\n") # 한 줄씩 분리
print("총 글자의 수: ", len(text))
print("총 단어의 수: ", len(word_list)) 
print("총 줄의 수: ", len(line_list))

file_name = input("파일 이름을 입력하시오: ") 
word_name = input("찾을 단어를 입력하시오: ")
with open(file_name, "r") as f : #입력한 파일에서 찾을 단어를 입력받아서 몇개가 있는지 출력
    text = f.read()
    text = text.lower()
    pos = text.find(word_name) 
    count = 0
    while pos != -1 :
        count += 1
        pos = text.find(word_name, pos+1)
print("개수는", count)

import zipfile
def compressZip(zipname, filename) :#입력받은 파일을 압축함
    print("[%s] -> [%s] 압축...." %(filename, zipname)) 
    with zipfile.ZipFile(zipname, 'w') as ziph :
        ziph.write(filename) 
    print("압축이 끝났습니다")
filename = input("파일이름을 입력하시오: ") 
zipname = filename
compressZip(zipname, filename)

#파일 이름과 변경할 단어를 입력받아 변경하는 프로그램
filename=(input("파일 이름을 입력하세요:"))
wordname=(input("변경할 단어를 입력하세요:"))
with open(filename,"r")as f :
    text= f.read()
    new = text.replace(wordname,"111")
print(new)

#zip파일의 압축을 푸는 프로그램
import zipfile
def decompressZip(zipname, filename) :#입력받은 파일을 압축함
    print("[%s] -> [%s] 압축해제...." %(zipname, filename)) 
    with zipfile.ZipFile(filename, 'w') as ziph :
        ziph.extractall(zipname) 
    print("압축해제가 끝났습니다")
zipname = input("파일이름을 입력하시오: ") 
filename = zipname

decompressZip(zipname, filename)

#파일에서 알파벳 개수를 구하는 프로그램
filename=(input("파일 이름을 입력하세요:"))
with open(filename, "r") as f : 
     text = f.read()
     text = text.lower()
     count=0
     for ch in text:
          if ch.isalpha():
               count+=1
print("알파벳의 개수는",count)
          