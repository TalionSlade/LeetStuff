class Solution {
    public Node connect(Node root) {
        if(root== null)
            return null;
        Queue<Node>  q =  new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()){
            Node curr = q.poll();
            if(curr ==  null && q.isEmpty()){
                return root;
            }else if(curr == null){
                q.add(null);
                continue;
            }else{
                curr.next = q.peek();
                if(curr.left != null)
                    q.add(curr.left);
                if(curr.right != null)
                    q.add(curr.right);
            }
        }
        return root;
    }
}