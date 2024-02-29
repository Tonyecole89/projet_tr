/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 2
 * created on:  2024-01-14 - 16:19 +0100
 * 1st author:  tony.yam - tony.yam
 * description: regroupe.h
 */

#ifndef REGROUPE_H_
#define REGROUPE_H_

int main(int argc, char **argv);
int tr(int argc, char **argv);
int search_tiret(int argc, char **argv, int compteur);
int condition_tiret_c_n_d(char **argv, int compt, int c_and_d);
int condition_tiret_cd(char **argv, int compt, int cd);
int combinaison_cd(char **argv, int cd, int c_and_d);
int lec_chaine_modif(int argc, char **argv, int compteur, int c_d);
int for_read(char *buffer);
int cd_no_n(int long_total, char *buffer_cdtemp, char *buffer_cd);
int cd_n(char **argv, int compteur, char *buffer, int reader);
int wbcdt(char **a, char *b, int r, int c);
int fi_lcm(char *buffer_cd, int long_total, int h_n, char *buffer);
int lec_tra_or(int c_d, char **argv, char *buffer, int reader);
int hn(char **argv, int compteur, int c_d);
int have_a_n(char **argv, int compteur);
int lec_cm_fin(char *buffer_cd, int long_total);
int helper(char **argv);
char *cd(char *buffer_cdtemp, char *buffer_cd);
int lec_tra(char **argv, char *buffer, int reader);
char *lec_c_cdn(char **argv, char *buffer, int reader, int compteur);
char *lec_chaine_cd(char **argv, char *buffer, int reader, int compteur);
char *buffer_cd(int compt, int compt_temp, char *buffer, char *buffer_temp);
char *malloc_buff();
char *remplir_malloc(char *buffer);
char *lec_chaine_supp(char **argv, char *buffer, int reader, int compteur);
char *lec_chaine_modification(char **argv, char *buffer, int reader);
int longueur(char *arg);

#endif
