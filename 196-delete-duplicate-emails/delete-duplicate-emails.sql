# Write your MySQL query statement below
with ranked as (
    select id, email,
    ROW_NUMBER() over(
        partition by email
        order by id
    )as rnk from Person
)Delete from Person where id in(
    Select id from ranked where rnk>1
);