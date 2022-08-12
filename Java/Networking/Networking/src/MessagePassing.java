import java.util.Vector;

public class MessagePassing extends Thread{
    // initialization of queue size
    static final int MAX = 7;
    private Vector messages = new Vector();

    @Override
    public void run()
    {
        try {
            while (true) {

                // producing a message to send to the consumer
                putMessage();

                // producer goes to sleep when the queue is full
                sleep(1000);
            }
        }
        catch (InterruptedException e) {
            System.out.println(e.getMessage());
        }
    }

    private synchronized void putMessage() throws InterruptedException
    {

        // checks whether the queue is full or not
        while (messages.size() == MAX)

            // waits for the queue to get empty
            wait();

        // then again adds element or messages
        messages.addElement(new java.util.Date().toString());
        notify();
    }

    public synchronized String getMessage()
            throws InterruptedException
    {
        notify();
        while (messages.size() == 0)
            wait();
        String message = (String)messages.firstElement();

        // extracts the message from the queue
        messages.removeElement(message);
        return message;
    }
}

class Consumer extends Thread {
    MessagePassing messagePassing;

    Consumer(MessagePassing p)
    {
        messagePassing = p;
    }

    @Override
    public void run()
    {
        try {
            while (true) {
                String message = messagePassing.getMessage();

                // sends a reply to producer got a message
                System.out.println("Got message: " + message);
                sleep(2000);
            }
        }
        catch (InterruptedException e) {
        }
    }

    public static void main(String args[])
    {
        MessagePassing messagepassing = new MessagePassing();
        messagepassing.start();
        new Consumer(messagepassing).start();
    }
}
