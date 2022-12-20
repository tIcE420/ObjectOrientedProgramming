#include "Zivotinja.hpp"
#include "Kukac.hpp"
#include "Pauk.hpp"
#include "Ptica.hpp"
#include "Sisavac.hpp"
#include "Tarantula.hpp"
#include "Vrabac.hpp"
#include "Zohar.hpp"
#include "Brojac.hpp"
#include <vector>
std::vector<Zivotinja*>make_any();
std::vector<Zivotinja*> make_spiders(std::vector<Zivotinja*> animal_kingdom);
std::vector<Zivotinja*> make_birbs(std::vector<Zivotinja*> animal_kingdom);
std::vector<Zivotinja*> make_mammals(std::vector<Zivotinja*> animal_kingdom);
std::vector<Zivotinja*> make_insects(std::vector<Zivotinja*> animal_kingdom);
std::vector<Zivotinja*> make_tarantulas(std::vector<Zivotinja*> animal_kingdom,std::string name);
std::vector<Zivotinja*> make_sparrow(std::vector<Zivotinja*> animal_kingdom, std::string name);
std::vector<Zivotinja*> make_roach(std::vector<Zivotinja*> animal_kingdom, std::string name);
void destroy_vect(std::vector<Zivotinja*> animal_kingdom);