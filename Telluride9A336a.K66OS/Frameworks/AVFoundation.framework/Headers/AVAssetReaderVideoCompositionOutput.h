/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
@private
	AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x314639a1; S=0x31466b49; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettings;	// G=0x31464ac5; 
@property(readonly, assign, nonatomic) NSArray *videoTracks;	// G=0x31463981; 
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x31464b75
- (id)init;	// 0x31464ab1
- (id)initWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x31466ddd
- (id)_asset;	// 0x31464b39
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x314664bd
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x314669c5
- (BOOL)alwaysCopiesSampleData;	// 0x31466d59
- (void)dealloc;	// 0x3146641d
- (id)description;	// 0x31466ced
- (void)finalize;	// 0x31466d99
- (id)mediaType;	// 0x31464af1
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x31466b49
// declared property getter: - (id)videoComposition;	// 0x314639a1
// declared property getter: - (id)videoSettings;	// 0x31464ac5
// declared property getter: - (id)videoTracks;	// 0x31463981
@end
