public class test {
    public static void main(String[] args) throws Exception {
        Class.forName("org.sqlite.JDBC");
        System.out.println("Драйвер загружен!");
    }
}