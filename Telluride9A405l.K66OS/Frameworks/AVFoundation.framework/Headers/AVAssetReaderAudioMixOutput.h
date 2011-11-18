/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAudioMix, NSArray, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
@private
	AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x346b2961; S=0x346b4af9; 
@property(readonly, assign, nonatomic) NSDictionary *audioSettings;	// G=0x346b39bd; 
@property(readonly, assign, nonatomic) NSArray *audioTracks;	// G=0x346b2941; 
+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x346b3a61
- (id)init;	// 0x346b39a9
- (id)initWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x346b4f91
- (id)_asset;	// 0x346b3a25
- (id)_audioVolumeCurveForTrack:(id)track;	// 0x346b4e11
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x346b46e1
- (void)_setAudioVolumeCurve:(id)curve forTrack:(id)track;	// 0x346b4cdd
// declared property getter: - (id)audioMix;	// 0x346b2961
// declared property getter: - (id)audioSettings;	// 0x346b39bd
// declared property getter: - (id)audioTracks;	// 0x346b2941
- (void)dealloc;	// 0x346b4629
- (id)description;	// 0x346b4ec9
- (void)finalize;	// 0x346b4f4d
- (id)mediaType;	// 0x346b39e9
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x346b4af9
@end

