interface Resizable {
    void increaseSize(int increaseBy);
    void decreaseSize(int decreaseBy);
}


class ResizableCircle implements Resizable {
    private double radius;


    public ResizableCircle(double radius) {
        this.radius = radius;
    }


    @Override // overriding used
    public void increaseSize(int increaseBy) {
        if (increaseBy > 0) {
            this.radius += increaseBy;
            System.out.println("Increased circle radius by " + increaseBy);
        } else {
            System.out.println("Invalid Input");
        }
    }


    @Override
    public void decreaseSize(int decreaseBy) {
        if (decreaseBy > 0) {
            if (this.radius - decreaseBy >= 0) {
                this.radius -= decreaseBy;
                System.out.println("Decreased circle radius by " + decreaseBy);
            } else {
                System.out.println("Invalid Input");
            }
        }
    }


    public double getRadius() {
        return radius;
    }


    public static void main(String[] args) {
        ResizableCircle circle = new ResizableCircle(5.0);
        System.out.println("Original Circle Radius: " + circle.getRadius());


        circle.increaseSize(3);
        System.out.println("After Increase: " + circle.getRadius());


        circle.decreaseSize(2);
        System.out.println("After Decrease: " + circle.getRadius());


        circle.decreaseSize(10);
    }
}
