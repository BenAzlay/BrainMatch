
#include <ctime>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "descriptor.h"
#include "image.h"
#include "fichiers_externes/io_png.h"
#include "fichiers_externes/libMatch/match.h"
#include "matchsurf.h"


#ifndef SURF_DISPLAY
#define SURF_DISPLAY

// Montre les descripteurs représentés en cercles avec ORSA
image*	 showDescriptors(image* img1, listDescriptor* listeDesc);

// dessin ligne
void line(image *img, float xa, float ya, float xb, float yb, float intensite);

#endif
#pragma once
