SELECT C.name as Customers
    FROM Customers C
    WHERE C.id not in (SELECT O.customerId 
                        FROM Orders O)
