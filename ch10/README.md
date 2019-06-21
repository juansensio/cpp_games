# CHAPTER 10: INHERITANCE AND POLYMORPHISM: BLACKJACK

## Inheritance

One of the key elements of OOP is *inheritance*, which allows you to derive a new class from an existing one. When you do so, the new class automatically inherits (or gets) the data members and member functions of an existing class. Inheritance is especially useful when you want to create a more specialized version of an existing class because you can add data members and member functions to the new class to extend it.

- [simple_boss](simple_boss.cc)

## Controlling access under inheritance

When you derive one class from another, you can control how much access the derived class has to the base class’ members.

- [simple_boss_2.0](simple_boss_2.0.cc)

## Calling and overriding base class memeber functions

You have options that allow you to customize how those inherited member functions work in your derived class. You can override them by giving them new definitions in your derived class.

- [overriding_boss](overriding_boss.cc)

Overloaded assignment operator and a copy constructor aren’t inherited from a base class. You usually want to call the assignment operator/c opy constructor member function from the base class, which you can explicitly call using the base class name as a prefix, and then take care of new data members.

## Polymorphism

One of the pillars of OOP is *polymorphism*, which means that a member function will produce different results depending on the type of object for which it is being called.

- [polymorphic_bad_guy](polymorphic_bad_guy.cc)

## Abstract classes

An *abstract class* is a class to act as a base for other classes, but it doesn’t make sense to instantiate objects from this class because it’s so generic.

- [abstract_creature](abstract_creature.cc)

## Project

- [blackjack](blackjack.cc)

## Summary

- One of the key elements of OOP is inheritance, which allows you to derive a new class from an existing one. The new class automatically inherits data members and member functions from the existing class.
-  A derived class does not inherit constructors, copy constructors, destructors, or an overloaded assignment operator.
-  Base class constructors are automatically called before the derived class constructor when a derived class object is instantiated.
-  Base class destructors are automatically called after the derived class destructor when a derived class object is destroyed.
 - Protected members are accessible only in their own class and certain derived classes, depending upon the derivation access level.
-  Using public derivation means that public members in the base class become public members in the derived class, protected members in the base class become protected members in the derived class, and private members are (as always) inaccessible.
 - You can override base class member functions by giving them new definitions in a derived class.
 - You can explicitly call a base class member function from a derived class.
 - You can explicitly call the base class constructor from a derived class constructor.
 - Polymorphism is the quality whereby a member function will produce different results depending on the type of object for which it is called.
 - Virtual functions allow for polymorphic behavior.
 - Once a member function is defined as virtual, it’s virtual in any derived class.
 - A pure virtual function is a function to which you don’t need to give a definition. You specify a pure virtual function by placing an equal sign and a zero at the end of the function header.
 - An abstract class has at least one pure virtual member function.
 - An abstract class can’t be used to instantiate an object.