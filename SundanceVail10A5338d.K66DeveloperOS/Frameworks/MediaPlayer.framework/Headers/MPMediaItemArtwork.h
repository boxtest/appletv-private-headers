/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPMediaItemArtwork : NSObject {
	MPMediaItemArtworkInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// G=0x341997fd; S=0x34199811; @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x3419977d; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x341997d9; 
- (id)initWithImage:(id)image;	// 0x34199591
// declared property getter: - (MPMediaItemArtworkInternal)_internal;	// 0x341997fd
- (id)albumImageDataWithSize:(CGSize)size;	// 0x34199755
- (id)albumImageWithSize:(CGSize)size;	// 0x3419972d
// declared property getter: - (CGRect)bounds;	// 0x3419977d
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x34199705
- (void)dealloc;	// 0x34199631
- (BOOL)hasArtworkAvailable;	// 0x3419967d
// declared property getter: - (CGRect)imageCropRect;	// 0x341997d9
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x341996e1
- (id)imageWithSize:(CGSize)size;	// 0x34199681
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x341996a9
// declared property setter: - (void)set_internal:(MPMediaItemArtworkInternal)internal;	// 0x34199811
@end
