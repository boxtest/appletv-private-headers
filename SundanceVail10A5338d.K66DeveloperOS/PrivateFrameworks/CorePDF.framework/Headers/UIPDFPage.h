/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject {
	CGPDFPageRef _cgPage;	// 4 = 0x4
	unsigned _pageNumber;	// 8 = 0x8
	NSString *_stringInReadingOrder;	// 12 = 0xc
	UIPDFSelection *_selection;	// 16 = 0x10
	UIPDFDocument *_document;	// 20 = 0x14
	unsigned _pageIndex;	// 24 = 0x18
}
@property(readonly, assign) CGPDFPageRef CGPage;	// G=0x333164f9; @synthesize=_cgPage
@property(readonly, assign) CGRect cropBox;	// G=0x33316255; 
@property(readonly, assign) UIPDFDocument *document;	// G=0x3331656d; @synthesize=_document
@property(readonly, assign) unsigned pageIndex;	// G=0x33316521; @synthesize=_pageIndex
@property(readonly, assign) unsigned pageNumber;	// G=0x3331650d; @synthesize=_pageNumber
@property(retain) UIPDFSelection *selection;	// G=0x33316535; S=0x33316549; @synthesize=_selection
- (id)initWithCGPDFPage:(CGPDFPageRef)cgpdfpage;	// 0x3331607d
// declared property getter: - (CGPDFPageRef)CGPage;	// 0x333164f9
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned)nsoptions;	// 0x333163a5
// declared property getter: - (CGRect)cropBox;	// 0x33316255
- (CGRect)cropBoxAccountForRotation;	// 0x33316271
- (void)dealloc;	// 0x333160dd
// declared property getter: - (id)document;	// 0x3331656d
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x33316159
- (id)findString:(id)string fromSelection:(id)selection options:(unsigned)options;	// 0x333163c9
- (CGRect)mediaBox;	// 0x333162f9
- (CGRect)mediaBoxAccountForRotation;	// 0x33316315
// declared property getter: - (unsigned)pageIndex;	// 0x33316521
// declared property getter: - (unsigned)pageNumber;	// 0x3331650d
- (unsigned)rotation;	// 0x33316331
// declared property getter: - (id)selection;	// 0x33316535
// declared property setter: - (void)setSelection:(id)selection;	// 0x33316549
- (CGSize)size;	// 0x33316229
- (id)string;	// 0x3331636d
@end

