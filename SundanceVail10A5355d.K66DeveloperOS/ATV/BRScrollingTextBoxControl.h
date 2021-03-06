/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, BRVerticalScrollBarControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextBoxControl : BRControl {
	BRListControl *_list;	// 80 = 0x50
	NSAttributedString *_text;	// 84 = 0x54
	BRVerticalScrollBarControl *_scrollBar;	// 88 = 0x58
	float _textHeightFactor;	// 92 = 0x5c
	long _upperFocusLimit;	// 96 = 0x60
	long _lowerFocusLimit;	// 100 = 0x64
}
@property(retain) NSAttributedString *text;	// G=0x2e0841; S=0x2e07c1; converted property
@property(assign) float textHeightFactor;	// G=0x2e0861; S=0x2e0851; converted property
- (id)init;	// 0x2e04b1
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x2e0cb9
- (void)_forceSelectionToFocusLimit;	// 0x2e0be5
- (void)_listSelectionChanged:(id)changed;	// 0x2e0bd5
- (void)_providerCountChanged:(id)changed;	// 0x2e0e81
- (id)accessibilityLabel;	// 0x2e0bad
- (BOOL)brEventAction:(id)action;	// 0x2e0871
- (void)dealloc;	// 0x2e071d
- (void)layoutSubcontrols;	// 0x2e090d
// converted property setter: - (void)setText:(id)text;	// 0x2e07c1
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x2e0851
// converted property getter: - (id)text;	// 0x2e0841
// converted property getter: - (float)textHeightFactor;	// 0x2e0861
@end

