-- https://leetcode.com/problems/employees-earning-more-than-their-managers/

SELECT
    a.name AS Employee
FROM
    employee a
JOIN
    employee b
ON
    a.managerId = b.id
WHERE
    a.salary > b.salary;
