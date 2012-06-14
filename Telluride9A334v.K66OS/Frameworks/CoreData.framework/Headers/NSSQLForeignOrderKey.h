/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey : NSSQLColumn {
@private
	NSSQLForeignKey *_foreignKey;	// 52 = 0x34
}
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x31f46135; converted property
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x31f461bd
- (id)initWithEntity:(id)entity foreignKey:(id)key;	// 0x31f462bd
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x31f46261
- (void)dealloc;	// 0x31f46155
// converted property getter: - (id)foreignKey;	// 0x31f46135
- (void)setFKForReadOnlyFetch:(id)readOnlyFetch;	// 0x31f46145
- (id)toOneRelationship;	// 0x31f46195
@end
