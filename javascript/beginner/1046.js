const {readFileSync} = require('fs');

const [start, end] = readFileSync('/dev/stdin', 'utf8').split(' ').map(digit => Number(digit));

let duration;
if (end === start) {
 duration = 24;
} else if (end < start) {
 duration = 24 - start + end;
} else {
 duration = end - start;
}

console.log(`O JOGO DUROU ${duration} HORA(S)`);
