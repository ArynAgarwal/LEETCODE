# Write your MySQL query statement below
select customer_id,count(customer_id) as count_no_trans 
from (select v.visit_id,v.customer_id,t.transaction_id
from Visits as v
left join Transactions as t
on v.visit_id=t.visit_id) as tem 
where transaction_id is null
group by customer_id
