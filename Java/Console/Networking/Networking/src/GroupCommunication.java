import java.io.IOException;
import java.net.*;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.List;
import java.util.Objects;

public class GroupCommunication {
    private static DatagramSocket socket = null;

    public static void main (String[] args) throws IOException {
        broadcast("Hello", InetAddress.getByName("255.255.255.255"));

    }
    //broadcasting
    public static void broadcast(String broadcastMessage, InetAddress address) throws IOException {
        socket = new DatagramSocket();
        socket.setBroadcast(true);

        byte[] buffer = broadcastMessage.getBytes();

        DatagramPacket packet = new DatagramPacket(buffer, buffer.length, address, 4445);
        socket.send(packet);
        socket.close();
    }
    List<InetAddress> listAllBroadcastAddresses() throws SocketException {
        List<InetAddress> broadcastList = new ArrayList<>();
        Enumeration<NetworkInterface> interfaces = NetworkInterface.getNetworkInterfaces();
        while (interfaces.hasMoreElements()) {
            NetworkInterface networkInterface = interfaces.nextElement();

            if (networkInterface.isLoopback() || !networkInterface.isUp()) {
                continue;
            }

            networkInterface.getInterfaceAddresses().stream()
                    .map(InterfaceAddress::getBroadcast)
                    .filter(Objects::nonNull)
                    .forEach(broadcastList::add);
        }
        return broadcastList;
    }

    public static class MulticastReceiver extends Thread {
        protected MulticastSocket socket = null;
        protected byte[] buf = new byte[256];

        public void run() {
            try {
                socket = new MulticastSocket(4446);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            InetAddress group = null;
            try {
                group = InetAddress.getByName("230.0.0.0");
            } catch (UnknownHostException e) {
                throw new RuntimeException(e);
            }
            try {
                socket.joinGroup(group);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            while (true) {
                DatagramPacket packet = new DatagramPacket(buf, buf.length);
                try {
                    socket.receive(packet);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
                String received = new String(
                        packet.getData(), 0, packet.getLength());
                if ("end".equals(received)) {
                    break;
                }
            }
            try {
                socket.leaveGroup(group);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            socket.close();
        }
    }


}
