import { readFileSync } from "node:fs";

const input = readFileSync(`${__dirname}/../inputs/3068.txt`, "utf8");
// const input = readFileSync("/dev/stdin", "utf8");

const lines = input.split("\n");

function parseNumber(text: string): number {
	let result = Number(text);

	if (Number.isNaN(result)) {
		throw new Error(`"${text}" não é um número.`);
	}

	return result;
}

let i = 0;
let testN = 1;
while (true) {
	const testStr = `[Teste ${testN}]`;

	const farmCoordinates = lines[i].trim().split(" ");
	if (farmCoordinates.length !== 4) {
		throw new Error(`${testStr} Você deve começar enviando exatamente 2 coordenadas separadas por espaço.`);
	}

	const [x1, y1, x2, y2] = farmCoordinates.map(parseNumber);
	if (x1 === 0 && y1 === 0 && x2 === 0 && y2 === 0) {
		break;
	}

	// if (y2 <= 0 || y1 < y2 || y1 > 10000 || x1 <= 0 || x2 < x1 || x2 > 10000) {
	// 	throw new Error(`${testStr} Coordenadas da fazenda inválidas.`);
	// }

	i += 1;

	const meteoriteN = parseNumber(lines[i]);
	// if (meteoriteN <= 0 || meteoriteN > 10000) {
	// 	throw new Error(`${testStr} Número de meteoritos inválido.`);
	// }

	i += 1;

	let struckMeteorites = 0;
	if (meteoriteN > 0){
		for (let j = i; j < i + meteoriteN; j++) {
			const coordinates = lines[j].trim().split(" ");
			if (coordinates.length !== 2) {
				throw new Error(`${testStr} Você deve enviar apenas 1 par de números por coordenada.`);
			}

			const [x, y] = coordinates.map(parseNumber);
			// if (x <= 0 || x > 10000 || y <= 0 || y > 10000) {
			// 	throw new Error(`${testStr} O ${j + 1}º meteorito contém uma coordenada inválida.`);
			// }

			if (x >= x1 && x <= x2 && y <= y1 && y >= y2) {
				struckMeteorites += 1;
			}
		}
	}

	console.log(`Teste ${testN}`);
	console.log(struckMeteorites);

	i += meteoriteN;
	testN += 1;
}
