#include <string>
#include <vector>


// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count (ElectionResult &election_result) {
    return election_result.votes;
}

void increment_vote_count (ElectionResult &election_result, int vote_count) {
    election_result.votes+=vote_count;
}

ElectionResult determine_result (std::vector<ElectionResult> &final_count) {
    int max_votes = -1;
    int winner_index = 0;
    for (int i = 0; i < final_count.size(); i++) {
        if (final_count[i].votes > max_votes) {
            max_votes = final_count[i].votes;
            winner_index = i;
        }
    }
    final_count[winner_index].name = "President" + final_count[winner_index].name;
    
    return final_count[winner_index];
}

