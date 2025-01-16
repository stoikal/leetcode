-- https://leetcode.com/problems/duplicate-emails/

SELECT
    email AS Email
FROM
    person
GROUP BY
    email
HAVING
    count(Email) > 1;
