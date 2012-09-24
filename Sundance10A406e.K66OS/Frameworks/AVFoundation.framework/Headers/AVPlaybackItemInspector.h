/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
	NSArray *_trackIDs;	// 8 = 0x8
}
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x3031d665; S=0x3031d639; 
@property(readonly, retain) NSArray *trackIDs;	// G=0x3031d809; converted property
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem trackIDs:(id)ids;	// 0x3031d455
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x3031d665
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x3031d639
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x3031d675
- (id)availableMetadataFormats;	// 0x3031d855
- (id)commonMetadata;	// 0x3031d839
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x3031d88d
- (void)dealloc;	// 0x3031d4d9
- (XXStruct_pwHToB)duration;	// 0x3031d6cd
- (void)finalize;	// 0x3031d539
- (unsigned)hash;	// 0x3031d5f1
- (BOOL)isEqual:(id)equal;	// 0x3031d57d
- (id)lyrics;	// 0x3031d819
- (id)metadataForFormat:(id)format;	// 0x3031d871
- (CGSize)naturalSize;	// 0x3031d745
- (BOOL)providesPreciseDurationAndTiming;	// 0x3031d7a9
- (long)trackCount;	// 0x3031d7ad
// converted property getter: - (id)trackIDs;	// 0x3031d809
@end
