/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSString, AVAssetReaderTrackOutputInternal, NSDictionary, AVAssetTrack;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
	AVAssetReaderTrackOutputInternal *_trackOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;	// G=0x2c2912b1; S=0x2c2912d1; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x2c291285; 
@property(readonly, assign, nonatomic) AVAssetTrack *track;	// G=0x2c291265; 
+ (id)assetReaderTrackOutputWithTrack:(id)track outputSettings:(id)settings;	// 0x2c290cbd
- (id)init;	// 0x2c290d0d
- (id)initWithTrack:(id)track outputSettings:(id)settings;	// 0x2c290d21
- (id)_asset;	// 0x2c29144d
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x2c291555
- (id)_figAssetReaderExtractionOptions;	// 0x2c2914d5
- (BOOL)_trimsSampleDurations;	// 0x2c291475
// declared property getter: - (id)audioTimePitchAlgorithm;	// 0x2c2912b1
- (void)dealloc;	// 0x2c291105
- (id)description;	// 0x2c2911e1
- (void)finalize;	// 0x2c29119d
- (id)mediaType;	// 0x2c291425
// declared property getter: - (id)outputSettings;	// 0x2c291285
// declared property setter: - (void)setAudioTimePitchAlgorithm:(id)algorithm;	// 0x2c2912d1
// declared property getter: - (id)track;	// 0x2c291265
@end

