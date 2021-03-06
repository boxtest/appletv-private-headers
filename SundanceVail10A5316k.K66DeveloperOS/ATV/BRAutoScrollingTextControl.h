/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRMarqueeTextControl, NSAttributedString;

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
@property(assign) BOOL animationUsesDelay;	// G=0x287451; S=0x287441; converted property
@property(retain) id attributedString;	// G=0x28732d; S=0x287275; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x287389; S=0x28735d; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x28734d; S=0x28733d; converted property
@property(assign) BOOL displaysText;	// G=0x287431; S=0x287399; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x287471; S=0x287461; converted property
- (id)init;	// 0x287149
- (void)_removeMarqueeControl;	// 0x2879b9
- (void)_removeTextControl;	// 0x287975
// converted property getter: - (BOOL)animationUsesDelay;	// 0x287451
// converted property getter: - (id)attributedString;	// 0x28732d
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x287389
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x28734d
- (void)dealloc;	// 0x28718d
// converted property getter: - (BOOL)displaysText;	// 0x287431
- (void)layoutSubcontrols;	// 0x287481
- (id)preferredActionForKey:(id)key;	// 0x287871
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x287441
// converted property setter: - (void)setAttributedString:(id)string;	// 0x287275
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x28735d
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x28733d
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x287399
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x287205
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x287461
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x287471
@end

