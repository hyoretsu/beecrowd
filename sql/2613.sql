SELECT
	m.id,
	m.name
FROM
	movies AS m,
	prices AS p
WHERE
	p.id = m.id_prices
	AND p.value < 2.00;
