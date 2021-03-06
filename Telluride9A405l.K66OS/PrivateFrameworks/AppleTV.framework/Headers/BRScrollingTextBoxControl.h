/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, NSAttributedString, BRVerticalScrollBarControl;

@interface BRScrollingTextBoxControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	BRVerticalScrollBarControl *_scrollBar;	// 56 = 0x38
	float _textHeightFactor;	// 60 = 0x3c
	long _upperFocusLimit;	// 64 = 0x40
	long _lowerFocusLimit;	// 68 = 0x44
}
@property(retain) NSAttributedString *text;	// G=0x35e237d5; S=0x35e23755; converted property
@property(assign) float textHeightFactor;	// G=0x35e237f5; S=0x35e237e5; converted property
- (id)init;	// 0x35e2343d
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x35e23c3d
- (void)_forceSelectionToFocusLimit;	// 0x35e23b61
- (void)_listSelectionChanged:(id)changed;	// 0x35e23b51
- (void)_providerCountChanged:(id)changed;	// 0x35e23e01
- (id)accessibilityLabel;	// 0x35e23b29
- (BOOL)brEventAction:(id)action;	// 0x35e23805
- (void)dealloc;	// 0x35e236b1
- (void)layoutSubcontrols;	// 0x35e238a1
// converted property setter: - (void)setText:(id)text;	// 0x35e23755
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x35e237e5
// converted property getter: - (id)text;	// 0x35e237d5
// converted property getter: - (float)textHeightFactor;	// 0x35e237f5
@end

