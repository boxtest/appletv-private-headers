/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
@private
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x32fcc775; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x32fcc365
- (int)_recalcPageCount;	// 0x32fcc45d
- (id)copyWithZone:(NSZone *)zone;	// 0x32fcc3b9
- (void)dealloc;	// 0x32fcc411
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x32fcc659
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32fcc539
// declared property getter: - (id)view;	// 0x32fcc775
@end

