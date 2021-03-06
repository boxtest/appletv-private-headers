/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPMediaItem, SSKeybagRequest, NSError;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
	MPMediaItem *_mediaItem;	// 8 = 0x8
	SSKeybagRequest *_request;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error;	// G=0x3421e205; S=0x3421e215; @synthesize=_error
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x3421e1c5; S=0x3421e1d5; @synthesize=_mediaItem
@property(retain, nonatomic) SSKeybagRequest *request;	// G=0x3421e1e5; S=0x3421e1f5; @synthesize=_request
- (id)initWithMediaItem:(id)mediaItem;	// 0x3421dde5
- (void)dealloc;	// 0x3421de39
// declared property getter: - (id)error;	// 0x3421e205
// declared property getter: - (id)mediaItem;	// 0x3421e1c5
// declared property getter: - (id)request;	// 0x3421e1e5
- (void)request:(id)request didFailWithError:(id)error;	// 0x3421e0b9
- (void)requestDidFinish:(id)request;	// 0x3421e139
- (void)resolveError:(id)error;	// 0x3421ded5
// declared property setter: - (void)setError:(id)error;	// 0x3421e215
// declared property setter: - (void)setMediaItem:(id)item;	// 0x3421e1d5
// declared property setter: - (void)setRequest:(id)request;	// 0x3421e1f5
@end

