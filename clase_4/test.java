

class User{
    String nombre="";
    String email=""; 

    public void User(String nombre, String email){
        this.nombre=nombre;
        this.email=email;
    }

    public String getName(){
        return this.nombre;
    }
}


User user = new User("pepito","asdsad@gmaill.com");

user.getName();