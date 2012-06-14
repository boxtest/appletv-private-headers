/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState : GQHState {
@private
	GQHXML *mNavigation;	// 108 = 0x6c
	int mSheetCount;	// 112 = 0x70
	int mTableCount;	// 116 = 0x74
	CFStringRef mCssUri;	// 120 = 0x78
	CFStringRef mCurrentSheetFilename;	// 124 = 0x7c
	CFStringRef mCurrentSheetUri;	// 128 = 0x80
	CGPoint mMaxCanvasPoint;	// 132 = 0x84
	unsigned mCurrentDrawableZOrder;	// 140 = 0x8c
	unsigned mZOrderedDrawableCount;	// 144 = 0x90
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;	// 148 = 0x94
	CFArrayRef mSheetCssUriList;	// 152 = 0x98
	CFStringRef mSheetCssFilename;	// 156 = 0x9c
	CFStringRef mSheetOneCss;	// 160 = 0xa0
	CFStringRef mSheetOneLastCSS;	// 164 = 0xa4
	char *mFirstWorkspaceName;	// 168 = 0xa8
	bool mIsProgressiveMode;	// 172 = 0xac
}
- (id)initWithState:(id)state;	// 0x33fe39b9
- (void)addCachedStyle:(CFStringRef)style;	// 0x33fe43f1
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x33fe44f9
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x33fe3941
- (void)beginNewSheet:(const char *)sheet processorState:(id)state;	// 0x33fe4991
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x33fe42cd
- (unsigned)currentDrawableZOrder;	// 0x33fe3991
- (void)dealloc;	// 0x33fe4ff1
- (BOOL)drawablesNeedCssZOrdering;	// 0x33fe398d
- (int)endSheet;	// 0x33fe457d
- (BOOL)finishMainHtml;	// 0x33fe4339
- (BOOL)inProgressiveMode;	// 0x33fe39a9
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x33fe4431
- (CGPoint)maxCanvasPoint;	// 0x33fe3929
- (void)writeAnchorInNavigationPage:(char *)navigationPage;	// 0x33fe472d
- (void)writeIndexPageWithDocumentSize:(CGSize)documentSize;	// 0x33fe3f01
- (void)writeNavigationPage:(id)page;	// 0x33fe3b05
@end
