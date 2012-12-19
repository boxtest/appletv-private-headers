/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class AVPlayerLayer, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface LTVideoVisualControl : BRControl {
	AVPlayerLayer *_output;	// 84 = 0x54
	NSMutableArray *_subtitleLines;	// 88 = 0x58
	NSDictionary *_subtitleBaseAttributes;	// 92 = 0x5c
	NSDictionary *_subtitleItalicAttributes;	// 96 = 0x60
}
- (id)initWithPlayer:(id)player;	// 0x4cc9
- (id)initWithPlayerLayer:(id)playerLayer;	// 0x4d21
- (void).cxx_destruct;	// 0x5731
- (void)dealloc;	// 0x51a1
- (void)layoutSubcontrols;	// 0x54f1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x5435
- (void)setSubtitleLines:(id)lines;	// 0x5221
@end
