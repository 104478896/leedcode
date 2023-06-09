/*表：Products

+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_id  | int     |
| low_fats    | enum    |
| recyclable  | enum    |
+-------------+---------+
product_id 是这个表的主键。
low_fats 是枚举类型，取值为以下两种 ('Y', 'N')，其中 'Y' 表示该产品是低脂产品，'N' 表示不是低脂产品。
recyclable 是枚举类型，取值为以下两种 ('Y', 'N')，其中 'Y' 表示该产品可回收，而 'N' 表示不可回收。
 

写出 SQL 语句，查找既是低脂又是可回收的产品编号。

返回结果 无顺序要求 。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/recyclable-and-low-fat-products
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
/*# Write your MySQL query statement below*/
select product_id from Products where low_fats='Y' and recyclable='Y'