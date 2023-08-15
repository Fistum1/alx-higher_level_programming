--List all records name is not null order by score
SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;

