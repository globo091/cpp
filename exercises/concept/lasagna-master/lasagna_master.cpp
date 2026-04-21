#include "lasagna_master.h"

namespace lasagna_master {

 int preparation_time(std::vector<std::string>& layers, int avg_time) {
        return layers.size()*avg_time;
    }

    amount quantities(const std::vector<std::string>& layers) {
        amount needed = {0, 0};

        for (const auto& layer : layers) {
            if (layer=="noodles")
                needed.noodles+=50; //in grammi
            else if (layer=="sauce")
                needed.sauce+=0.2;  //in litri
        }
        return needed;
    }

    void addSecretIngredient (std::vector<std::string>& myList,
        const std::vector<std::string>& friendsList) {
        string tmp = friendsList[friendsList.size()-1];
        myList[myList.size()-1] = tmp;
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions) {
        std::vector<double> newQuantities;
        for (int i=0; i<quantities.size(); i++) {
            newQuantities.push_back(quantities[i]*(portions/2.0));
        }
        return newQuantities;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient) {
        string tmp = secretIngredient;
        myList[myList.size()-1] = tmp;
    }

}  // namespace lasagna_master
