/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDSStyle;

@interface GQDTCell : NSObject {
	unsigned short mColumnIndex;	// 4 = 0x4
	unsigned short mRowIndex;	// 6 = 0x6
	unsigned short mColumnSpan;	// 8 = 0x8
	unsigned short mRowSpan;	// 10 = 0xa
	GQDSStyle *mStyle;	// 12 = 0xc
}
@property(retain) id cellStyle;	// G=0x36a999c1; S=0x36a999d1; converted property
// converted property getter: - (id)cellStyle;	// 0x36a999c1
- (unsigned short)columnIndex;	// 0x36a99981
- (unsigned short)columnSpan;	// 0x36a999a1
- (void)dealloc;	// 0x36a99935
- (void)incrementColumnSpan;	// 0x36a99e15
- (int)readAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x36a99a0d
- (int)readAttributesForBaseTabularCell:(xmlTextReader *)baseTabularCell processor:(id)processor;	// 0x36a99a89
- (int)readBaseAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x36a99ce5
- (unsigned short)rowIndex;	// 0x36a99991
- (unsigned short)rowSpan;	// 0x36a999b1
// converted property setter: - (void)setCellStyle:(id)style;	// 0x36a999d1
@end
