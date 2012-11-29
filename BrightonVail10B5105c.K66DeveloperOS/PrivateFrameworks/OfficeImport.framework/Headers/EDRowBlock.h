/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EDRowBlock : NSObject {
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x379692f9; S=0x37952895; converted property
+ (id)rowBlock;	// 0x379527c9
- (id)init;	// 0x37952811
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x37952ec5
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x37952ae1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x37ad19b9
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x3795e1f5
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x37962c6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x37a6bf39
- (void)dealloc;	// 0x37966449
- (void)doneWithContent;	// 0x37966489
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x37962d01
- (unsigned)firstRowNumber;	// 0x379535f5
- (void)incrementIndex;	// 0x37ad1a1d
// converted property getter: - (unsigned)index;	// 0x379692f9
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x37962cad
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x37952a59
- (unsigned)lastRowNumber;	// 0x3795e191
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x37a6bde5
- (unsigned)rowCount;	// 0x3796aa3d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x37953619
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x379529e9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x379529fd
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x37952895
- (unsigned long)startOfCellsOrThrow;	// 0x379532ed
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x37ad18dd
@end
