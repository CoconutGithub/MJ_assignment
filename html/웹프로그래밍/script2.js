const date = new Date()
document.writeln(date.getFullYear())
document.writeln(date.getMonth()+1)
document.writeln(date.getDate())
document.writeln(date.getHours())
document.writeln(date.getMinutes())
document.writeln(date.getSeconds())

const a =Number(prompt('첫 번째 숫자,'))
const b =Number(prompt('두 번째 숫자,'))
if(a>b){
    alert('첫 번째로 입력한 숫자가 더 큽니다.')
}
else if (a==b){
    alert('두 숫자가 같습니다.')
}
else{
    alert('두 번째로 입력한 숫자가 더 큽니다.')
}
        
const c = Number(prompt('숫자를 입력해주세요.'))
if(c%2==0){
    alert('입력한 숫자는 짝수입니다.')
}
else {
    alert('입력한 숫자는 홀수입니다.')
}

const date2 = new Date()
const hour = date2.getHours()
switch(true){
    case hour<11:
        alert("아침 먹을 시간입니다.")
        break
    case hour<15:
        alert("점심 먹을 시간입니다.")
        break
    default:
        alert("저녁 먹을 시간입니다.")
        break
}

const rawInput = prompt('태어난 해를 입력해주세요.', '')
const year = Number(rawInput)
const e = year % 12
let result
if (e === 0) { result = '원숭이' }
else if (e === 1) { result = '닭' }
else if (e === 2) { result = '개' }
else if (e === 3) { result = '돼지' }
else if (e === 4) { result = '쥐' }
else if (e === 5) { result = '소' }
else if (e === 6) { result = '호랑이'}
else if (e === 7) { result = '토끼' }
else if (e === 8) { result = '용' }
else if (e === 9) { result = '뱀' }
else if (e === 10) { result = '말' }
else if (e === 11) { result = '양' }
alert(`${year}년에 태어났다면 ${result} 띠입니다.`)

const rawinput2 = prompt("태어난 해를 입력해주세요.")
const year2 =Number(rawinput2)
let e2 = year%10
let 간
if (e2 == 0) { 간 = '경' }
else if (e2 == 1) { 간 = '신' }
else if (e2 == 2) { 간 = '임' }
else if (e2 == 3) { 간 = '계' }
else if (e2 == 4) { 간 = '갑' }
else if (e2 == 5) { 간 = '을' }
else if (e2 == 6) { 간 = '병'}
else if (e2 == 7) { 간 = '정' }
else if (e2 == 8) { 간 = '무' }
else if (e2 == 9) { 간 = '기' }
e2 = year%12
let 띠
if (e2 == 0) { 띠 = '신' }
else if (e2 == 1) { 띠 = '유' }
else if (e2 == 2) { 띠 = '술' }
else if (e2 == 3) { 띠 = '해' }
else if (e2 == 4) { 띠 = '자' }
else if (e2 == 5) { 띠 = '축' }
else if (e2 == 6) { 띠 = '인'}
else if (e2 == 7) { 띠 = '묘' }
else if (e2 == 8) { 띠 = '진' }
else if (e2 == 9) { 띠 = '사' }
else if (e2 == 10) { 띠 = '오' }
else if (e2 == 11) { 띠 = '미' }
alert(`${year2}년은 ${간}${띠}년 입니다.`)