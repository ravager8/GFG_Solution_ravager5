<h2><a href="https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1">Left View of Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p>You are given the <strong>root </strong>of a binary tree. Your task is to return the <em>left view</em> of the binary tree. The <em>left view</em> of a binary tree is the set of nodes visible when the tree is viewed from the left side.</p>
<p>If the tree is empty, return an empty list.</p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root[] = [1, 2, 3, 4, 5, N, N]
<span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid0_1731456264.png" width="298" height="261"></span>
<strong>Output:</strong> [<span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">1, 2, 4]<br></span><strong>Explanation: </strong>From the left side of the tree, only the nodes 1, 2, and 4 are visible.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid1_1731456288.png" width="285" height="260"> </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root[] = [1, 2, 3, N, N, 4, N, N, 5, N, N]<strong><br></strong><strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid2_1731456332.png" width="278" height="332"></strong>
<strong>Output: </strong>[1, 3, 4, 5]<br><strong>Explanation: </strong>From the left side of the tree, the nodes 1, 3, 4, and 5 are visible.<strong><br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid3_1731456373.png" width="260" height="302"><br></strong></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root[] = [N]
<strong>Output: </strong>[]</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>0 &lt;= number of nodes &lt;= 10<sup>6</sup><br>0 &lt;= node -&gt; data &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Adobe</code>&nbsp;<code>Qualcomm</code>&nbsp;<code>Twitter</code>&nbsp;<code>Knowlarity</code>&nbsp;<code>Open Solutions</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;