-- https://leetcode.com/problems/duplicate-emails/

select email as Email from person
group by email
having count(Email) > 1;
