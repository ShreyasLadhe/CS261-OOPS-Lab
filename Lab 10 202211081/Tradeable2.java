public interface Tradeable2 {
    void buy(int quantity);
    void sell(int quantity);
}

class Stock implements Tradeable2 {
    private int avail_quan;

    public Stock(int init_quna) {
        this.avail_quan = init_quna;
    }

    @Override
    public void buy(int quantity) {
        if (quantity > 0) {
            avail_quan = avail_quan + quantity;
            System.out.println(quantity + " Stocks are Bought!!");
            System.out.println("Available Quantity after updating is: " + avail_quan);
        } else {
            System.out.println("Invalid Quantity");
        }
    }

    @Override
    public void sell(int quantity) {
        if (quantity > 0 && quantity <= avail_quan) {
            avail_quan = avail_quan - quantity;
            System.out.println(quantity + " Stocks are Sold!!");
            System.out.println("Available Quantity after updating is: " + avail_quan);
        } else {
            System.out.println("Invalid Quantity");
        }
    }

    public static void main(String[] args) {
        Stock ICDstock = new Stock(1000);

        BuyThread buyThread1 = new BuyThread(ICDstock, 20);
        SellThread sellThread1 = new SellThread(ICDstock, 10);
        BuyThread buyThread2 = new BuyThread(ICDstock, 50);
        SellThread sellThread2 = new SellThread(ICDstock, 60);

        buyThread1.start();
        sellThread1.start();
        buyThread2.start();
        sellThread2.start();
    }
}

class BuyThread extends Thread {
    private Stock stock;
    private int quantity;

    public BuyThread(Stock stock, int quantity) {
        this.stock = stock;
        this.quantity = quantity;
    }

    @Override
    public void run() {
        stock.buy(quantity);
    }
}

class SellThread extends Thread {
    private Stock stock;
    private int quantity;

    public SellThread(Stock stock, int quantity) {
        this.stock = stock;
        this.quantity = quantity;
    }

    @Override
    public void run() {
        stock.sell(quantity);
    }
}
