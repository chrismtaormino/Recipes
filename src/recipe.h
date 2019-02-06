// Recipe class for the Recipe app

#include <string>
#include <list>

#include "ingredient.h"
#include "step.h"

using namespace std;

class Recipe
{
    public:
    // Public member variables
    // Shouldn't have any of these

    // Getters and Setters
    string get_name();
    void set_name(string name);
    list<Step>* get_directions();
    void add_direction(string d_text);
    list<Ingredient>* get_ingredients();
    void add_ingredient(string i_text, float i_amount, string i_unit);

    // Public functions
    string to_string();

    private:

    // Private member variables
    string name;
    list<Step>* directions;
    list<Ingredient>* ingredient_list;
    // Private functions
};