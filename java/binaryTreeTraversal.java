import java.io.*;

class Node {
    int data;
    Node left, right;

    Node(int d) {
        data = d;
        left = right = null;
    }
}

public class BinaryTreeTraversal {

    Node root;

    BinaryTreeTraversal() {
        root = null;
    }

    void preOrder(Node node) {
        if (node == null)
            return;
        System.out.print(node.data + " ");

        preOrder(node.left);
        preOrder(node.right);
    }

    void inOrder(Node node) {
        if (node == null)
            return;

        inOrder(node.left);
        System.out.print(node.data + " ");
        inOrder(node.right);
    }

    void postOrder(Node node) {
        if (node == null)
            return;
        postOrder(node.left);
        postOrder(node.right);
        System.out.print(node.data + " ");
    }

    void insertNode(int d) {
        Node newLink = new Node(d);
        if (root == null) {
            root = newLink;
            return;
        }

        Node currentLink = root;
        Node temp;

        while (true) {
            temp = currentLink;
            if (d < currentLink.data) {
                currentLink = currentLink.left;
                if (currentLink == null) {
                    temp.left = newLink;
                    return;
                }
            } else {
                currentLink = currentLink.right;
                if (currentLink == null) {
                    temp.right = newLink;
                    return;
                }
            }
        }
    }

    public static void main(String args[]) throws IOException {

        BinaryTreeTraversal tree = new BinaryTreeTraversal();

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        int data, choice = -1;

        do {
            System.out.println("\n-----TREE TRAVERSAL OPTIONS-----");
            System.out.println("1. Insert");
            System.out.println("2. In-order");
            System.out.println("3. Pre-order");
            System.out.println("4. Post-order");
            System.out.println("0. Exit \n\n");
            System.out.print("Enter your choice: ");
            choice = Integer.parseInt(read.readLine());

            switch (choice) {
                case 1:
                    System.out.println("Enter data to inserted: ");
                    data = Integer.parseInt(read.readLine());
                    tree.insertNode(data);
                    break;
                case 2:
                    System.out.print("In-order traversal: ");
                    tree.inOrder(tree.root);
                    System.out.println("\n");
                    break;
                case 3:
                    System.out.print("Pre-order traversal: ");
                    tree.preOrder(tree.root);
                    System.out.println("\n");
                    break;
                case 4:
                    System.out.print("Post-order traversal: ");
                    tree.postOrder(tree.root);
                    System.out.println("\n");
                    break;
                case 0:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 0);
    }
}