# Write your MySQL query statement below
select max(num) as num from (select num,count(num) as cnt from MyNumbers group by num) as th where cnt=1