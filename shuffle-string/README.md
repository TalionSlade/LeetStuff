<h2>1528. Shuffle String</h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>&nbsp;and an integer array <code style="user-select: auto;">indices</code> of the <strong style="user-select: auto;">same length</strong>.</p>

<p style="user-select: auto;">The string <code style="user-select: auto;">s</code> will be shuffled such that the character at the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> position moves to&nbsp;<code style="user-select: auto;">indices[i]</code> in the shuffled string.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the shuffled string</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/07/09/q1.jpg" style="width: 321px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "codeleet", <code style="user-select: auto;">indices</code> = [4,5,6,7,0,2,1,3]
<strong style="user-select: auto;">Output:</strong> "leetcode"
<strong style="user-select: auto;">Explanation:</strong> As shown, "codeleet" becomes "leetcode" after shuffling.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abc", <code style="user-select: auto;">indices</code> = [0,1,2]
<strong style="user-select: auto;">Output:</strong> "abc"
<strong style="user-select: auto;">Explanation:</strong> After shuffling, each character remains in its position.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aiohn", <code style="user-select: auto;">indices</code> = [3,1,4,2,0]
<strong style="user-select: auto;">Output:</strong> "nihao"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 4:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aaiougrt", <code style="user-select: auto;">indices</code> = [4,0,2,6,7,3,1,5]
<strong style="user-select: auto;">Output:</strong> "arigatou"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 5:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "art", <code style="user-select: auto;">indices</code> = [1,0,2]
<strong style="user-select: auto;">Output:</strong> "rat"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">s.length == indices.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only lower-case English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= indices[i] &lt;&nbsp;n</code></li>
	<li style="user-select: auto;">All values of <code style="user-select: auto;">indices</code> are unique (i.e. <code style="user-select: auto;">indices</code> is a permutation of the integers from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>).</li>
</ul></div>