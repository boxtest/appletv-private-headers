/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *inputs;	// G=0x3023ecd1; 
@property(readonly, assign) NSArray *outputs;	// G=0x3023ed09; 
+ (id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef;	// 0x3023edb5
- (id)init;	// 0x3023eb95
- (void)dealloc;	// 0x3023ebe1
- (id)description;	// 0x3023ed41
// declared property getter: - (id)inputs;	// 0x3023ecd1
// declared property getter: - (id)outputs;	// 0x3023ed09
- (RouteDescriptionImpl *)privateGetImplementation;	// 0x3023eda5
@end

