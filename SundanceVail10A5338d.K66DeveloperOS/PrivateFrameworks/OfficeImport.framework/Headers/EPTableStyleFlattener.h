/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {
	EDTable *mTable;	// 72 = 0x48
	unsigned mHeaderRowCount;	// 76 = 0x4c
	unsigned mTotalsRowCount;	// 80 = 0x50
}
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x33b0b851
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x33b0ab29
- (void)clearCache;	// 0x33b0cca1
- (id)collectionFromWorksheet:(id)worksheet;	// 0x33a64b85
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x33b0b255
- (id)extractGlobalStyleElements:(id)elements;	// 0x33b0adf5
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x33b0af79
- (bool)isObjectSupported:(id)supported;	// 0x33a6184d
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x33a64a69
- (int)stripeOffset:(int)offset row:(bool)row;	// 0x33b0cbf5
- (id)styleFromObject:(id)object;	// 0x33b0a939
@end

