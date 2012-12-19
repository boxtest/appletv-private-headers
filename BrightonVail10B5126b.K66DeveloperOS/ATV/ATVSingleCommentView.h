/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface ATVSingleCommentView : BRControl {
	NSAttributedString *_footer;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BOOL _showsDivider;	// 92 = 0x5c
	XXStruct_qlg9jA _horizontalMargin;	// 96 = 0x60
}
@property(retain, nonatomic) NSAttributedString *footer;	// G=0x3be535; S=0x3be545; @synthesize=_footer
@property(assign, nonatomic) XXStruct_qlg9jA horizontalMargin;	// G=0x3be5c5; S=0x3be5e1; @synthesize=_horizontalMargin
@property(assign, nonatomic) BOOL showsDivider;	// G=0x3be5a5; S=0x3be5b5; @synthesize=_showsDivider
@property(retain, nonatomic) NSAttributedString *text;	// G=0x3be56d; S=0x3be57d; @synthesize=_text
- (void).cxx_destruct;	// 0x3be5f1
- (id)accessibilityLabel;	// 0x3be495
// declared property getter: - (id)footer;	// 0x3be535
// declared property getter: - (XXStruct_qlg9jA)horizontalMargin;	// 0x3be5c5
- (void)layoutSubcontrols;	// 0x3bdfb5
// declared property setter: - (void)setFooter:(id)footer;	// 0x3be545
- (void)setFooterString:(id)string;	// 0x3bdd85
// declared property setter: - (void)setHorizontalMargin:(XXStruct_qlg9jA)margin;	// 0x3be5e1
// declared property setter: - (void)setShowsDivider:(BOOL)divider;	// 0x3be5b5
// declared property setter: - (void)setText:(id)text;	// 0x3be57d
- (void)setTextString:(id)string;	// 0x3bdcb5
// declared property getter: - (BOOL)showsDivider;	// 0x3be5a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3bde55
// declared property getter: - (id)text;	// 0x3be56d
@end
