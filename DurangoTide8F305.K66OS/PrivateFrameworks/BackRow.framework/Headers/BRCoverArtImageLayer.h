/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImageControl.h"

@class NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRImageControl {
@private
	id<BRImageProxy> _imageProxy;	// 68 = 0x44
	BOOL _deletterboxImage;	// 72 = 0x48
	BOOL _showsDefaultCoverArt;	// 73 = 0x49
	BOOL _showsBorder;	// 74 = 0x4a
	NSTimer *_setCoverArtTimer;	// 76 = 0x4c
}
@property(assign) BOOL deletterboxImage;	// G=0x329aa269; S=0x329aa2f9; converted property
@property(assign) BOOL showsBorder;	// G=0x329aa299; S=0x329aa369; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x329aa289; S=0x329aa279; converted property
- (id)init;	// 0x32939029
- (void)_coverArtChanged:(id)changed;	// 0x3293c871
- (void)_setCoverArtImage:(id)image;	// 0x32939385
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x329aa2a9
- (void)_updateCoverArt;	// 0x32939271
- (void)dealloc;	// 0x32939919
// converted property getter: - (BOOL)deletterboxImage;	// 0x329aa269
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x329aa2f9
- (void)setImageProxy:(id)proxy;	// 0x329aa321
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x329aa369
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x329aa279
// converted property getter: - (BOOL)showsBorder;	// 0x329aa299
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x329aa289
@end
