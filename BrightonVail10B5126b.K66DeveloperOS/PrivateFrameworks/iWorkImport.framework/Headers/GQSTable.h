/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {
	GQDTTable *mTable;	// 4 = 0x4
	GQDTOverlapCell *mCurrentOverlapCell;	// 8 = 0x8
	GQDTCell *mLastCellRead;	// 12 = 0xc
	BOOL mIsStreaming;	// 16 = 0x10
	BOOL mAlwaysPutReadCellsInArray;	// 17 = 0x11
	long mCellCount;	// 20 = 0x14
	BOOL mIsCounting;	// 24 = 0x18
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// G=0x368f0051; S=0x368f0061; converted property
@property(retain) id currentOverlapCell;	// G=0x368effa5; S=0x368effb5; converted property
@property(retain) id lastCellRead;	// G=0x368efff1; S=0x368f0001; converted property
- (id)initWithStreaming:(BOOL)streaming table:(id)table;	// 0x368efebd
// converted property getter: - (BOOL)alwaysPutReadCellsInArray;	// 0x368f0051
- (long)column;	// 0x368f0089
// converted property getter: - (id)currentOverlapCell;	// 0x368effa5
- (void)dealloc;	// 0x368eff41
- (void)incrementCellPosition;	// 0x368f00cd
- (BOOL)isCounting;	// 0x368f00f1
- (BOOL)isStreaming;	// 0x368f0031
// converted property getter: - (id)lastCellRead;	// 0x368efff1
- (long)row;	// 0x368f0071
// converted property setter: - (void)setAlwaysPutReadCellsInArray:(BOOL)array;	// 0x368f0061
// converted property setter: - (void)setCurrentOverlapCell:(id)cell;	// 0x368effb5
- (void)setIsCountingCount:(BOOL)count;	// 0x368f00e1
// converted property setter: - (void)setLastCellRead:(id)read;	// 0x368f0001
- (void)skipCells:(long)cells;	// 0x368f00a5
- (id)table;	// 0x368f0041
@end

