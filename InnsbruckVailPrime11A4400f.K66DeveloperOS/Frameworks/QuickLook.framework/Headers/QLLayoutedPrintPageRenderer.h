/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLRemotePrintPageHelper.h"

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper {
	NSMutableArray *_nodes;	// 28 = 0x1c
	UIWebPaginationInfo *_paginationInfo;	// 32 = 0x20
}
- (id)_currentNodes;	// 0x2f311481
- (id)_htmlPageXPath;	// 0x2f311209
- (void)dealloc;	// 0x2f3111a5
- (int)numberOfPages;	// 0x2f3115f5
- (id)pdfDataForPageAtIndex:(int)index withSize:(CGSize)size printingDone:(BOOL *)done;	// 0x2f3116b1
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x2f31161d
@end

