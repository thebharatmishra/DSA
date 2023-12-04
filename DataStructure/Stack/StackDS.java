import java.util.Stack;
public class StackDS{
    public static void main(String[] args){
        System.out.println("Stack Data Structure");
        Stack<String> stack= new Stack<String>();

        stack.push("Minecraft");
        stack.push("Skyrim");
        stack.push("DOOM");
        stack.push("Borderlands");
        stack.push("FFVII");
String popedItem = stack.pop();
System.out.println(stack.pop());
System.out.println(stack.peek());
System.out.println(stack.search("Minecraft"));

// for (int i = 0; i < 1000000000; i++) {
//     stack.push("Fallout76");
// }
        // System.out.println(stack.empty());
        System.out.println(stack);

    }
}