class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        
        List<List<Integer>> result = new ArrayList<>();
        if(root == null) return result;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);

        while(!q.isEmpty()){
            int size = q.size();
            ArrayList<Integer> lvl = new ArrayList<>();
            for(int i = 0; i < size; i++){
                 TreeNode current = q.poll();
                 lvl.add(current.val);

                 if(current.left != null) q.offer(current.left);
                 if(current.right != null) q.offer(current.right);
            }
                 result.add(lvl);
        }


        return result;
    }
}