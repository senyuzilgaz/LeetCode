CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        SELECT ISNULL(
            (SELECT DISTINCT(E2.salary)
                FROM (SELECT E.salary as salary, 
                        DENSE_RANK() OVER (ORDER BY E.salary DESC) as rank 
                        FROM Employee E) E2
                WHERE E2.rank = @N)
            , NULL
            )
    );
END