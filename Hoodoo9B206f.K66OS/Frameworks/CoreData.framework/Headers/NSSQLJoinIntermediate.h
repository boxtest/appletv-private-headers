/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLJoinIntermediate : NSSQLIntermediate {
@private
	NSSQLRelationship *_relationship;	// 8 = 0x8
	NSString *_sourceAlias;	// 12 = 0xc
	NSString *_destinationAlias;	// 16 = 0x10
	NSString *_correlationAlias;	// 20 = 0x14
	unsigned _type;	// 24 = 0x18
	BOOL _direct;	// 28 = 0x1c
}
@property(readonly, retain) NSString *correlationAlias;	// G=0x362fe1a9; converted property
@property(retain) NSString *destinationAlias;	// G=0x362fe199; S=0x362fed09; converted property
@property(assign, getter=isDirect) BOOL direct;	// G=0x362fe159; S=0x362fe169; converted property
@property(readonly, retain) NSSQLRelationship *relationship;	// G=0x362fe179; converted property
@property(retain) NSString *sourceAlias;	// G=0x362fe189; S=0x362fed51; converted property
+ (id)createJoinIntermediatesForKeypath:(id)keypath startEntity:(id)entity startAlias:(id)alias forScope:(id)scope inFetchIntermediate:(id)fetchIntermediate inContext:(id)context;	// 0x3623f861
+ (id)createManyToManyJoinIntermediateForProperty:(id)property direct:(BOOL)direct lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x362fe291
+ (id)createToManyJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x362fe345
+ (id)createToOneJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x362fe3e5
- (id)initForRelationship:(id)relationship sourceAlias:(id)alias destinationAlias:(id)alias3 correlationAlias:(id)alias4 direct:(BOOL)direct inScope:(id)scope;	// 0x362fe1d9
- (id)_generateManyToManySQLStringInContext:(id)context;	// 0x362fe51d
- (id)_generateToManySQLStringInContext:(id)context;	// 0x362fe8c1
- (id)_generateToOneSQLStringInContext:(id)context;	// 0x362feaf5
// converted property getter: - (id)correlationAlias;	// 0x362fe1a9
- (void)dealloc;	// 0x362fee9d
- (id)description;	// 0x362fedd9
// converted property getter: - (id)destinationAlias;	// 0x362fe199
- (id)destinationEntity;	// 0x362fed99
- (id)generateSQLStringInContext:(id)context;	// 0x362fe485
// converted property getter: - (BOOL)isDirect;	// 0x362fe159
- (BOOL)joinType;	// 0x362fe1b9
// converted property getter: - (id)relationship;	// 0x362fe179
// converted property setter: - (void)setDestinationAlias:(id)alias;	// 0x362fed09
// converted property setter: - (void)setDirect:(BOOL)direct;	// 0x362fe169
- (void)setJoinType:(unsigned)type;	// 0x362fe1c9
// converted property setter: - (void)setSourceAlias:(id)alias;	// 0x362fed51
// converted property getter: - (id)sourceAlias;	// 0x362fe189
- (id)sourceEntity;	// 0x362fedb9
@end

