/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPage;

@interface UIPDFSelection : NSObject {
@private
	UIPDFPage *_page;	// 4 = 0x4
	CGPDFSelectionRef _cgSelection;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	CFStringRef _string;	// 16 = 0x10
}
@property(readonly, retain) UIPDFPage *page;	// G=0x32654709; converted property
- (id)initWithPage:(id)page cgSelection:(CGPDFSelectionRef)selection;	// 0x32654dc5
- (CGPDFSelectionRef)CGSelection;	// 0x32654719
- (id)attributedStringAtIndex:(unsigned)index;	// 0x32654a79
- (CGRect)bounds;	// 0x326548bd
- (id)containingTextLine;	// 0x32654b2d
- (void)dealloc;	// 0x32654d51
- (id)description;	// 0x32654e4d
- (void)extendToParagraph;	// 0x32654d1d
- (BOOL)getBounds:(CGRect *)bounds transform:(CGAffineTransform *)transform index:(unsigned)index;	// 0x32654749
- (id)htmlAtIndex:(unsigned)index;	// 0x32654bc5
- (BOOL)isEmpty;	// 0x32654add
- (BOOL)isNonEmpty;	// 0x32654b05
- (BOOL)isWord;	// 0x32654cfd
- (unsigned)numberOfRectangles;	// 0x32654729
// converted property getter: - (id)page;	// 0x32654709
- (id)string;	// 0x32654a1d
- (id)textAtIndex:(unsigned)index;	// 0x32654c61
- (CGAffineTransform)transform;	// 0x326547a5
@end

