SELECT valor, COUNT(valor) AS frequencia
FROM dados
GROUP BY valor
ORDER BY frequencia DESC
LIMIT 1;
