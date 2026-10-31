# Write your MySQL query statement below
WITH ranked AS(
    Select d.name as `Department`,e.name as `Employee`,e.salary as `Salary`,
    Dense_Rank() over(
        Partition By e.departmentId
        order by e.salary  Desc
    ) as rnk
    from employee e Left join Department d
    on d.id = e.departmentId 
)Select Department,Employee,Salary from ranked where rnk<=3