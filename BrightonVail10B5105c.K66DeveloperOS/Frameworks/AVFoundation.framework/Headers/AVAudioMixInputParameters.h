/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) opaqueMTAudioProcessingTap *audioTapProcessor;	// G=0x30324f59; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x30324f19; 
- (id)init;	// 0x30324ba1
- (id)_audioVolumeCurve;	// 0x30325b6d
- (void)_setRamps:(id)ramps;	// 0x30325b11
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x30324fc5
- (id)_volumeCurveAsString;	// 0x30326131
// declared property getter: - (opaqueMTAudioProcessingTap *)audioTapProcessor;	// 0x30324f59
- (id)copyWithZone:(NSZone *)zone;	// 0x30324dad
- (void)dealloc;	// 0x30324c49
- (id)description;	// 0x30324d29
- (void)finalize;	// 0x30324ccd
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x303255a5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30324e8d
- (void)setAudioTapProcessor:(opaqueMTAudioProcessingTap *)processor;	// 0x30324f79
- (void)setTrackID:(int)anId;	// 0x30324f39
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x303254a9
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x303253e1
// declared property getter: - (int)trackID;	// 0x30324f19
@end
