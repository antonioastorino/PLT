#ifndef PLT_DATA_TYPES_HH
#define PLT_DATA_TYPES_HH
#include "definitions.h"
#import <Cocoa/Cocoa.h>

typedef struct PLTSizedFloatArray
{
    CGFloat* data;
    size_t numOfElements;
} PLTSizedFloatArray;

enum PLTEventSubtype
{
    PLTEventSubtypeFilterChange
};
#endif