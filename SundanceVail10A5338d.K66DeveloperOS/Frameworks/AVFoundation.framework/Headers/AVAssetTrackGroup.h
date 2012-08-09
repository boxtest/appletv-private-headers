/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackGroup.h"

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup {
	id _assetComparisonToken;	// 8 = 0x8
	NSArray *_trackIDs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *trackIDs;	// G=0x317c0f25; converted property
- (id)init;	// 0x317c0da9
- (id)initWithAsset:(id)asset trackIDs:(id)ids;	// 0x317c0cf1
- (id)_assetComparisonToken;	// 0x317c0f15
- (void)dealloc;	// 0x317c0dbd
- (unsigned)hash;	// 0x317c0ec9
- (BOOL)isEqual:(id)equal;	// 0x317c0e21
// converted property getter: - (id)trackIDs;	// 0x317c0f25
@end
