import { readFileSync } from "node:fs";

const input = readFileSync(`${__dirname}/../inputs/2135.txt`, "utf8");
// const input = readFileSync("/dev/stdin", "utf8");

const lines = input.split("\n");

for (let j = 0; j < lines.length; j += 2) {
	if (j !== 0) {
		console.log();
	}

	if (!lines[j]) {
		break;
	}

	const k = Math.ceil(j / 2) + 1;
	console.log(`Instancia ${k}`);

	const numbersToProcess = Number(lines[j]);

	let firstMatchingNumber: number | undefined;
	let sum = 0;

	let numbersProcessed = 0;
	for (const numberStr of lines[j + 1].split(" ")) {
		if (numbersProcessed > numbersToProcess) {
			break;
		}

		const currentNumber = Number(numberStr);
		if (sum === currentNumber) {
			firstMatchingNumber = currentNumber;
			break;
		}

		sum += currentNumber;
		numbersProcessed += 1;
	}

	console.log(firstMatchingNumber === undefined ? "nao achei": firstMatchingNumber);
}
