/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper {
	OADTable *mTable;	// 8 = 0x8
	OADTableRow *mRow;	// 12 = 0xc
	unsigned mRowIndex;	// 16 = 0x10
}
- (id)initWithOadTable:(id)oadTable rowIndex:(unsigned)index parent:(id)parent;	// 0x31d156c5
- (unsigned)cellCount;	// 0x31d161ed
- (float)height;	// 0x31d15da9
- (void)mapAt:(id)at withState:(id)state;	// 0x31d1573d
@end
