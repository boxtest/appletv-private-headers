/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSEntityDescription, NSString, NSArray, NSDictionary;

@interface NSEntityStoreMapping : NSStoreMapping {
	NSEntityDescription *_entity;	// 8 = 0x8
	NSDictionary *_propertyMappings;	// 12 = 0xc
	NSArray *_primaryKeys;	// 16 = 0x10
	BOOL _isSingleTableEntity;	// 20 = 0x14
	NSString *_subentityColumn;	// 24 = 0x18
	unsigned _subentityID;	// 28 = 0x1c
}
@property(retain) NSEntityDescription *entity;	// G=0x30ee15fd; S=0x30ee160d; converted property
@property(retain) NSArray *primaryKeys;	// G=0x30ee1671; S=0x30ee1681; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x30ee161d; S=0x30ee162d; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x30ee16c5; S=0x30ee16d5; converted property
@property(retain) NSString *subentityColumn;	// G=0x30ee16e5; S=0x30ee16f5; converted property
@property(assign) unsigned subentityID;	// G=0x30ee1739; S=0x30ee1749; converted property
- (id)initWithEntity:(id)entity;	// 0x30ee1251
- (id)attributeColumnDefinitions;	// 0x30ee1bd5
- (id)attributeMappings;	// 0x30ee1759
- (id)createTableStatement;	// 0x30ee1e29
- (void)dealloc;	// 0x30ee1345
- (id)description;	// 0x30ee13c5
// converted property getter: - (id)entity;	// 0x30ee15fd
- (id)foreignKeyColumnDefinitions;	// 0x30ee1c09
- (id)foreignKeyConstraintDefinitions;	// 0x30ee1d19
- (BOOL)isEqual:(id)equal;	// 0x30ee1441
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x30ee16c5
- (id)primaryKeyColumnDefinitions;	// 0x30ee1ac1
// converted property getter: - (id)primaryKeys;	// 0x30ee1671
// converted property getter: - (id)propertyMappings;	// 0x30ee161d
- (id)relationshipMappings;	// 0x30ee190d
// converted property setter: - (void)setEntity:(id)entity;	// 0x30ee160d
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x30ee1681
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x30ee162d
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x30ee16d5
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x30ee16f5
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x30ee1749
// converted property getter: - (id)subentityColumn;	// 0x30ee16e5
// converted property getter: - (unsigned)subentityID;	// 0x30ee1739
@end
