public interface Tradeable1 {
    void buy(int quantity);
    void sell(int quantity);
}

class Stock implements Tradeable1 {
    private int AvailableQuantity;

    public Stock(int InitialQuantity) {
        this.AvailableQuantity = InitialQuantity;
    }

    @Override
    public void buy(int quantity) {
        if (quantity > 0) {
            AvailableQuantity += quantity;
            System.out.println(quantity + " Stocks are Bought!!");
            System.out.println("Available Quantity after updating is: " + AvailableQuantity);
        } else {
            System.out.println("Invalid Quantity");
        }
    }

    @Override
    public void sell(int quantity) {
        if (quantity > 0 && quantity <= AvailableQuantity) {
            AvailableQuantity -= quantity;
            System.out.println(quantity + " Stocks are Sold!!");
            System.out.println("Available Quantity after updating is: " + AvailableQuantity);
        } else {
            System.out.println("Invalid Quantity");
        }
    }

    public static void main(String[] args) {
        Stock ICDstock = new Stock(500);

        ICDstock.buy(20);
        ICDstock.sell(10);
        ICDstock.buy(200);
        ICDstock.sell(600);
    }
}