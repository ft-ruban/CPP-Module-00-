#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {       // The class

  public:           // Access specifier

    Contact( void ); //constructor
    ~Contact( void ); //destructor
    int myNum;        // Attribute (int variable)
    //string myString;  // Attribute (string variable)
  

  private:
    char contact[8];
    int _privateFoo;
};


#endif