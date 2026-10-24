# Write your MySQL query statement below
Select p.firstname, p.lastname, a.city, a.state FROM Person p LEFT JOIN Address a on a.personId = p.personId;