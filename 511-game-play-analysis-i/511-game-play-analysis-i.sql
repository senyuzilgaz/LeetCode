/* Write your T-SQL query statement below */
SELECT 
    DISTINCT player_id, 
    (SELECT MIN(event_Date) FROM Activity A2 WHERE A2.player_id = A1.player_id )AS first_login
FROM Activity A1
