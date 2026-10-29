
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(VillagerMenuLayer, MenuLayer) {
    void onMoreGames(CCObject* sender) {
        FLAlertLayer::create(
            "Villager Popup",
            "Yo! My first Geode mod works!",
            "OK"
        )->show();
    }
};
