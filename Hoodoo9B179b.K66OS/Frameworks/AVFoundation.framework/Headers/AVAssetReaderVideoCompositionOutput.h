/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSArray, NSDictionary, AVVideoComposition, AVAssetReaderVideoCompositionOutputInternal;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
@private
	AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x30ad5015; S=0x30ad5035; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettings;	// G=0x30ad4fe9; 
@property(readonly, assign, nonatomic) NSArray *videoTracks;	// G=0x30ad4fc9; 
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30ad4945
- (id)init;	// 0x30ad4995
- (id)initWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30ad49a9
- (id)_asset;	// 0x30ad5209
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x30ad53cd
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x30ad5245
- (BOOL)alwaysCopiesSampleData;	// 0x30ad4f25
- (void)dealloc;	// 0x30ad4e41
- (id)description;	// 0x30ad4f61
- (void)finalize;	// 0x30ad4ee1
- (id)mediaType;	// 0x30ad51c1
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x30ad5035
// declared property getter: - (id)videoComposition;	// 0x30ad5015
// declared property getter: - (id)videoSettings;	// 0x30ad4fe9
// declared property getter: - (id)videoTracks;	// 0x30ad4fc9
@end
