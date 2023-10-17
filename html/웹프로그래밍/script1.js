const target="xaaaz"
const regExp = /a+(?<Z>z)?/dg;
const m1 = regExp.exec(target);
console.log(m1);
console.log(regExp.lastIndex);

const Kim = ["ABC","Def","Ghi"];
console.log(Kim[Kim.length-1]);
console.log(Kim.slice(-1)[0]);
console.log(Kim.reverse()[0]);
console.log(Kim.at(-1));
console.log(Kim.at(-2));
console.log(Kim.at(-4));

const original = [1,4];
const spliced = original.toSpliced(1,2,3,5);//인덱스 1부터 2개 삭제 3,5 추가
console.log(original);//1,4
console.log(spliced);//1,3,5
        
alert("Hello World")

console.log(`표현식 273+52의 값은 ${273+52}입니다!`)

console.log(2+2-2*2/2*2)
console.log(2-2+2/2*2+2)

const pi=3.141592
console.log(pi)
const r =10
console.log(r)
console.log(2*pi*r)
console.log(pi*r*r)

let number =10
console.log(number)
number++
number++
console.log(number)
console.log(number)
number--
number--
console.log(number)

const rawinput=prompt('inch단위의 숫자를 입력해주세요.')
const inch = Number(rawinput)
const cm = inch*2.54
console.log(`${inch}inch는 ${cm}cm입니다`)        