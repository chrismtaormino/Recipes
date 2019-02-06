#include "recipe.h"

string Recipe::get_name()
 {
     return NULL;
 }
void Recipe::set_name(string name)
{

}

list<Step>* Recipe::get_directions()
{
    return new list<Step>;
}
void Recipe::add_direction(string d_text)
{

}
    
list<Ingredient>* Recipe::get_ingredients()
{
    return new list<Ingredient>;
}
void Recipe::add_ingredient(string i_text, float i_amount, string i_unit)
{

}

string Recipe::to_string()
{
    return NULL;
}