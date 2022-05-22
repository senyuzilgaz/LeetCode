/* Write your T-SQL query statement below */
SELECT s.Score,
DENSE_RANK() OVER (ORDER BY s.Score DESC) as Rank
FROM Scores s