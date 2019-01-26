#include "defines.h"
#include "swscale.h"

FFEXPORT unsigned swscale_version() FFBODYNULL

FFEXPORT void sws_freeContext(struct SwsContext* swsContext) FFBODYVOID

FFEXPORT struct SwsContext* sws_getContext(int srcW, int srcH, enum PixelFormat srcFormat, int dstW, int dstH, enum PixelFormat dstFormat, int flags,
                                           SwsFilter* srcFilter, SwsFilter* dstFilter, double* param) FFBODYNULL
FFEXPORT int sws_scale(struct SwsContext* context, uint8_t* src[], int srcStride[], int srcSliceY,
                       int srcSliceH, uint8_t* dst[], int dstStride[]) FFBODYNULL
FFEXPORT int sws_scale_ordered(struct SwsContext* context, uint8_t* src[], int srcStride[], int srcSliceY,
                               int srcSliceH, uint8_t* dst[], int dstStride[]) FFBODYNULL

FFEXPORT int sws_setColorspaceDetails(struct SwsContext* c, const int inv_table[4], int srcRange,
                                      const int table[4], int dstRange, int brightness, int contrast, int saturation) FFBODYNULL
FFEXPORT int sws_getColorspaceDetails(struct SwsContext* c, int** inv_table, int* srcRange,
                                      int** table, int* dstRange, int* brightness, int* contrast, int* saturation) FFBODYNULL
FFEXPORT SwsVector* sws_getGaussianVec(double variance, double quality) FFBODYNULL
FFEXPORT SwsVector* sws_getConstVec(double c, int length) FFBODYNULL
FFEXPORT SwsVector* sws_getIdentityVec() FFBODYNULL
FFEXPORT void sws_scaleVec(SwsVector* a, double scalar) FFBODYVOID
FFEXPORT void sws_normalizeVec(SwsVector* a, double height) FFBODYVOID
FFEXPORT void sws_convVec(SwsVector* a, SwsVector* b) FFBODYVOID
FFEXPORT void sws_addVec(SwsVector* a, SwsVector* b) FFBODYVOID
FFEXPORT void sws_subVec(SwsVector* a, SwsVector* b) FFBODYVOID
FFEXPORT void sws_shiftVec(SwsVector* a, int shift) FFBODYVOID
FFEXPORT SwsVector* sws_cloneVec(SwsVector* a) FFBODYNULL
FFEXPORT void sws_printVec2(SwsVector* a, AVClass* log_ctx, int log_level) FFBODYVOID
FFEXPORT void sws_freeVec(SwsVector* a) FFBODYVOID
FFEXPORT SwsFilter* sws_getDefaultFilter(float lumaGBlur, float chromaGBlur,
                                         float lumaSarpen, float chromaSharpen,
                                         float chromaHShift, float chromaVShift,
                                         int verbose) FFBODYNULL
FFEXPORT void sws_freeFilter(SwsFilter* filter) FFBODYVOID
FFEXPORT struct SwsContext* sws_getCachedContext(struct SwsContext* context,
                                                 int srcW, int srcH, enum PixelFormat srcFormat,
                                                 int dstW, int dstH, enum PixelFormat dstFormat, int flags,
                                                 SwsFilter* srcFilter, SwsFilter* dstFilter, double* param) FFBODYNULL
