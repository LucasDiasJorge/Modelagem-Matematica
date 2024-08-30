SELECT 
    AVG(valor) AS mediana
FROM (
    SELECT 
        valor,
        ROW_NUMBER() OVER (ORDER BY valor) AS row_num,
        COUNT(*) OVER () AS total_count
    FROM valores
) AS subquery
WHERE row_num IN ((total_count + 1) / 2, (total_count + 2) / 2);
