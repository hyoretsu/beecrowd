WITH emp_salario AS (
	SELECT
		emp.matr,
		COALESCE(SUM (venc.valor), 0) AS valor
	FROM
		empregado AS emp
		LEFT JOIN emp_venc ON emp_venc.matr = emp.matr
		LEFT JOIN vencimento AS venc ON venc.cod_venc = emp_venc.cod_venc
	GROUP BY
		emp.matr
),
emp_desconto AS(
	SELECT
		emp.matr,
		COALESCE(SUM (dsc.valor), 0) AS valor
	FROM
		empregado AS emp
		LEFT JOIN emp_desc ON emp_desc.matr = emp.matr
		LEFT JOIN desconto AS dsc ON dsc.cod_desc = emp_desc.cod_desc
	GROUP BY
		emp.matr
)
SELECT
	dep.nome AS "Departamento",
	emp.nome AS "Empregado",
	emp_salario.valor AS "Salario Bruto",
	emp_desconto.valor AS "Desconto",
	emp_salario.valor - emp_desconto.valor AS "Salario Liquidoaws"
FROM
	empregado AS emp
	JOIN divisao AS div ON div.cod_divisao = emp.lotacao_div
	JOIN departamento AS dep ON dep.cod_dep = div.cod_dep
	LEFT JOIN emp_salario ON emp_salario.matr = emp.matr
	LEFT JOIN emp_desconto ON emp_desconto.matr = emp.matr
ORDER BY
	"Salario Liquidoaws" DESC;
