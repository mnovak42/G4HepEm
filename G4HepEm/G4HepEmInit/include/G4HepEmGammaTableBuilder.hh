#ifndef G4HepEmGammaTableBuilder_HH
#define G4HepEmGammaTableBuilder_HH

// computes the macroscopic cross sections for Conversion and Compton for all
// materials

//class G4VEmModel;
//class G4ParticleDefinition;
class G4PairProductionRelModel;
class G4KleinNishinaCompton;
class G4CrossSectionDataStore;

struct G4HepEmData;
struct G4HepEmParameters;
//struct G4HepEmMatData;


// Should receive pointers to G4 models that are already initialised
void BuildLambdaTables(G4PairProductionRelModel* ppModel, G4KleinNishinaCompton* knModel,
                       G4CrossSectionDataStore* hadGNucXSDataStore, struct G4HepEmData* hepEmData);

void BuildElementSelectorTables(G4PairProductionRelModel* ppModel, struct G4HepEmData* hepEmData);

double GetMacXSecPE(const struct G4HepEmData* hepEmData, const int imat, const double ekin);

#endif // G4HepEmGammaTableBuilder_HH
