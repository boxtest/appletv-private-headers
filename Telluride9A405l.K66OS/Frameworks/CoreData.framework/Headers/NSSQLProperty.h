/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSString, NSPropertyDescription, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLProperty : NSStoreMapping {
@private
	NSString *_name;	// 8 = 0x8
	NSPropertyDescription *_propertyDescription;	// 12 = 0xc
	NSSQLEntity *_entity;	// 16 = 0x10
	unsigned _propertyType;	// 20 = 0x14
}
@property(readonly, retain) NSSQLEntity *entity;	// G=0x33f6738d; converted property
@property(readonly, retain) NSString *name;	// G=0x33f3c2b5; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x33f4dfdd; S=0x33f64aad; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x33f3c1f9; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x33f3bfa9
- (void)_setName:(id)name;	// 0x33f3c025
- (id)columnName;	// 0x34012029
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33f64925
- (void)dealloc;	// 0x33f52695
- (id)description;	// 0x34012105
// converted property getter: - (id)entity;	// 0x33f6738d
- (id)externalName;	// 0x33f649fd
- (BOOL)isAttribute;	// 0x34012055
- (BOOL)isColumn;	// 0x3401202d
- (BOOL)isEntityKey;	// 0x340120cd
- (BOOL)isEqual:(id)equal;	// 0x34012189
- (BOOL)isForeignEntityKey;	// 0x3401209d
- (BOOL)isForeignKey;	// 0x34012085
- (BOOL)isForeignOrderKey;	// 0x340120b5
- (BOOL)isManyToMany;	// 0x33f4e005
- (BOOL)isOptLockKey;	// 0x340120e5
- (BOOL)isPrimaryKey;	// 0x3401206d
- (BOOL)isRelationship;	// 0x33f3dcd1
- (BOOL)isToMany;	// 0x33f4dfed
- (BOOL)isToOne;	// 0x33f4f035
// converted property getter: - (id)name;	// 0x33f3c2b5
// converted property getter: - (id)propertyDescription;	// 0x33f4dfdd
// converted property getter: - (unsigned)propertyType;	// 0x33f3c1f9
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x33f64d75
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x33f64aad
- (unsigned)slot;	// 0x340120fd
@end
