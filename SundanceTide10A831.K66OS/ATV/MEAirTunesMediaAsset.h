/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"

@class NSMutableDictionary, BRImage;

__attribute__((visibility("hidden")))
@interface MEAirTunesMediaAsset : BRBaseMediaAsset {
	NSMutableDictionary *_info;	// 8 = 0x8
	BRImage *_coverArt;	// 12 = 0xc
}
@property(readonly, retain) BRImage *coverArt;	// G=0x56b59; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x56361
- (void).cxx_destruct;	// 0x56d09
- (id)artist;	// 0x567a1
- (id)assetID;	// 0x56669
- (id)composer;	// 0x5684d
// converted property getter: - (id)coverArt;	// 0x56b59
- (id)coverArtID;	// 0x56bc9
- (BOOL)coverArtIsPNG;	// 0x56bd9
- (long)duration;	// 0x56a29
- (BOOL)hasCoverArt;	// 0x56b41
- (id)imageProxy;	// 0x563f1
- (id)mediaSummary;	// 0x568f9
- (id)mediaType;	// 0x56c41
- (id)primaryCollectionTitle;	// 0x56c5d
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x56411
- (id)title;	// 0x566f5
@end
