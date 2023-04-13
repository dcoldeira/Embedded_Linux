#Embedded Software Design Patterns in C++

Design patterns are reusable solutions to common programming problems that are widely used in software engineering. In embedded systems, design patterns can help to create software that is modular, maintainable, and scalable.

In this article, we will explore some common design patterns that can be used in embedded systems programming using C++.

## Singleton Pattern

The Singleton pattern ensures that a class has only one instance, and provides a global point of access to it. This pattern can be useful in embedded systems where resources are limited, and you want to avoid wasting memory by creating unnecessary objects.

```cpp
class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    void doSomething() {
        // do something...
    }

private:
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

```

The getInstance() function returns a reference to the only instance of the Singleton class. The constructor is private, so the only way to create an instance of the class is through the getInstance() function. The copy constructor and assignment operator are deleted to prevent copying or assignment of the singleton instance.

## Observer Pattern
The Observer pattern is used to establish a one-to-many dependency between objects. When one object changes state, all its dependents are notified and updated automatically.

```c++
class Subject {
public:
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    void removeObserver(Observer* observer) {
        observers.remove(observer);
    }

    void notify() {
        for (auto observer : observers) {
            observer->update();
        }
    }

private:
    std::list<Observer*> observers;
};

class Observer {
public:
    virtual void update() = 0;
};

class ConcreteObserver : public Observer {
public:
    void update() override {
        // do something...
    }
};
```

The Subject class maintains a list of Observer objects and provides methods to add and remove observers. The notify() method calls the update() method on each observer in the list.

The Observer class defines an interface for objects that need to be notified of changes in the subject. The ConcreteObserver class implements the Observer interface and provides an implementation of the update() method.

## Command Pattern

The Command pattern encapsulates a request as an object, allowing it to be parameterized with different requests, queued, and logged with different commands. This pattern can be useful in embedded systems where you want to decouple the sender of a request from the receiver.

```c+class Command {
public:
    virtual void execute() = 0;
};

class Receiver {
public:
    void doSomething() {
        // do something...
    }
};

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Receiver* receiver) : receiver(receiver) {}

    void execute() override {
        receiver->doSomething();
    }

private:
    Receiver* receiver;
};

class Invoker {
public:
    void setCommand(Command* command) {
        this->command = command;
    }

    void executeCommand() {
        command->execute();
    }

private:
    Command* command;
};
```

The Command class defines an interface for commands. The Receiver class defines the object that the command will be executed on. The ConcreteCommand class implements the Command interface and provides a reference to the Receiver object. The Invoker class sets the Command object and executes it when necessary.