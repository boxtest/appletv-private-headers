/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
	int _spinLock;	// 4 = 0x4
	id _parentObjectStore;	// 8 = 0x8
	NSUndoManager *_undoManager;	// 12 = 0xc
	void *_dispatchQueue;	// 16 = 0x10
	managedObjectContextFlags _flags;	// 20 = 0x14
	NSMutableSet *_unprocessedChanges;	// 24 = 0x18
	NSMutableSet *_unprocessedDeletes;	// 28 = 0x1c
	NSMutableSet *_unprocessedInserts;	// 32 = 0x20
	NSMutableSet *_insertedObjects;	// 36 = 0x24
	NSMutableSet *_deletedObjects;	// 40 = 0x28
	NSMutableSet *_changedObjects;	// 44 = 0x2c
	NSMutableSet *_lockedObjects;	// 48 = 0x30
	NSMutableSet *_refreshedObjects;	// 52 = 0x34
	id _infoByGID;	// 56 = 0x38
	id *_cachedObsInfoByEntity;	// 60 = 0x3c
	short _undoTransactionID;	// 64 = 0x40
	id _lock;	// 68 = 0x44
	long _lockCount;	// 72 = 0x48
	long _objectStoreLockCount;	// 76 = 0x4c
	double _fetchTimestamp;	// 80 = 0x50
	id _delegate;	// 88 = 0x58
	id _referenceQueue;	// 92 = 0x5c
	id _userinfo;	// 96 = 0x60
	id _mergePolicy;	// 100 = 0x64
	int _cd_rc;	// 104 = 0x68
	int _ignoreChangeNotification;	// 108 = 0x6c
	id _editors;	// 112 = 0x70
	id *_debuggingRecords;	// 116 = 0x74
	id _childObjectStores;	// 120 = 0x78
	id _reserved2;	// 124 = 0x7c
}
@property(readonly, retain) NSMutableSet *deletedObjects;	// G=0x33d28139; converted property
@property(readonly, retain) NSMutableSet *insertedObjects;	// G=0x33d28075; converted property
@property(retain) id mergePolicy;	// G=0x33d26b81; S=0x33ccf6fd; converted property
@property(retain) id parentContext;	// G=0x33d2cf49; S=0x33d2cdf9; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x33ccf95d; S=0x33ccf451; converted property
@property(assign) BOOL propagatesDeletesAtEndOfEvent;	// G=0x33d281fd; S=0x33d28211; converted property
@property(assign) BOOL retainsRegisteredObjects;	// G=0x33d26acd; S=0x33d26a2d; converted property
@property(assign) double stalenessInterval;	// G=0x33d27c25; S=0x33ccf7b1; converted property
@property(retain) NSUndoManager *undoManager;	// G=0x33d27cc5; S=0x33ccf619; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x33d268b5
+ (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x33d306d1
+ (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave intoContexts:(id)contexts;	// 0x33d36865
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d268b1
+ (void)initialize;	// 0x33cb8b75
- (id)init;	// 0x33ccec49
- (id)initWithCoder:(id)coder;	// 0x33d2b611
- (id)initWithConcurrencyType:(unsigned)concurrencyType;	// 0x33ccec85
- (BOOL)_attemptCoalesceChangesForFetch;	// 0x33d33ef9
- (unsigned)_batchRetainedObjects:(id *)objects forCount:(unsigned)count withIDs:(id *)ids optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x33d2feb9
- (void)_changeIDsForManagedObjects:(id)managedObjects toIDs:(id)ids;	// 0x33d2f9d5
- (void)_clearChangedThisTransaction:(id)transaction;	// 0x33d33881
- (void)_clearDeletions;	// 0x33d31e45
- (void)_clearInsertions;	// 0x33d31c55
- (void)_clearLockedObjects;	// 0x33d32225
- (void)_clearOriginalSnapshotAndInitializeRec:(id)rec;	// 0x33d326a9
- (void)_clearOriginalSnapshotForObject:(id)object;	// 0x33d32671
- (void)_clearRefreshedObjects;	// 0x33d32245
- (void)_clearUnprocessedDeletions;	// 0x33d31f3d
- (void)_clearUnprocessedInsertions;	// 0x33d31d4d
- (void)_clearUnprocessedUpdates;	// 0x33d3212d
- (void)_clearUpdates;	// 0x33d32035
- (id)_committedSnapshotForObject:(id)object;	// 0x33d32719
- (void)_copyChildObject:(id)object toParentObject:(id)parentObject fromChildContext:(id)childContext;	// 0x33d37f29
- (unsigned)_countWithMergedChangesForRequest:(id)request possibleChanges:(id)changes possibleDeletes:(id)deletes error:(id *)error;	// 0x33d2dad1
- (unsigned)_countWithNoChangesForRequest:(id)request error:(id *)error;	// 0x33d2d1d5
- (void)_createAndPostChangeNotification:(id)notification withDeletions:(id)deletions withUpdates:(id)updates withRefreshes:(id)refreshes;	// 0x33d3473d
- (id)_createStoreFetchRequestForFetchRequest:(id)fetchRequest;	// 0x33cd0d7d
- (id)_currentEventSnapshotForObject:(id)object;	// 0x33d32781
- (void)_dealloc__;	// 0x33d27669
- (id)_debuggingOnly_localObjectForGlobalID:(id)globalID;	// 0x33d3265d
- (id)_delegate;	// 0x33d367ed
- (void)_didSaveChanges;	// 0x33d30fb1
- (void)_disableChangeNotifications;	// 0x33d3533d
- (BOOL)_disableDiscardEditing;	// 0x33d3282d
- (void)_dispose:(BOOL)dispose;	// 0x33d2efd9
- (void)_disposeObjects:(id *)objects count:(unsigned long)count notifyParent:(BOOL)parent;	// 0x33d2ee3d
- (void)_enableChangeNotifications;	// 0x33d35351
- (void)_enqueueEndOfEventNotification;	// 0x33d34fb1
- (void)_establishEventSnapshotsForObject:(id)object;	// 0x33d32879
- (void)_forceInsertionForObject:(id)object;	// 0x33d3366d
- (void)_forceRemoveFromDeletedObjects:(id)deletedObjects;	// 0x33d337b9
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore;	// 0x33d2e561
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore removeFromRegistry:(BOOL)registry;	// 0x33d2e581
- (id)_globalIDForObject:(id)object;	// 0x33d326e1
- (id)_globalIDsForObjects:(id)objects;	// 0x33d2fdfd
- (void)_growRegistrationCollectionForEntitySlot:(unsigned)entitySlot toSize:(unsigned)size;	// 0x33d327c1
- (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x33d306ad
- (BOOL)_handleOptimisticLockingError:(id)error withError:(id *)error2;	// 0x33d30651
- (BOOL)_hasIDMappings;	// 0x33d2cfa1
- (BOOL)_ignoringChangeNotifications;	// 0x33d35325
- (id)_implicitObservationInfoForEntity:(id)entity forResultingClass:(Class *)resultingClass;	// 0x33d35e49
- (void)_incrementUndoTransactionID;	// 0x33d33859
- (void)_informParentStore:(id)store noLongerInterestedInObjects:(id)objects;	// 0x33d32399
- (void)_informParentStore:(id)store ofInterestInObjects:(id)objects;	// 0x33d32265
- (id)_initWithParentObjectStore:(unsigned long)parentObjectStore;	// 0x33cced9d
- (void)_insertObjectWithGlobalID:(id)globalID globalID:(id)anId;	// 0x33d30505
- (BOOL)_isDeallocating;	// 0x33d26bf9
- (BOOL)_isImportContext;	// 0x33d327dd
- (BOOL)_isPreflightSaveInProgress;	// 0x33d327f1
- (void)_lockObjectStore_oldSchool;	// 0x33d2cfed
- (void)_managedObjectContextEditor:(id)editor didCommit:(BOOL)commit contextInfo:(XXStruct_gOQQEC *)info;	// 0x33d36709
- (id)_mappedForParentStoreID:(id)parentStoreID;	// 0x33d2cfb9
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x33d2bb09
- (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave;	// 0x33d3770d
- (void)_mergeRefreshEpilogueForObject:(id)object mergeChanges:(BOOL)changes;	// 0x33d2b219
- (BOOL)_mergeRefreshObject:(id)object mergeChanges:(BOOL)changes withPersistentSnapshot:(id)persistentSnapshot;	// 0x33d2ae35
- (id)_newSaveRequestForCurrentState;	// 0x33d2d0c9
- (id)_newUnchangedLockedObjects;	// 0x33d30109
- (void)_noop:(id)noop;	// 0x33d34b4d
- (void)_objectsChangedInStore:(id)store;	// 0x33d354f5
- (id)_orderedSetWithResultsFromFetchRequest:(id)fetchRequest;	// 0x33d367fd
- (id)_parentObjectsForFetchRequest:(id)fetchRequest inContext:(id)context error:(id *)error;	// 0x33d387b1
- (BOOL)_parentObtainPermanentIDsForObjects:(id)objects context:(id)context error:(id *)error;	// 0x33d39cbd
- (id)_parentProcessSaveRequest:(id)request inContext:(id)context error:(id *)error;	// 0x33d38251
- (id)_parentStore;	// 0x33d39cad
- (void)_performCoordinatorActionAndWait:(id)wait;	// 0x33d2ed51
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)_postObjects;	// 0x33d352b9
- (void)_postRefreshedObjectsNotificationAndClearList;	// 0x33cb74c1
- (BOOL)_postSaveNotifications;	// 0x33d32865
- (BOOL)_prepareForPushChanges:(id *)pushChanges;	// 0x33d33c8d
- (void)_processChangedStoreConfigurationNotification:(id)notification;	// 0x33d35585
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x33d34b55
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x33d3502d
- (void)_processNotificationQueue;	// 0x33d363a1
- (void)_processObjectStoreChanges:(id)changes;	// 0x33d34fad
- (void)_processOwnedObjects:(id)objects set:(id)set boolean:(BOOL)boolean;	// 0x33d34b51
- (id)_processPendingDeletions:(id)deletions withInsertions:(id)insertions withUpdates:(id)updates withNewlyForgottenList:(id)newlyForgottenList withRemovedChangedObjects:(id)removedChangedObjects;	// 0x33d33f71
- (id)_processPendingInsertions:(id)insertions withDeletions:(id)deletions withUpdates:(id)updates;	// 0x33d342d9
- (id)_processPendingUpdates:(id)updates;	// 0x33d34561
- (BOOL)_processRecentChanges:(id *)changes;	// 0x33cb6181
- (void)_processRecentlyForgottenObjects:(id)objects;	// 0x33d34a09
- (void)_processReferenceQueue:(BOOL)queue;	// 0x33cb7549
- (void)_propagateDeletesUsingTable:(id)table;	// 0x33d34bf1
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)event;	// 0x33d34881
- (void)_refaultObject:(id)object globalID:(id)anId boolean:(BOOL)boolean;	// 0x33d30295
- (void)_registerClearStateWithUndoManager;	// 0x33d33b29
- (void)_registerForNotificationsWithCoordinator:(id)coordinator;	// 0x33ccf5bd
- (void)_registerObject:(id)object withID:(id)anId;	// 0x33d2e40d
- (void)_registerUndoForDeletedObjects:(id)deletedObjects withDeletedChanges:(id)deletedChanges;	// 0x33d33019
- (void)_registerUndoForInsertedObjects:(id)insertedObjects;	// 0x33d32b15
- (void)_registerUndoForModifiedObjects:(id)modifiedObjects;	// 0x33d33405
- (void)_registerUndoForOperation:(SEL)operation withObjects:(id)objects withExtraArguments:(id)extraArguments;	// 0x33d33439
- (void)_resetAllChanges;	// 0x33d2fbc5
- (id)_retainedObjectWithID:(id)anId;	// 0x33d2ed45
- (id)_retainedObjectWithID:(id)anId error:(id *)error;	// 0x33d2e955
- (id)_retainedObjectWithID:(id)anId optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x33cde371
- (id)_retainedObjectsFromRemovedStore:(id)removedStore;	// 0x33d324cd
- (id)_retainedRegisteredObjects;	// 0x33d2fd05
- (void)_sendCommitEditingSelectorToTarget:(id)target sender:(id)sender selector:(SEL)selector flag:(BOOL)flag contextInfo:(void *)info delayed:(BOOL)delayed;	// 0x33d365bd
- (void)_sendOrEnqueueNotification:(id)notification selector:(SEL)selector;	// 0x33d35f95
- (void)_setDelegate:(id)delegate;	// 0x33d367dd
- (void)_setDisableDiscardEditing:(BOOL)editing;	// 0x33d32809
- (void)_setIsUbiquityImportContext:(BOOL)context;	// 0x33d327c5
- (void)_setParentContext:(id)context;	// 0x33d2cd65
- (void)_setPersistentStoreCoordinator:(id)coordinator;	// 0x33ccf4c5
- (void)_setPostSaveNotifications:(BOOL)notifications;	// 0x33d32841
- (void)_setRetainsRegisteredObjects:(BOOL)objects;	// 0x33d26911
- (void)_setStopsValidationAfterFirstError:(BOOL)error;	// 0x33d32635
- (void)_setUndoManager:(id)manager;	// 0x33ccf68d
- (void)_startObservingUndoManagerNotifications;	// 0x33d35365
- (void)_stopConflictDetectionForObject:(id)object;	// 0x33d36845
- (void)_stopObservingUndoManagerNotifications;	// 0x33d353d1
- (BOOL)_stopsValidationAfterFirstError;	// 0x33d3261d
- (void)_storeConfigurationChanged:(id)changed;	// 0x33d35569
- (BOOL)_tryRetain;	// 0x33d26ba9
- (void)_undoDeletions:(id)deletions;	// 0x33d32bcd
- (void)_undoDeletionsMovedToUpdates:(id)updates;	// 0x33d32b49
- (void)_undoInsertions:(id)insertions;	// 0x33d32941
- (void)_undoManagerCheckpoint:(id)checkpoint;	// 0x33d34b25
- (void)_undoUpdates:(id)updates;	// 0x33d33249
- (void)_unlockObjectStore_oldSchool;	// 0x33d2d035
- (void)_unregisterForNotifications;	// 0x33d35449
- (void)_updateUndoTransactionForThisEvent:(id)thisEvent withDeletions:(id)deletions withUpdates:(id)updates;	// 0x33d34985
- (void)_updateUnprocessedOwnDestinations:(id)destinations;	// 0x33d33c89
- (BOOL)_validateChangesForSave:(id *)save;	// 0x33d30825
- (BOOL)_validateDeletesUsingTable:(id)table withError:(id *)error;	// 0x33d307e5
- (BOOL)_validateObjects:(id)objects forOperation:(unsigned)operation error:(id *)error exhaustive:(BOOL)exhaustive forSave:(BOOL)save;	// 0x33d309c1
- (void)assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x33d27cd5
- (BOOL)commitEditing;	// 0x33d36545
- (void)commitEditingWithDelegate:(id)delegate didCommitSelector:(SEL)selector contextInfo:(void *)info;	// 0x33d366bd
- (unsigned)concurrencyType;	// 0x33d2cf75
- (unsigned)countForFetchRequest:(id)fetchRequest error:(id *)error;	// 0x33d29bc9
- (void)dealloc;	// 0x33d279ad
- (void)deleteObject:(id)object;	// 0x33d28a39
// converted property getter: - (id)deletedObjects;	// 0x33d28139
- (void)detectConflictsForObject:(id)object;	// 0x33d2b8e1
- (void)discardEditing;	// 0x33d364d5
- (void)encodeWithCoder:(id)coder;	// 0x33d2b7ed
- (id)executeFetchRequest:(id)request error:(id *)error;	// 0x33ccfba5
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x33d38cc9
- (id)existingObjectWithID:(id)anId error:(id *)error;	// 0x33d29a95
- (void)finalize;	// 0x33d27a69
- (BOOL)hasChanges;	// 0x33cd0d69
- (void)insertObject:(id)object;	// 0x33d28935
// converted property getter: - (id)insertedObjects;	// 0x33d28075
- (BOOL)isEditing;	// 0x33d367c9
- (void)lock;	// 0x33d2b991
- (void)lockObjectStore;	// 0x33cd0e79
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x33d3918d
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x33d39269
- (void)mergeChangesFromContextDidSaveNotification:(id)mergeChangesFromContext;	// 0x33d2c9dd
// converted property getter: - (id)mergePolicy;	// 0x33d26b81
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33d39795
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33d39345
- (void)objectDidBeginEditing:(id)object;	// 0x33d363a5
- (void)objectDidEndEditing:(id)object;	// 0x33d3643d
- (id)objectRegisteredForID:(id)anId;	// 0x33d282d5
- (id)objectWithID:(id)anId;	// 0x33d29735
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33d286f1
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x33d28bad
// converted property getter: - (id)parentContext;	// 0x33d2cf49
- (void)performBlock:(id)block;	// 0x33d2caa9
- (void)performBlockAndWait:(id)wait;	// 0x33d2cc95
// converted property getter: - (id)persistentStoreCoordinator;	// 0x33ccf95d
- (void)processPendingChanges;	// 0x33cb616d
// converted property getter: - (BOOL)propagatesDeletesAtEndOfEvent;	// 0x33d281fd
- (void)redo;	// 0x33d2b455
- (void)refreshObject:(id)object mergeChanges:(BOOL)changes;	// 0x33d2a991
- (id)registeredObjects;	// 0x33d2804d
- (oneway void)release;	// 0x33ccf9b5
- (void)reset;	// 0x33d26c25
- (id)retain;	// 0x33ccf83d
- (unsigned)retainCount;	// 0x33d26b95
// converted property getter: - (BOOL)retainsRegisteredObjects;	// 0x33d26acd
- (void)rollback;	// 0x33d2a021
- (BOOL)save:(id *)save;	// 0x33d28ff9
// converted property setter: - (void)setMergePolicy:(id)policy;	// 0x33ccf6fd
// converted property setter: - (void)setParentContext:(id)context;	// 0x33d2cdf9
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x33ccf451
// converted property setter: - (void)setPropagatesDeletesAtEndOfEvent:(BOOL)event;	// 0x33d28211
// converted property setter: - (void)setRetainsRegisteredObjects:(BOOL)objects;	// 0x33d26a2d
// converted property setter: - (void)setStalenessInterval:(double)interval;	// 0x33ccf7b1
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x33ccf619
// converted property getter: - (double)stalenessInterval;	// 0x33d27c25
- (BOOL)tryLock;	// 0x33d2ba25
- (void)undo;	// 0x33d2b299
// converted property getter: - (id)undoManager;	// 0x33d27cc5
- (void)unlock;	// 0x33d2bac1
- (void)unlockObjectStore;	// 0x33d2d07d
- (id)updatedObjects;	// 0x33d27f89
- (id)userInfo;	// 0x33d2cd55
@end
