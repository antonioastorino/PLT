#ifndef PLT_WINDOW_HH
#define PLT_WINDOW_HH

#include "definitions.h"
#import <Cocoa/Cocoa.h>

@interface PLTWindow : NSWindow
- (void)keyDown:(NSEvent*)event;
@end

#endif