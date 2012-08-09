/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQHState.h"
#import "iWorkImport-Structs.h"

@class GQHXML;

@interface GQHLassoState : GQHState {
	GQHXML *mNavigation;	// 108 = 0x6c
	GQHXML *mIndex;	// 112 = 0x70
	int mSheetCount;	// 116 = 0x74
	int mTableCount;	// 120 = 0x78
	CFStringRef mCssUri;	// 124 = 0x7c
	CFStringRef mCurrentSheetFilename;	// 128 = 0x80
	CFArrayRef mSheetFilenameList;	// 132 = 0x84
	CFArrayRef mSheetUriList;	// 136 = 0x88
	CFStringRef mCurrentSheetUri;	// 140 = 0x8c
	CGPoint mMaxCanvasPoint;	// 144 = 0x90
	unsigned mCurrentDrawableZOrder;	// 152 = 0x98
	unsigned mZOrderedDrawableCount;	// 156 = 0x9c
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;	// 160 = 0xa0
	CFArrayRef mSheetCssUriList;	// 164 = 0xa4
	CFStringRef mSheetCssFilename;	// 168 = 0xa8
	CFStringRef mSheetOneCss;	// 172 = 0xac
	CFStringRef mSheetOneLastCSS;	// 176 = 0xb0
	char *mFirstWorkspaceName;	// 180 = 0xb4
	bool mIsProgressiveMode;	// 184 = 0xb8
}
- (id)initWithState:(id)state;	// 0x3582c0c5
- (id).cxx_construct;	// 0x3582dfd5
- (void)addCachedStyle:(CFStringRef)style;	// 0x3582cf99
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x3582cdf5
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x3582d13d
- (void)beginNewSheet:(const char *)sheet processorState:(id)state;	// 0x3582c459
- (void)cacheAnchorForIndexPage:(char *)indexPage;	// 0x3582cc31
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x3582d195
- (unsigned)currentDrawableZOrder;	// 0x3582d201
- (void)dealloc;	// 0x3582c239
- (BOOL)drawablesNeedCssZOrdering;	// 0x3582d191
- (int)endSheet;	// 0x3582cc85
- (BOOL)finishMainHtml;	// 0x3582cff1
- (BOOL)inProgressiveMode;	// 0x3582deb1
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x3582cea5
- (CGPoint)maxCanvasPoint;	// 0x3582d125
- (void)writeAnchorInNavigationPage:(char *)navigationPage;	// 0x3582c9e5
- (void)writeIndexPageWithDocumentSize:(CGSize)documentSize;	// 0x3582d219
- (BOOL)writeIndexPageWithIFrame:(id)iframe;	// 0x3582d545
- (void)writeNavigationPage:(id)page;	// 0x3582db29
- (CFStringRef)writeTabsJS;	// 0x3582dec5
@end
