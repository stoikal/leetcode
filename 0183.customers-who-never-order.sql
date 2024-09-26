-- https://leetcode.com/problems/customers-who-never-order/

-- Write your PostgreSQL query statement below

SELECT c.name as Customers
FROM customers c
LEFT JOIN orders o
ON c.id = o.customerId
WHERE o.customerId is NULL;
