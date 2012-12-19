/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRMarimbaLayer, MRTextRenderer, MPText;

@interface MRMarimbaLayoutManager : NSObject {
	MRTextRenderer *_textRenderer;	// 4 = 0x4
	MRMarimbaLayer *_marimbaLayer;	// 8 = 0x8
	MPText *_text;	// 12 = 0xc
}
@property(retain, nonatomic) MRMarimbaLayer *marimbaLayer;	// G=0x333dd25d; S=0x333dd26d; @synthesize=_marimbaLayer
@property(retain, nonatomic) MPText *text;	// G=0x333dd27d; S=0x333dd28d; @synthesize=_text
@property(readonly, retain) MRTextRenderer *textRenderer;	// G=0x333dcee9; converted property
- (id)init;	// 0x333dce0d
- (id)_renderer;	// 0x333dd039
- (CGRect)currentRectForEditedText;	// 0x333dd059
- (void)dealloc;	// 0x333dce71
- (int)lineCount;	// 0x333dcef9
// declared property getter: - (id)marimbaLayer;	// 0x333dd25d
// declared property setter: - (void)setMarimbaLayer:(id)layer;	// 0x333dd26d
// declared property setter: - (void)setText:(id)text;	// 0x333dd28d
- (CGPoint)shadowOffset;	// 0x333dd209
// declared property getter: - (id)text;	// 0x333dd27d
// converted property getter: - (id)textRenderer;	// 0x333dcee9
- (void)updateWithString:(id)string;	// 0x333dcf19
@end
