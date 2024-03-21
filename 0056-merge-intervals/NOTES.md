sort the intervals to have the smallest starting interval in start
we have to compare two adjusent intervals and check if they overlap if they do overlap then we will determine the start and end of those interval if they do not overlap then we will just keep pushing the interval as they are sorted
​
push the first interval in the result array
get the current interval and compare its start index with the end index of previous interval and check if current interval start index is greater then theres no overlap if it is less then get the end index of interval by comparing max(intervals[i][1], previous[1])