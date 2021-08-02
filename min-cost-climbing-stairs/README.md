<h2>746. Min Cost Climbing Stairs</h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">cost</code> where <code style="user-select: auto;">cost[i]</code> is the cost of <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> step on a staircase. Once you pay the cost, you can either climb one or two steps.</p>

<p style="user-select: auto;">You can either start from the step with index <code style="user-select: auto;">0</code>, or the step with index <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum cost to reach the top of the floor</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cost = [10,15,20]
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> Cheapest is: start on cost[1], pay that cost, and go to the top.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cost = [1,100,1,1,1,100,1,1,100,1]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> Cheapest is: start on cost[0], and only step on 1s, skipping cost[3].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= cost.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= cost[i] &lt;= 999</code></li>
</ul>
</div>