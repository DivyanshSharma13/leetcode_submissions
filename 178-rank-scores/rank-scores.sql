# Write your MySQL query statement below
WITH ranked AS(
    SELECT score,
    DENSE_RANK() OVER(
        ORDER BY score DESC
    ) AS `rank` FROM Scores
) SELECT score, `rank` FROM ranked