# Write your MySQL query statement below
select class from (select class, count(class) as cnt from Courses group by class) as th where cnt>=5