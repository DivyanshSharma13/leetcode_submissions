# Write your MySQL query statement below
with cte as(
    Select id,temperature,recordDate,
    Lag(temperature) over(order by recordDate) as prev_temp,
    Lag(recordDate) over(order by recordDate) as prev_date
    from Weather
) Select id as `Id` from cte 
where temperature>prev_temp and
Datediff(recordDate,prev_date) = 1


