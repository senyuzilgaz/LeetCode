SELECT ISNULL(
    (SELECT DISTINCT(E2.salary) as SecondHighestSalary 
        FROM (SELECT E.salary as salary, 
                DENSE_RANK() OVER (ORDER BY E.salary DESC) as rank 
                FROM Employee E) E2
        WHERE E2.rank = 2)
    , NULL
    ) as SecondHighestSalary
    
