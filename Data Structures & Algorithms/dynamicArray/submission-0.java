class DynamicArray {

    private int[] arr;
    private int size;
    private int capacity;

    public DynamicArray(int capacity) {
        this.capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }

    public int get(int i) {
        return arr[i];
    }

    public void set(int i, int n) {
        arr[i] = n;
    }

    public void pushback(int n) {
        if(size == capacity) {
            resize();
        }
        arr[size] = n;
        size++;
    }

    public void resize() {
        capacity *= 2;
        int[] newArr = new int[capacity];
        for(int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        arr = newArr;
    }

    public int popback() {
        int val = arr[size - 1];
        size--;
        return val;
    }

    public int getSize() {
        return size;
    }

    public int getCapacity() {
        return capacity;
    }
}
