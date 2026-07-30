public class polym {
    static public class Person{
        protected String name;
        protected int age;

        public Person(String name, int age) //конструктор
        {
            this.name = name; 
            this.age = age;
        }

        public String getName() //геттер name
        {
            if(name.length() > 0 && name.length() != 1 && name.length() < 70)
            {
                return name;
            }
            else{ return "Error";}
        }

        public int getAge() //геттер age
        {
            if(age>0 && age<115 && age != 0)
            {
                return age;
            }
            else { return 0;}
        }

        void printed()
        {
            System.out.println("Имя: "+ getName() + ";\n Возраст: "+getAge());
        }


    }

        static class Worker extends Person{
            int experience;
            String title_job;

            public Worker(String name, int age, int experience, String title_job)
            {
                super(name, age); //обращение к конструктора родителя Person
                this.experience = experience;
                this.title_job = title_job;
            }

            @Override //переопределние родительского мотеда дочерним 
            void printed()
            {
                System.out.println("Имя: "+getName()+"; \n Возраст: "+getAge() + ";\n Должность: "+title_job+";\nОпыт работы: "+experience);
            }
        }

    public static void main(String[] args)
    {
        Person Tom = new Person("Tom", 39);
        Tom.printed();

        System.out.println("\n"+"\n");

        Person Jack = new Worker("Jack", 28, 4, "Инженер");

        Jack.printed();
    }
}
