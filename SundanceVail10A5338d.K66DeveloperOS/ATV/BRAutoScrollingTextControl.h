/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
	NSAttributedString *_text;	// 80 = 0x50
	BRMarqueeTextControl *_scrollingTextControl;	// 84 = 0x54
	BRTextControl *_textControl;	// 88 = 0x58
	BOOL _crossfadeEnabled;	// 92 = 0x5c
	BOOL _autoScrollEnabled;	// 93 = 0x5d
	BOOL _displaysText;	// 94 = 0x5e
	BOOL _useAlphaFadeMask;	// 95 = 0x5f
	BOOL _animationUsesDelay;	// 96 = 0x60
}
@property(assign) BOOL animationUsesDelay;	// G=0x28c799; S=0x28c789; converted property
@property(retain) id attributedString;	// G=0x28c675; S=0x28c5bd; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x28c6d1; S=0x28c6a5; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x28c695; S=0x28c685; converted property
@property(assign) BOOL displaysText;	// G=0x28c779; S=0x28c6e1; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x28c7b9; S=0x28c7a9; converted property
- (id)init;	// 0x28c491
- (void)_removeMarqueeControl;	// 0x28cd01
- (void)_removeTextControl;	// 0x28ccbd
// converted property getter: - (BOOL)animationUsesDelay;	// 0x28c799
// converted property getter: - (id)attributedString;	// 0x28c675
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x28c6d1
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x28c695
- (void)dealloc;	// 0x28c4d5
// converted property getter: - (BOOL)displaysText;	// 0x28c779
- (void)layoutSubcontrols;	// 0x28c7c9
- (id)preferredActionForKey:(id)key;	// 0x28cbb9
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x28c789
// converted property setter: - (void)setAttributedString:(id)string;	// 0x28c5bd
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x28c6a5
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x28c685
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x28c6e1
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x28c54d
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x28c7a9
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x28c7b9
@end
