/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKScrollLayer.h"
#import "SkankKit-Structs.h"

@class NSMutableString, DPTextLayer;

@interface SKTextScrollView : SKScrollLayer {
	NSMutableString *_text;	// 104 = 0x68
	DPTextLayer *_textContents;	// 108 = 0x6c
}
- (id)init;	// 0x30c3f57d
- (void)appendString:(id)string;	// 0x30c3f82d
- (void)setFontColor:(CGColorRef)color;	// 0x30c3f711
- (void)setFrame:(CGRect)frame;	// 0x30c3f675
- (void)setText:(id)text;	// 0x30c3f7e1
- (void)updateContents;	// 0x30c3f731
@end
