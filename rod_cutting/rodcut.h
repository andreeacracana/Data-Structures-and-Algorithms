#ifndef RODCUT_H
#define RODCUT_H

int max(int a, int b);
void read_prices(int p[], int n);

int cut_rod(int p[], int n);
int memoized_cut_rod(int p[], int n);
int memoized_cut_rod_aux(int p[], int n, int r[]);

int bottom_up_cut_rod(int p[], int n);

#endif
