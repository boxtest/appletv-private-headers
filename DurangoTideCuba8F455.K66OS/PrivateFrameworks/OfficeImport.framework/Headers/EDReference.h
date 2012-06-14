/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDReference : NSObject <NSCopying> {
@private
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x32aee16d; S=0x32d01fa9; converted property
@property(assign) int firstRow;	// G=0x32b08669; S=0x32d01f99; converted property
@property(assign) int lastColumn;	// G=0x32b08689; S=0x32d01fd1; converted property
@property(assign) int lastRow;	// G=0x32b08679; S=0x32d01fbd; converted property
+ (id)reference;	// 0x32cf5c19
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x32c6e42d
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x32aedf25
- (id)init;	// 0x32b0818d
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x32c6e471
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x32aedf79
- (EDAreaReference)areaReference;	// 0x32cf5b39
- (bool)containsRow:(int)row column:(int)column;	// 0x32b09da5
- (id)copyWithZone:(NSZone *)zone;	// 0x32cf5c59
- (unsigned)countOfCellsBeingReferenced;	// 0x32c48931
// converted property getter: - (int)firstColumn;	// 0x32aee16d
// converted property getter: - (int)firstRow;	// 0x32b08669
- (bool)fullyAdjacentToReference:(id)reference;	// 0x32afe761
- (unsigned)hash;	// 0x32cf5b15
- (bool)isCellReference;	// 0x32cf5b55
- (bool)isColumnReference;	// 0x32cf5ba1
- (BOOL)isEqual:(id)equal;	// 0x32cf5bc5
- (BOOL)isEqualToReference:(id)reference;	// 0x32afe819
- (bool)isRowReference;	// 0x32cf5b7d
- (bool)isValidAreaReference;	// 0x32afd249
- (bool)isValidCellReference;	// 0x32c48985
// converted property getter: - (int)lastColumn;	// 0x32b08689
// converted property getter: - (int)lastRow;	// 0x32b08679
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x32d01fa9
// converted property setter: - (void)setFirstRow:(int)row;	// 0x32d01f99
// converted property setter: - (void)setLastColumn:(int)column;	// 0x32d01fd1
// converted property setter: - (void)setLastRow:(int)row;	// 0x32d01fbd
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x32b081fd
- (void)unionWithReference:(id)reference;	// 0x32c97d0d
- (void)unionWithRow:(int)row column:(int)column;	// 0x32b081dd
@end
