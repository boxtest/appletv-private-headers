/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {
	WDTableRow *mWdTableRow;	// 8 = 0x8
	double mHeight;	// 12 = 0xc
}
+ (BOOL)isTableRowDeleted:(id)deleted;	// 0x34ade2fd
- (id)initWithWDTableRow:(id)wdtableRow parent:(id)parent;	// 0x34ade535
- (double)height;	// 0x34ade9dd
- (void)mapAt:(id)at withState:(id)state;	// 0x34ade6a1
- (void)setRowProperties:(id)properties;	// 0x34ade5b1
@end
