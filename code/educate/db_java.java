import java.sql.*;


public class db_java {
    public static void main(String[] args){

        try{
        String url = "jdbc:sqlite:coffee.db";

        Connection conn = DriverManager.getConnection(url);
        DatabaseMetaData db_conn = conn.getMetaData();

        Statement stmt = conn.createStatement();

        String sql_text = "SELECT name FROM coffee";
        ResultSet rs = stmt.executeQuery(sql_text);

        while(rs.next()){
            String name = rs.getString("name");
            System.out.println(name);
        }
        
        System.out.println("Hellol");
        }
        catch(SQLException e){
            System.out.println("Ошибка "+ e.getMessage());
        }

        
    }
}
