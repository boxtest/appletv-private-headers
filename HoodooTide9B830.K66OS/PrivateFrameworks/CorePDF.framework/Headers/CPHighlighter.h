/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CPTextLine, CPZone;

@interface CPHighlighter : NSObject {
	CPZone *boundingZone;	// 4 = 0x4
	CPTextLine *textLine;	// 8 = 0x8
	CGColorRef color;	// 12 = 0xc
	CPPDFStyle *style;	// 16 = 0x10
	CPPDFStyle *highlightedStyle;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGColorRef color;	// G=0x310a9941; @synthesize
@property(assign, nonatomic) CPPDFStyle *highlightedStyle;	// G=0x310a9901; S=0x310a9911; @synthesize
@property(assign, nonatomic) CPPDFStyle *style;	// G=0x310a9921; S=0x310a9931; @synthesize
+ (BOOL)reconstructHighlightFor:(id)aFor;	// 0x310a99b5
- (id)initWithTextLine:(id)textLine inZone:(id)zone ofColor:(CGColorRef)color;	// 0x310a9951
// declared property getter: - (CGColorRef)color;	// 0x310a9941
- (void)highlight;	// 0x310a9c49
// declared property getter: - (CPPDFStyle *)highlightedStyle;	// 0x310a9901
// declared property setter: - (void)setHighlightedStyle:(CPPDFStyle *)style;	// 0x310a9911
// declared property setter: - (void)setStyle:(CPPDFStyle *)style;	// 0x310a9931
// declared property getter: - (CPPDFStyle *)style;	// 0x310a9921
@end
