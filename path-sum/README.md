<h2>112. Path Sum</h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree and an integer <code style="user-select: auto;">targetSum</code>, return <code style="user-select: auto;">true</code> if the tree has a <strong style="user-select: auto;">root-to-leaf</strong> path such that adding up all the values along the path equals <code style="user-select: auto;">targetSum</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">leaf</strong> is a node with no children.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsum1.jpg" style="width: 500px; height: 356px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsum2.jpg" style="user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3], targetSum = 5
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2], targetSum = 0
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[0, 5000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= targetSum &lt;= 1000</code></li>
</ul>
</div>