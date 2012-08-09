/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class SKScrollLayer;

@interface SKScrollBar : SKLayer {
	SKScrollLayer *_scrollLayer;	// 56 = 0x38
	float _viewH;	// 60 = 0x3c
	float _contentH;	// 64 = 0x40
	float _length;	// 68 = 0x44
	BOOL _horizontal;	// 72 = 0x48
	SKLayer *_scrollHandle;	// 76 = 0x4c
}
- (id)initForScrollLayer:(id)scrollLayer;	// 0x30c41191
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x30c416b9
- (float)scrollOrigin;	// 0x30c415bd
- (void)setBounds:(CGRect)bounds;	// 0x30c4125d
- (void)setContentHeight:(float)height;	// 0x30c4159d
- (void)setScrollPosition:(float)position;	// 0x30c41649
- (void)setViewableHeight:(float)height;	// 0x30c4157d
- (void)updateHandleFrame;	// 0x30c41449
- (void)updateHandlePosition;	// 0x30c41339
@end
