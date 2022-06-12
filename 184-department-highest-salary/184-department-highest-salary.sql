/* Write your T-SQL query statement below */

SELECT D.name as Department, 
       E.name as Employee, 
       E.salary as Salary
    FROM Employee E, Department D
    WHERE D.id = E.departmentId AND E.salary = (SELECT MAX(SALARY) 
                                      FROM Employee E2
                                      WHERE E2.departmentId = E.departmentId
                                    )
