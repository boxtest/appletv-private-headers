/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CACodingProxy.h"


__attribute__((visibility("hidden")))
@interface CAIOSurfaceCodingProxy : CACodingProxy {
	IOSurfaceRef _surface;	// 4 = 0x4
}
- (id)initWithCoder:(id)coder;	// 0x35264811
- (id)initWithObject:(id)object;	// 0x35263e31
- (void)dealloc;	// 0x35264a59
- (id)decodedObject;	// 0x35263e7d
- (void)encodeWithCoder:(id)coder;	// 0x35263e8d
@end
