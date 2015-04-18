#include <iostream>
#include <iomanip>
#include <string>
#include "EngineDB.hpp"
#include "LSHAngleHashTable.hpp"
#include "RegularNearestNeighborGraph.hpp"

using namespace std;

int main() {
  string db = "amorgin";
  string server = "localhost";
  string user = "root";
  string pass = "580230mysql";

  EngineDB eng(db,server,user,pass);

  /*** test get_oldest_hash_function ***/
  // string oldest_hf = eng.get_oldest_hash_function();
  // if(oldest_hf != "")
  //   cout << oldest_hf << endl;
  // else
  //   cout << "No hash function in the database" << endl;


  /*** test delete_oldest_hash_function ***/
  // eng.delete_oldest_hash_function();

  /*** test insert_hash_function ***/
  // eng.insert_hash_function("id2","p2");

  /*** test delete_hash_function ***/
  // eng.delete_hash_function("id3");

  /*** test insert_graph_edge  ***/
  // eng.insert_graph_edge("id1","id8",123.45);

  /*** test insert_hash_occupant ***/
  // eng.insert_hash_occupant("hf1", 234, "fv1");

  /*** test insert_feature_vec ***/
  // eng.insert_feature_vec("fv2", "fp2");

  /*** test delete_feature_vec ***/
  // eng.delete_feature_vec("id1");

  // PathLookup fv_paths;
  // eng.get_hash_funcs(fv_paths);
  // for(PathLookup::const_iterator i(fv_paths.begin());
  //     i != fv_paths.end(); ++i)
  //   cout << i->first << "\t" << i->second << endl;
  // LSHAngleHashTable ht("hf_15_85");
  // eng.get_hash_table(ht);
  // cout << ht;


  // RegularNearestNeighborGraph nng("nng_0", 4);
  // eng.get_graph(nng);
  // cout << nng << endl;

  cout << eng.get_num_hash_functions() << endl;
}
