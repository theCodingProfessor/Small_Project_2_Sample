// Clinton Garwood
// Small Project #2; People, Friends and Random

#include <iostream>
#include "Person.h"
#include "Friend.h"
using namespace std;

int main() {

    cout << "\nProject #2  Driver\n" << endl;

    // Instantiate Five Person Objects with favorites
    // by calling the global member fuctions (select... music, game, movie)
    Person agent_a ("Andrea", "Adams", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_b ("Bernie", "Bates", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_c ("Charlotte", "Caylorlie", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_d ("Duayne", "Dramtoix", Person::select_movie(), Person::select_music(), Person::select_game());
    Person agent_e ("Edward", "Edmunds", Person::select_movie(), Person::select_music(), Person::select_game());

    // test if Person class is implemented properly
    // agent_a.to_string();

    // Instantiate Five People Objects without favorites
    Person agent_f ("Francous", "Frenchie");
    Person agent_g ("Gerald", "Gramatix");
    Person agent_h ("Hope", "Hjung");
    Person agent_i ("Ivan", "Issiac");
    Person agent_j ("Jessia", "Jones");

    // Declare a list of 5 people of data type Person
    array<Person, 5> people_list{agent_a,agent_f,agent_g,agent_h,agent_i};
    Friend my_friends{people_list};

    //my_friends.print_favs();
    my_friends.update_friends();
    my_friends.print_favs();
    cout << "check games" << endl;
    my_friends.friend_of_friend();

    return 0;
}
