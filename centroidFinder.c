/**********************************************
 * Doug Chamberlain
 * March 31, 2016
 * CS125
 * Homework 9
 * hw9.c generates a triangle with 3 random
 * points and then calculates the centroid of
 * that triangle.
**********************************************/

#include <stdio.h>
#include <stdlib.h>

/* points on a 2-dimensional coordinate plane */
struct point {
  float x;
  float y;
};

/* a triangle consisting of 3 points */
struct triangle {
  struct point pointA;
  struct point pointB;
  struct point pointC;
};
    
struct point centroid(struct triangle inputTri); /* function to calculate centroid of a triangle */

int main() 
{
  struct triangle genTri;       /* will be our generated triangle */
  struct point genTriCentroid;  /* will be the centroid of our generated triangle */
  
  /* generate points for randomly generated triangle */
  genTri.pointA.x = (((float)rand()) / RAND_MAX);
  genTri.pointA.y = (((float)rand()) / RAND_MAX);
  
  genTri.pointB.x = (((float)rand()) / RAND_MAX);
  genTri.pointB.y = (((float)rand()) / RAND_MAX);
  
  genTri.pointC.x = (((float)rand()) / RAND_MAX);
  genTri.pointC.y = (((float)rand()) / RAND_MAX);
  
  /* get the centroid of the randomly generated triangle */
  genTriCentroid = centroid(genTri);
  
  /* print out the points of the randomly generated triangle */
  printf("The triangle vertices are ");
  printf("[%.2f, %.2f], ", genTri.pointA.x, genTri.pointA.y);
  printf("[%.2f, %.2f], ", genTri.pointB.x, genTri.pointB.y);
  printf("and [%.2f, %.2f]\n", genTri.pointC.x, genTri.pointC.y);
  
  /* print out the centroid of the randomly generated triangle */
  printf("The centroid is [%.2f, %.2f]\n", genTriCentroid.x, genTriCentroid.y);
}

/* function to calculate centroid of a triangle */
struct point centroid(struct triangle inputTri)
{
  struct point inputTriCentroid;
  inputTriCentroid.x = ((inputTri.pointA.x + inputTri.pointB.x + inputTri.pointC.x) / 3);
  inputTriCentroid.y = ((inputTri.pointA.y + inputTri.pointB.y + inputTri.pointC.y) / 3);
  return inputTriCentroid;
}
