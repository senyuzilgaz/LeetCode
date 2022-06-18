
SELECT W1.id 
    FROM Weather W1, Weather W2
    WHERE W1.temperature > W2.temperature AND DATEDIFF(day, W2.recordDate, W1.recordDate) = 1