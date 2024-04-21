import { readFileSync } from "node:fs";

const input = readFileSync(`${__dirname}/../inputs/1667.txt`, "utf8");
// const input = readFileSync("/dev/stdin", "utf8");

const lines = input.split("\n").filter(line => line.length > 0);
// Eu poderia deixar só um map normal, mas aí precisaria de um for aninhado e a complexidade iria de n para n^2
const words = lines.flatMap(line => line.trim().split(/(?:\s|\t)+/g));

let output = "";

function print(): void {
	console.log(output)
	output = ""
}

for (const word of words) {
	if (word[0] === "<") {
		switch (word) {
			case "<br>":
				print();
				break;
			case "<hr>":
				if (output !== "") {
					print();
				}

				output = "-".repeat(80);
				print();

				break;
			default:
				throw new Error("Tag inválida. As únicas tags aceitas são <br> e <hr>.");
		}

		continue;
	}

	if (output.length + (word.length + 1) > 80) {
		print();
	}

	if (output !== "") {
		output += " ";
	}

	output += `${word}`;
}

print();
console.log("\n");
