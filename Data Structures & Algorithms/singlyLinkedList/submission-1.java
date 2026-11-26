class LinkedList {

    public class Node {
        int value;
        Node next;

        public Node(int v) {
            value = v;
        }
    }

    private Node head;
    private int size;

    public LinkedList() {
        head = null;
        size = 0;
    }

    public int get(int index) {
        if(index < 0 || index >= size) {
            return -1;
        }
        Node current = head;
        for(int i = 0; i < index; i++) {
            current = current.next;
        }
        return current.value;
    }

    public void insertHead(int val) {
        Node current = new Node(val);
        current.next = head;
        head = current;
        size++;
    }

    public void insertTail(int val) {
        Node newNode = new Node(val);
        Node current = head;

        if(head == null) {
            head = newNode;
        } else {
            while(current.next != null) {
                current = current.next;
            }
            current.next = newNode;
        }
        size++;
    }

    public boolean remove(int index) {
        if(index < 0 || index >= size) {
            return false;
        }
        if(index == 0) {
            head = head.next;
        } else {
            Node current = head;
            for(int i = 0; i < index - 1; i++) {
                current = current.next;
            }
            current.next = current.next.next;
        }
        size--;
        return true;
    }

    public ArrayList<Integer> getValues() {
        ArrayList<Integer> arr = new ArrayList<>();
        Node current = head;
        while(current != null) {
            Integer val = Integer.valueOf(current.value);
            arr.add(val);
            current = current.next;
        }
        return arr;
    }
}
