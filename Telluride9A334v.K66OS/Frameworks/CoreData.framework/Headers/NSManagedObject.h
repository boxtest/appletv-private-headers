/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _cd_stateFlags;	// 8 = 0x8
	id _cd_rawData;	// 12 = 0xc
	id _cd_entity;	// 16 = 0x10
	NSManagedObjectContext *_cd_managedObjectContext;	// 20 = 0x14
	NSManagedObjectID *_cd_objectID;	// 24 = 0x18
	unsigned _cd_extraFlags;	// 28 = 0x1c
	id _cd_observationInfo;	// 32 = 0x20
	id *_cd_snapshots;	// 36 = 0x24
	unsigned _cd_lockingInfo;	// 40 = 0x28
	id _cd_queueReference;	// 44 = 0x2c
}
@property(retain) id observationInfo;	// G=0x31ea4b1d; S=0x31ea4b0d; converted property
+ (XXStruct_Iy8xuA *)_PFMOClassFactoryData;	// 0x31e61855
+ (id)_PFPlaceHolderSingleton;	// 0x31eb0e7d
+ (id)_PFPlaceHolderSingleton_core;	// 0x31ea49f5
+ (void)_entityDeallocated;	// 0x31e68af1
+ (BOOL)_hasOverriddenAwake;	// 0x31eb0809
+ (void)_initializeAccessorStubs;	// 0x31eb1929
+ (void)_initializePrimitiveAccessorStubs;	// 0x31eb14bd
+ (BOOL)_isGeneratedClass;	// 0x31e5df25
+ (BOOL)_isGeneratedClass_1;	// 0x31eb07fd
+ (void)_release_1;	// 0x31e68bc5
+ (id)_retain_1;	// 0x31eb10c5
+ (char *)_transientPropertiesChangesMask__;	// 0x31ea4a05
+ (BOOL)_useFastValidationMethod;	// 0x31eb0801
+ (id)alloc;	// 0x31ea4ef9
+ (unsigned)allocBatch:(id *)batch withEntity:(id)entity count:(unsigned)count;	// 0x31eb10e9
+ (id)allocWithEntity:(id)entity;	// 0x31e5e981
+ (id)allocWithZone:(NSZone *)zone;	// 0x31ea4ee9
+ (id)allocWithZone_10_4:(NSZone *)zone_10_4;	// 0x31ea4ed9
+ (id)alloc_10_4;	// 0x31ea4ee1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31ea4ea9
+ (id)batchAllocateWithEntity:(id)entity insertIntoManagedObjectContext:(id)context count:(unsigned)count;	// 0x31eb11cd
+ (Class)classForEntity:(id)entity;	// 0x31e5df29
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;	// 0x31e6fd35
+ (void)initialize;	// 0x31e6d2f5
+ (void)release;	// 0x31eb0805
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x31eb2041
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x31e5f891
+ (id)retain;	// 0x31eb07f9
- (id)init;	// 0x31ea7889
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;	// 0x31e5eb3d
- (id)_allProperties__;	// 0x31ea884d
- (int)_batch_release__;	// 0x31e66129
- (id)_calculateDiffsBetweenOrderedSet:(id)set andOrderedSet:(id)set2;	// 0x31ea8465
- (void)_chainNewError:(id)error toOriginalErrorDoublePointer:(id *)originalErrorDoublePointer;	// 0x31ea8add
- (id)_changedTransientProperties__;	// 0x31ea96b1
- (id)_changedValuesForCurrentEvent;	// 0x31ea840d
- (void)_clearAllChanges__;	// 0x31ea4c05
- (void)_clearPendingChanges__;	// 0x31ea4bb9
- (void)_clearRawPropertiesWithHint:(NSRange)hint;	// 0x31e64eb9
- (void)_clearUnprocessedChanges__;	// 0x31ea4bed
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned)index newValue:(id)value;	// 0x31ea9875
- (BOOL)_defaultValidation:(id *)validation error:(id *)error;	// 0x31eb07f1
- (id)_descriptionValues;	// 0x31ea79e5
- (void)_didChangeValue:(id)value forRelationship:(id)relationship named:(id)named withInverse:(id)inverse;	// 0x31eaa92d
- (void)_excludeObject:(id)object fromPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x31eac7a9
- (id)_faultHandler__;	// 0x31ea9335
- (id)_generateErrorDetailForKey:(id)key withValue:(id)value;	// 0x31ea8bc9
- (id)_generateErrorWithCode:(int)code andMessage:(id)message forKey:(id)key andValue:(id)value additionalDetail:(id)detail;	// 0x31ea8d59
- (id)_genericMutableOrderedSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x31eac369
- (id)_genericMutableSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x31eac259
- (void)_genericUpdateFromSnapshot:(id)snapshot;	// 0x31eadab5
- (id)_genericValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x31e618e1
- (BOOL)_hasAnyObservers__;	// 0x31ea4b85
- (BOOL)_hasPendingChanges;	// 0x31ea4b9d
- (BOOL)_hasRetainedStoreResources__;	// 0x31e5f2fd
- (BOOL)_hasUnprocessedChanges__;	// 0x31ea4bd1
- (id)_implicitObservationInfo;	// 0x31ea8a49
- (void)_includeObject:(id)object intoPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x31eac479
- (id)_initWithEntity:(id)entity withID:(id)anId withHandler:(id)handler withContext:(id)context;	// 0x31e5ea8d
- (BOOL)_isDeallocating;	// 0x31ea4a8d
- (BOOL)_isKindOfEntity:(id)entity;	// 0x31ea8ea5
- (BOOL)_isPendingDeletion__;	// 0x31ea4c8d
- (BOOL)_isPendingInsertion__;	// 0x31ea4cc5
- (BOOL)_isPendingUpdate__;	// 0x31ea4cfd
- (BOOL)_isSuppressingChangeNotifications__;	// 0x31ea4c1d
- (BOOL)_isSuppressingKVO__;	// 0x31ea4c55
- (BOOL)_isUnprocessedDeletion__;	// 0x31ea4d35
- (BOOL)_isUnprocessedInsertion__;	// 0x31ea4d6d
- (BOOL)_isUnprocessedUpdate__;	// 0x31ea4da5
- (BOOL)_isValidRelationshipDestination__;	// 0x31eacac5
- (id)_lastSnapshot__;	// 0x31ea4ded
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property forChange:(unsigned)change onSet:(id)set;	// 0x31eaa579
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property oldDestination:(id)destination newDestination:(id)destination4;	// 0x31eab20d
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;	// 0x31ea88a1
- (id)_newChangedValuesForRefresh__;	// 0x31ea9b1d
- (id)_newCommittedSnapshotValues;	// 0x31ea950d
- (id)_newNestedSaveChangedValuesForParent:(id)parent;	// 0x31eabd05
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;	// 0x31ea899d
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;	// 0x31ea8951
- (id)_newPropertiesForRetainedTypes:(unsigned *)retainedTypes andCopiedTypes:(unsigned *)types preserveFaults:(BOOL)faults;	// 0x31ea994d
- (id)_newSetFromSet:(id)set byApplyingDiffs:(id)diffs;	// 0x31ea9451
- (id)_newSnapshotForUndo__;	// 0x31ea9fad
- (void)_nilOutReservedCurrentEventSnapshot__;	// 0x31ea83d1
- (id)_originalSnapshot__;	// 0x31ea4e49
- (id)_persistentProperties__;	// 0x31ea88f5
- (void)_prepropagateDeleteForMerge;	// 0x31ea8ac9
- (void)_propagateDelete;	// 0x31ea8ab5
- (void)_propagateDelete:(BOOL)aDelete;	// 0x31eab3a1
- (id)_referenceQueue__;	// 0x31e66119
- (id)_reservedCurrentEventSnapshot;	// 0x31ea4e05
- (void)_setGenericValue:(id)value forKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x31eb2e95
- (void)_setHasRetainedStoreResources__:(BOOL)_;	// 0x31e5f311
- (void)_setLastSnapshot__:(id)_;	// 0x31eabc15
- (void)_setObjectID__:(id)_;	// 0x31ea841d
- (void)_setOriginalSnapshot__:(id)_;	// 0x31eabca1
- (void)_setPendingDeletion__:(BOOL)_;	// 0x31ea4ca1
- (void)_setPendingInsertion__:(BOOL)_;	// 0x31ea4cd9
- (void)_setPendingUpdate__:(BOOL)_;	// 0x31ea4d11
- (void)_setSuppressingChangeNotifications__:(BOOL)_;	// 0x31ea4c31
- (void)_setSuppressingKVO__:(BOOL)_;	// 0x31ea4c69
- (void)_setUnprocessedDeletion__:(BOOL)_;	// 0x31ea4d49
- (void)_setUnprocessedInsertion__:(BOOL)_;	// 0x31ea4d81
- (void)_setUnprocessedUpdate__:(BOOL)_;	// 0x31ea4db9
- (void)_setVersionReference__:(unsigned)_;	// 0x31ea4e39
- (unsigned)_stateFlags;	// 0x31ea4ddd
- (id)_substituteEntityAndProperty:(id)property inString:(id)string;	// 0x31ea8c25
- (id)_transientProperties__;	// 0x31ea89e9
- (BOOL)_tryRetain;	// 0x31ea7f71
- (void)_updateFromRefreshSnapshot:(id)refreshSnapshot includingTransients:(BOOL)transients;	// 0x31eae219
- (void)_updateFromSnapshot:(id)snapshot;	// 0x31eadee9
- (void)_updateFromUndoSnapshot:(id)undoSnapshot;	// 0x31eaef85
- (void)_updateToManyRelationship:(id)manyRelationship from:(id)from to:(id)to with:(id)with;	// 0x31ea8ed9
- (BOOL)_validateForSave:(id *)save;	// 0x31ea9339
- (BOOL)_validatePropertiesWithError:(id *)error;	// 0x31eabac9
- (BOOL)_validateValue:(id *)value forProperty:(id)property andKey:(id)key withIndex:(unsigned)index error:(id *)error;	// 0x31eacb51
- (unsigned)_versionReference__;	// 0x31ea4e29
- (void)awakeFromFetch;	// 0x31e63881
- (void)awakeFromInsert;	// 0x31ea4b31
- (void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;	// 0x31ea4b35
- (id)changedValues;	// 0x31ea5661
- (id)changedValuesForCurrentEvent;	// 0x31ea4f09
- (id)committedValuesForKeys:(id)keys;	// 0x31ea591d
- (void)dealloc;	// 0x31e6633d
- (id)description;	// 0x31ea790d
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x31ea5ee1
- (void)didAccessValueForKey:(id)key;	// 0x31ea4b2d
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x31ea72cd
- (void)didChangeValueForKey:(id)key;	// 0x31ea7399
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x31ea71fd
- (void)didFireFault;	// 0x31ea4b79
- (void)didRefresh:(BOOL)refresh;	// 0x31ea4b81
- (void)didSave;	// 0x31ea4b41
- (void)didTurnIntoFault;	// 0x31e65089
- (void)diffOrderedSets:(id)sets :(id)arg2 :(id *)arg3 :(id *)arg4 :(id *)arg5 :(id *)arg6 :(id *)arg7;	// 0x31ead201
- (id)entity;	// 0x31ea4acd
- (unsigned)faultingState;	// 0x31ea4b45
- (void)finalize;	// 0x31ea7f01
- (BOOL)hasChanges;	// 0x31ea4b59
- (BOOL)hasFaultForRelationshipNamed:(id)relationshipNamed;	// 0x31ea7585
- (unsigned)hash;	// 0x31ea4a09
- (BOOL)implementsSelector:(SEL)selector;	// 0x31eb08f5
- (BOOL)isDeleted;	// 0x31ea7809
- (BOOL)isEqual:(id)equal;	// 0x31ea4a6d
- (BOOL)isFault;	// 0x31ea4af9
- (BOOL)isInserted;	// 0x31ea4add
- (BOOL)isUpdated;	// 0x31ea7849
- (id)managedObjectContext;	// 0x31ea4aa1
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x31eb0891
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31eb0989
- (id)mutableArrayValueForKey:(id)key;	// 0x31ea6bfd
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x31ea68fd
- (id)mutableSetValueForKey:(id)key;	// 0x31ea6a7d
- (id)objectID;	// 0x31e64cc5
// converted property getter: - (id)observationInfo;	// 0x31ea4b1d
- (void)prepareForDeletion;	// 0x31ea4b39
- (id)primitiveValueForKey:(id)key;	// 0x31ea6775
- (oneway void)release;	// 0x31ea7fd1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31eb082d
- (id)retain;	// 0x31ea8105
- (unsigned)retainCount;	// 0x31ea4a79
- (void)setNilValueForKey:(id)key;	// 0x31ea52f5
// converted property setter: - (void)setObservationInfo:(id)info;	// 0x31ea4b0d
- (void)setPrimitiveValue:(id)value forKey:(id)key;	// 0x31ea666d
- (void)setValue:(id)value forKey:(id)key;	// 0x31ea6875
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x31ea53c1
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x31ea62d5
- (BOOL)validateForDelete:(id *)aDelete;	// 0x31ea6da5
- (BOOL)validateForInsert:(id *)insert;	// 0x31ea6d5d
- (BOOL)validateForUpdate:(id *)update;	// 0x31ea6d15
- (BOOL)validateValue:(id *)value forKey:(id)key error:(id *)error;	// 0x31ea7189
- (id)valueForKey:(id)key;	// 0x31e5f661
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x31ea5511
- (void)willAccessValueForKey:(id)key;	// 0x31ea74d1
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x31ea733d
- (void)willChangeValueForKey:(id)key;	// 0x31ea7449
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x31ea7271
- (void)willFireFault;	// 0x31ea4b75
- (void)willRefresh:(BOOL)refresh;	// 0x31ea4b7d
- (void)willSave;	// 0x31ea4b3d
- (void)willTurnIntoFault;	// 0x31e64eb5
@end

