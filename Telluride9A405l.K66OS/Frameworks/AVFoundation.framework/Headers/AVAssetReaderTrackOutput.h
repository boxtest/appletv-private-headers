/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAssetTrack, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
@private
	AVAssetReaderTrackOutputInternal *_trackOutputInternal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x346b2e69; 
@property(readonly, assign, nonatomic) AVAssetTrack *track;	// G=0x346b2921; 
+ (id)assetReaderTrackOutputWithTrack:(id)track outputSettings:(id)settings;	// 0x346b2fc9
- (id)init;	// 0x346b2e55
- (id)initWithTrack:(id)track outputSettings:(id)settings;	// 0x346b3581
- (id)_asset;	// 0x346b2ebd
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x346b3019
- (id)_figAssetReaderExtractionOptions;	// 0x346b2f45
- (BOOL)_trimsSampleDurations;	// 0x346b2ee5
- (void)dealloc;	// 0x346b34f9
- (id)description;	// 0x346b3431
- (void)finalize;	// 0x346b34b5
- (id)mediaType;	// 0x346b2e95
// declared property getter: - (id)outputSettings;	// 0x346b2e69
// declared property getter: - (id)track;	// 0x346b2921
@end

