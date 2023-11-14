
class Library{

    String[] books;
    public int no_of_books;
    
    Library(){
        this.books = new String[100];
        this.no_of_books = 0;
    }
    public void addbooks(String book){
        this.books[no_of_books] = book;
        no_of_books++;
        System.out.println(book + " has been added..");
    }

    void showAvilablebooks(){
        System.out.println("Avilable Books are: ");
        for(String book : this.books){
            if(book == null){
                continue;
            }
            System.out.println("* " + book);
        }
    }
    void issuebook(String book){
        for(int i = 0; i < this.books.length; i++){
            if(this.books[i].equals(book)){
                System.out.println("the book " + book + "has been issued");
                this.books[i]  = null;
                return;
            }
        }
        System.out.println("this book does not exist.");
    }
    void returnBook(String books){
        addbooks(books);
    }
}
public class oop_61_problem {
    public static void main(String[] args) {
        Library Lib = new Library();
        Lib.addbooks("C++");
        Lib.addbooks("rich dad poor dad");
        Lib.addbooks("who monk sold his farrie");
        Lib.showAvilablebooks();

        Lib.issuebook("C++");
        Lib.showAvilablebooks();

        Lib.returnBook("C++");
        Lib.showAvilablebooks();
    }
}
