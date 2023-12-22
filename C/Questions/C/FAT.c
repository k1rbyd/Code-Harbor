#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rollNo;
    int skills[5];
} Participant;

void takeInput(int N, Participant* participants) {
    for (int i = 0; i < N; i++) {
        printf("Enter roll number for participant %d: ", i + 1);
        scanf("%d", &(participants[i].rollNo));

        printf("Enter skill levels (0-5) for participant %d (HTML Python DSA Java SQL): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &(participants[i].skills[j]));
        }
    }
}

int findMaxSkill(int N, Participant* participants, int skillIndex) {
    int maxSkill = participants[0].skills[skillIndex];
    int maxSkillParticipant = participants[0].rollNo;

    for (int i = 1; i < N; i++) {
        if (participants[i].skills[skillIndex] > maxSkill) {
            maxSkill = participants[i].skills[skillIndex];
            maxSkillParticipant = participants[i].rollNo;
        }
    }

    return maxSkillParticipant;
}

int findSecondMaxSkill(int N, Participant* participants, int skillIndex) {
    int maxSkill = participants[0].skills[skillIndex];
    int secondMaxSkill = participants[0].skills[skillIndex];
    int maxSkillParticipant = participants[0].rollNo;
    int secondMaxSkillParticipant = participants[0].rollNo;

    for (int i = 1; i < N; i++) {
        if (participants[i].skills[skillIndex] > maxSkill) {
            secondMaxSkill = maxSkill;
            maxSkill = participants[i].skills[skillIndex];
            secondMaxSkillParticipant = maxSkillParticipant;
            maxSkillParticipant = participants[i].rollNo;
        } else if (participants[i].skills[skillIndex] > secondMaxSkill) {
            secondMaxSkill = participants[i].skills[skillIndex];
            secondMaxSkillParticipant = participants[i].rollNo;
        }
    }

    return secondMaxSkillParticipant;
}

void displayTeams(int teamSize, Participant* participants) {
    for (int i = 0; i < 3; i++) {
        printf("Team %d:\n", i + 1);
        printf("  Mentor: Participant %d\n", findMaxSkill(teamSize, participants, i));
        printf("  Co-Mentor: Participant %d\n", findSecondMaxSkill(teamSize, participants, i));
    }
}

int main() {
    int N;
    printf("Enter the number of participants: ");
    scanf("%d", &N);
    Participant* participants = (Participant*)malloc(N * sizeof(Participant));
    takeInput(N, participants);
    displayTeams(N, participants);
    free(participants);
}