# Write your MySQL query statement below
  Select d.name as `Department`, e.name as `Employee`, e.salary as `Salary`  from employee e
  Left join Department d on d.id = e.departmentId 
  WHERE e.salary = (
    SELECT MAX(e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
);
    