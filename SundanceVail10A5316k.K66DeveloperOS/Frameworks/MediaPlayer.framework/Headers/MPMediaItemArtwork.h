/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPMediaItemArtwork : NSObject {
@private
	MPMediaItemArtworkInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// G=0x3486b5a1; S=0x3486b5b5; @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x3486b521; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x3486b57d; 
- (id)initWithImage:(id)image;	// 0x3486b335
// declared property getter: - (MPMediaItemArtworkInternal)_internal;	// 0x3486b5a1
- (id)albumImageDataWithSize:(CGSize)size;	// 0x3486b4f9
- (id)albumImageWithSize:(CGSize)size;	// 0x3486b4d1
// declared property getter: - (CGRect)bounds;	// 0x3486b521
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x3486b4a9
- (void)dealloc;	// 0x3486b3d5
- (BOOL)hasArtworkAvailable;	// 0x3486b421
// declared property getter: - (CGRect)imageCropRect;	// 0x3486b57d
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x3486b485
- (id)imageWithSize:(CGSize)size;	// 0x3486b425
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x3486b44d
// declared property setter: - (void)set_internal:(MPMediaItemArtworkInternal)internal;	// 0x3486b5b5
@end
