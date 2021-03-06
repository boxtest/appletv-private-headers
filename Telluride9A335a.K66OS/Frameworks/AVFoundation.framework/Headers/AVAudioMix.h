/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInternal *_audioMix;	// 4 = 0x4
}
@property(readonly, copy, nonatomic) NSArray *inputParameters;	// G=0x323567cd; 
- (id)init;	// 0x32356e19
- (id)_audioVolumeCurveForTrackID:(int)trackID;	// 0x32356b4d
- (id)copyWithZone:(NSZone *)zone;	// 0x32356a8d
- (void)dealloc;	// 0x32356da9
- (id)description;	// 0x32356cf9
- (void)finalize;	// 0x32356d65
// declared property getter: - (id)inputParameters;	// 0x323567cd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32356c8d
- (void)setInputParameters:(id)parameters;	// 0x32356c2d
@end

