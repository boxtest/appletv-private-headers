/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "CoreData-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSMutableDictionary, NSData, NSString;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x32ae6129; S=0x32b30c19; converted property
@property(retain) id compoundIndexes;	// G=0x32b322c9; S=0x32ad3ee9; converted property
@property(retain) id elementID;	// G=0x32b31bf9; S=0x32b31be9; converted property
@property(retain) id managedObjectClassName;	// G=0x32af7979; S=0x32b30821; converted property
@property(retain) NSString *name;	// G=0x32ad3ed9; S=0x32b30a99; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x32ae613d; S=0x32b30c4d; converted property
@property(retain) id renamingIdentifier;	// G=0x32b3098d; S=0x32ad3e31; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x32adc5bd; S=0x32b313f1; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x32ad5cc9; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x32b30215; S=0x32b31569; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x32ae5de1; converted property
@property(retain) NSString *versionHashModifier;	// G=0x32b30259; S=0x32b30a45; converted property
+ (id)_MOClassName;	// 0x32b33f2d
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x32ae7759
+ (void)initialize;	// 0x32b07e41
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x32b308c1
- (id)init;	// 0x32b30371
- (id)initWithCoder:(id)coder;	// 0x32ad336d
- (void)_addProperty:(id)property;	// 0x32b332e9
- (void)_addSubentity:(id)subentity;	// 0x32b32f15
- (id)_allPropertyNames;	// 0x32b31f41
- (id)_attributeNamed:(id)named;	// 0x32b31c09
- (CFSetRef)_collectSubentities;	// 0x32ad8199
- (id)_compoundIndexes;	// 0x32b30359
- (void)_createCachesAndOptimizeState;	// 0x32ad5d51
- (Class)_entityClass;	// 0x32af9b49
- (void)_flattenProperties;	// 0x32ad59b1
- (id)_flattenedSubentities;	// 0x32b30295
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x32adbd61
- (BOOL)_hasCustomPrimitiveProperties;	// 0x32b35111
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x32b32d25
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x32b32e1d
- (id)_initWithName:(id)name;	// 0x32b320ed
- (BOOL)_isDeallocating;	// 0x32b309c1
- (BOOL)_isEditable;	// 0x32adbe71
- (BOOL)_isFlattened;	// 0x32ad5cb5
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x32b31ed1
- (void *)_leopardStyleAttributesByName;	// 0x32addc79
- (void *)_leopardStyleRelationshipsByName;	// 0x32ade2bd
- (id)_localRelationshipNamed:(id)named;	// 0x32b31cbd
- (long)_modelsReferenceID;	// 0x32af6a09
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x32ad83c5
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x32b337e5
- (id)_new_implicitlyObservedKeys;	// 0x32b32001
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x32b302b5
- (id)_propertiesOfType:(unsigned)type;	// 0x32b327e1
- (id)_propertyNamed:(id)named;	// 0x32af2279
- (NSRange *)_propertyRangesByType;	// 0x32b302a5
- (id)_propertySearchMapping;	// 0x32ad8471
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x32b326b1
- (id)_relationshipNamed:(id)named;	// 0x32b31d01
- (id)_relationshipNamesByType:(BOOL)type;	// 0x32b32a2d
- (void)_removeProperty:(id)property;	// 0x32b331c5
- (void)_removePropertyNamed:(id)named;	// 0x32b31f69
- (void)_removeSubentity:(id)subentity;	// 0x32b31e25
- (void)_restoreValidation;	// 0x32b32c5d
- (id)_rootEntity;	// 0x32b31de1
- (void)_setIsEditable:(BOOL)editable;	// 0x32b33509
- (void)_setIsFlattened:(BOOL)flattened;	// 0x32ad5cd9
- (void)_setManagedObjectModel:(id)model;	// 0x32b330e9
- (void)_setModelsReferenceID:(long)anId;	// 0x32ad5d41
- (void)_setSuperentity:(id)superentity;	// 0x32b33161
- (BOOL)_skipValidation;	// 0x32b30335
- (Class)_snapshotClass;	// 0x32b33295
- (id)_sortedSubentities;	// 0x32adc4f1
- (void)_stripForMigration;	// 0x32b32b81
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x32b33695
- (id)_subentityNamed:(id)named;	// 0x32b31db5
- (void)_throwIfNotEditable;	// 0x32ad5d05
- (BOOL)_tryRetain;	// 0x32b309e9
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x32b33859
- (id)attributeKeys;	// 0x32b30631
- (id)attributesByName;	// 0x32b306bd
// converted property getter: - (id)compoundIndexes;	// 0x32b322c9
- (id)copyWithZone:(NSZone *)zone;	// 0x32b31785
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32b30dc5
- (void)dealloc;	// 0x32b028c1
- (id)description;	// 0x32b3164d
// converted property getter: - (id)elementID;	// 0x32b31bf9
- (void)encodeWithCoder:(id)coder;	// 0x32b303bd
- (void)finalize;	// 0x32b31b85
- (unsigned)hash;	// 0x32b09f39
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x32b30751
// converted property getter: - (BOOL)isAbstract;	// 0x32ae6129
- (BOOL)isEqual:(id)equal;	// 0x32b09f61
- (BOOL)isKindOfEntity:(id)entity;	// 0x32b30735
- (id)knownKeysMappingStrategy;	// 0x32b33069
// converted property getter: - (id)managedObjectClassName;	// 0x32af7979
- (id)managedObjectModel;	// 0x32b30249
// converted property getter: - (id)name;	// 0x32ad3ed9
// converted property getter: - (id)properties;	// 0x32ae613d
- (id)propertiesByName;	// 0x32ad8481
- (id)relationshipsByName;	// 0x32b306f9
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x32b30eb1
- (oneway void)release;	// 0x32ad3db1
// converted property getter: - (id)renamingIdentifier;	// 0x32b3098d
- (id)retain;	// 0x32ad3cc9
- (unsigned)retainCount;	// 0x32b30269
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x32b30c19
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x32ad3ee9
// converted property setter: - (void)setElementID:(id)anId;	// 0x32b31be9
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x32b30821
// converted property setter: - (void)setName:(id)name;	// 0x32b30a99
// converted property setter: - (void)setProperties:(id)properties;	// 0x32b30c4d
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x32ad3e31
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x32b313f1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32b31569
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x32b30a45
// converted property getter: - (id)subentities;	// 0x32adc5bd
- (id)subentitiesByName;	// 0x32b30239
// converted property getter: - (id)superentity;	// 0x32ad5cc9
- (id)toManyRelationshipKeys;	// 0x32b31219
- (id)toOneRelationshipKeys;	// 0x32b31041
// converted property getter: - (id)userInfo;	// 0x32b30215
// converted property getter: - (id)versionHash;	// 0x32ae5de1
// converted property getter: - (id)versionHashModifier;	// 0x32b30259
@end

