/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewPrintFormatter.h"

@class UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
@private
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
- (int)_recalcPageCount;	// 0x3224f891
- (id)_webDocumentView;	// 0x3224f779
- (id)copyWithZone:(NSZone *)zone;	// 0x3224f7f9
- (void)dealloc;	// 0x3224f849
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x3224fa09
- (CGRect)rectForPageAtIndex:(int)index;	// 0x3224f979
- (void)removeFromPrintPageRenderer;	// 0x3224f7ad
@end

