/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
	unsigned mColumnIndex;	// 4 = 0x4
	NSMutableArray *mFilters;	// 8 = 0x8
	int mFiltersRelation;	// 12 = 0xc
}
@property(assign) unsigned columnIndex;	// G=0x319b0fd5; S=0x319b0fe5; converted property
@property(assign) int filtersRelation;	// G=0x319b0ff5; S=0x319b1005; converted property
- (id)init;	// 0x319b0e85
- (void)addFilter:(id)filter;	// 0x319b0fb1
// converted property getter: - (unsigned)columnIndex;	// 0x319b0fd5
- (void)dealloc;	// 0x319b0efd
- (id)filterAtIndex:(unsigned)index;	// 0x319b0f69
- (unsigned)filterCount;	// 0x319b0f49
// converted property getter: - (int)filtersRelation;	// 0x319b0ff5
// converted property setter: - (void)setColumnIndex:(unsigned)index;	// 0x319b0fe5
// converted property setter: - (void)setFiltersRelation:(int)relation;	// 0x319b1005
@end

