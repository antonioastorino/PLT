#ifndef PLT_GLOBAL_HH
#define PLT_GLOBAL_HH
#include "definitions.h"
#import <Cocoa/Cocoa.h>

@interface PLTGlobal : NSObject
+ (bool)gAppRunning;
+ (void)setGAppRunning:(bool)val;
@end
#endif