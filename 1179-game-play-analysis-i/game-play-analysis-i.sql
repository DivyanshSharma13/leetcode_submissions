# Write your MySQL query statement below
with ranked as(
    Select player_id, event_date as `first_login`,
    Row_number() over(
        Partition by player_id
        order by event_date
    )as rnk from Activity
)
Select player_id, first_login from ranked where rnk=1;