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
@property(assign) int firstColumn;	// G=0x34c6b4fd; S=0x34dda029; converted property
@property(assign) int firstRow;	// G=0x34c759b9; S=0x34dda015; converted property
@property(assign) int lastColumn;	// G=0x34c759dd; S=0x34dda051; converted property
@property(assign) int lastRow;	// G=0x34c759c9; S=0x34dda03d; converted property
+ (id)reference;	// 0x34dcfedd
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x34d25b51
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x34c6b385
- (id)init;	// 0x34c8e049
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x34d25b9d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x34c6b3e1
- (EDAreaReference)areaReference;	// 0x34dcfe49
- (bool)containsRow:(int)row column:(int)column;	// 0x34c76c9d
- (id)copyWithZone:(NSZone *)zone;	// 0x34d8c025
- (unsigned)countOfCellsBeingReferenced;	// 0x34cf0e29
// converted property getter: - (int)firstColumn;	// 0x34c6b4fd
// converted property getter: - (int)firstRow;	// 0x34c759b9
- (bool)fullyAdjacentToReference:(id)reference;	// 0x34c8a1e9
- (unsigned)hash;	// 0x34d8c02d
- (bool)isCellReference;	// 0x34dcfe6d
- (bool)isColumnReference;	// 0x34dcfeb9
- (BOOL)isEqual:(id)equal;	// 0x34d8cec9
- (BOOL)isEqualToReference:(id)reference;	// 0x34c8a299
- (bool)isRowReference;	// 0x34dcfe95
- (bool)isValidAreaReference;	// 0x34c73681
- (bool)isValidCellReference;	// 0x34cf0e7d
// converted property getter: - (int)lastColumn;	// 0x34c759dd
// converted property getter: - (int)lastRow;	// 0x34c759c9
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x34dda029
// converted property setter: - (void)setFirstRow:(int)row;	// 0x34dda015
// converted property setter: - (void)setLastColumn:(int)column;	// 0x34dda051
// converted property setter: - (void)setLastRow:(int)row;	// 0x34dda03d
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x34c8e0bd
- (void)unionWithReference:(id)reference;	// 0x34d52cdd
- (void)unionWithRow:(int)row column:(int)column;	// 0x34c8e09d
@end
