/* Write your T-SQL query statement below */
SELECT DISTINCT V.author_id id
    FROM Views V
    WHERE V.author_id in (SELECT V2.viewer_id FROM Views V2 WHERE V2.article_id = V.article_id
                         )