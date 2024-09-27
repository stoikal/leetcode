-- https://leetcode.com/problems/employees-earning-more-than-their-managers/

-- Write your PostgreSQL query statement below
select a.name as Employee
from employee a
join employee b
on a.managerId = b.id
where a.salary > b.salary;
