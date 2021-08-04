<h2>961. N-Repeated Element in Size 2N Array</h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> with the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == 2 * n</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> contains <code style="user-select: auto;">n + 1</code> <strong style="user-select: auto;">unique</strong> elements.</li>
	<li style="user-select: auto;">Exactly one element of <code style="user-select: auto;">nums</code> is repeated <code style="user-select: auto;">n</code> times.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the element that is repeated </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> times</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,3]
<strong style="user-select: auto;">Output:</strong> 3
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,2,5,3,2]
<strong style="user-select: auto;">Output:</strong> 2
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,1,5,2,5,3,5,4]
<strong style="user-select: auto;">Output:</strong> 5
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == 2 * n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> contains <code style="user-select: auto;">n + 1</code> <strong style="user-select: auto;">unique</strong> elements and one of them is repeated exactly <code style="user-select: auto;">n</code> times.</li>
</ul>
</div>