public class inh {
    static public class Person{
        private String name;
        private int age;

        public Person(String name, int age){
            this.name = name;
            this.age = age;
        }

        public String getName()
        {
            if (name.length() > 1 && name.length() < 80 && name.length() != 0 )
            { 
            return name;
            }
            else{ return "Error";}
        }

        public int getAge()
        {
            if (age > 0 && age != 0 && age <100)
            {
            return age; 
            }
            else {return 0;}
        }
        

        void Printed(){
            System.out.println("Имя: "+ name+ " Возраст: "+ age);
        }
    }

    static class Engi extends Person{
        String job_title; //должность
        float experience; //в годах 

        public Engi(String name, int age, String job_title, float experience){
            super(name, age);//

            this.job_title = job_title;
            this.experience = experience;
        }

        @Override
        void Printed() {
            System.out.println("Имя: " + getName() + 
                             " Возраст: " + getAge() + 
                             " Должность: " + job_title + 
                             " Опыт: " + experience + " лет");
    }

    }
    public static void main(String[] args){
    Person Entoni = new Person("Entoni", 19);

    Engi Tom = new Engi("Tom", 29, "DevOps", 2.7f);
    Tom.Printed();
    }
}

