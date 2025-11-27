#include <chrono>
#include <iostream>
#include <thread>

class AvatarState {
private:
    AvatarState *next;

public:
    AvatarState(AvatarState *next) { this->next = next; }
    virtual void action() = 0;
    AvatarState *nextState() { return next; }
};

class Glad : public AvatarState {
public:
    Glad(AvatarState *next) : AvatarState(next) {}
    void action() {
        std::cout << "😃" << std::endl;
    }
};

class Happy : public AvatarState {
public:
    Happy(AvatarState *next) : AvatarState(next) {}
    void action()  {
        std::cout << "😊" << std::endl
        ;
    }
};

class Sad : public AvatarState {
public:
    Sad(AvatarState *next) : AvatarState(next) {}
    void action() {
        std::cout << "😢" << std::endl
        ;
    }
};

class Angry : public AvatarState {
public:
    Angry(AvatarState *next) : AvatarState(next) {}
    void action() {
        std::cout << "😠" << std::endl
        ;
    }
};

class Grumpy : public AvatarState {
public:
    Grumpy(AvatarState *next) : AvatarState(next) {}
    void action() {
        std::cout << "😒" << std::endl
        ;
    }
};

class Avatar {
private:
    AvatarState *state;

public:
    Avatar(AvatarState *state) : state(state) {}

    void action() { state->action(); }
    void changeState() { state = state->nextState(); }

    void run() {
        while (state != NULL) {
        action();
        changeState();
            
        std::this_thread::sleep_for(std::chrono::seconds(5));
        }
    }
};

int main() {
    Grumpy gmp(NULL);
    Angry ang(&gmp);
    Sad sad(&ang);
    Happy hap(&sad);
    Glad gld(&hap);
    gmp = Grumpy(&gld);

    Avatar avatar(&gld);

    avatar.run();

    return 0;
}