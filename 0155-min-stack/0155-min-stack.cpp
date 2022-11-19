class MinStack {
     stack < pair < int, int >> st;
public:
    void push(int x) {
      int mn;
      if (st.empty()) {
        mn = x;
      } else {
        mn = min(st.top().second, x);
      }
      st.push({x,mn});
    }

  void pop() {
    st.pop();
  }

  int top() {
    return st.top().first;
  }

  int getMin() {
    return st.top().second;
  }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


// We push 5,-2,3,-10,20 in the stack.
// If the stack is empty we push {val,val} in the stack
// else we push {val,min(s.top().second,val)} which is basically minimum upto that point.
// Hence {5,5},{-2,-2},{3,-2},{-10,-10},{20,-10} are pushed in the stack.
// To pop simply do stack.pop()
// To get the top return stack.top().first;
// Now we pop 20 and -10 from the stack
// The elements in the stack would be {5,5},{-2,-2},{3,-2}
// On pushing 30 to the stack
// The elements in the stack would be {5,5},{-2,-2},{3,-2},{30,-2}.




//simple c baat like agr stack empty he toh hum jo val he jaise -2,-2 dalenge as a pair and agr stack empty ni he top pe jo value hogi and jo value dalni he dono me se min leke voh push krdo and jo second he voh min hoga hi hmesha top pe and pop top easily ho jayenge 