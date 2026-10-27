CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      Select DISTINCT salary from Employee e 
      WHERE N-1 = (SELECT COUNT(DISTINCT salary) from Employee e1
                    WHERE e1.salary>e.salary)

  );
END