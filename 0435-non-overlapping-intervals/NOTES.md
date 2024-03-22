first we sort to get the smallest staring interval in the start
- an interval is not overlapping if the end of previous interval and is smaller then start of current interval So in case of no overlap we just keep moving through list by taking current interval end to compare next
​
- if it is over lapping then we will increment counter as now we have to remove an interval and to decide which interval to remove we will remove the interval with larger end point and update the record of previous interval end point to the end point of the interval with smaller end value