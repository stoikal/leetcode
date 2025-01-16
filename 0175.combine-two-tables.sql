-- https://leetcode.com/problems/combine-two-tables/

SELECT
    firstName,
    lastName,
    city,
    state
FROM
    person
LEFT JOIN
    address
ON
    person.personId = address.personId;
