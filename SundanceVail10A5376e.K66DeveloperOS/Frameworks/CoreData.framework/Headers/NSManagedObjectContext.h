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
@property(readonly, retain) NSMutableSet *deletedObjects;	// G=0x35c40ec1; converted property
@property(readonly, retain) NSMutableSet *insertedObjects;	// G=0x35c40dfd; converted property
@property(retain) id mergePolicy;	// G=0x35c3f979; S=0x35be86f5; converted property
@property(retain) id parentContext;	// G=0x35c459c5; S=0x35c45875; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x35be8955; S=0x35be8449; converted property
@property(assign) BOOL propagatesDeletesAtEndOfEvent;	// G=0x35c40f85; S=0x35c40f99; converted property
@property(assign) BOOL retainsRegisteredObjects;	// G=0x35c3f8c5; S=0x35c3f825; converted property
@property(assign) double stalenessInterval;	// G=0x35c409ad; S=0x35be87a9; converted property
@property(retain) NSUndoManager *undoManager;	// G=0x35c40a4d; S=0x35be8611; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x35c3f6ad
+ (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x35c490f5
+ (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave intoContexts:(id)contexts;	// 0x35c4f289
+ (BOOL)accessInstanceVariablesDirectly;	// 0x35c3f6a9
+ (void)initialize;	// 0x35bd1b6d
- (id)init;	// 0x35be7c41
- (id)initWithCoder:(id)coder;	// 0x35c440a9
- (id)initWithConcurrencyType:(unsigned)concurrencyType;	// 0x35be7c7d
- (BOOL)_attemptCoalesceChangesForFetch;	// 0x35c4c91d
- (unsigned)_batchRetainedObjects:(id *)objects forCount:(unsigned)count withIDs:(id *)ids optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x35c488dd
- (void)_changeIDsForManagedObjects:(id)managedObjects toIDs:(id)ids;	// 0x35c48419
- (void)_clearChangedThisTransaction:(id)transaction;	// 0x35c4c2a5
- (void)_clearDeletions;	// 0x35c4a869
- (void)_clearInsertions;	// 0x35c4a679
- (void)_clearLockedObjects;	// 0x35c4ac49
- (void)_clearOriginalSnapshotAndInitializeRec:(id)rec;	// 0x35c4b0cd
- (void)_clearOriginalSnapshotForObject:(id)object;	// 0x35c4b095
- (void)_clearRefreshedObjects;	// 0x35c4ac69
- (void)_clearUnprocessedDeletions;	// 0x35c4a961
- (void)_clearUnprocessedInsertions;	// 0x35c4a771
- (void)_clearUnprocessedUpdates;	// 0x35c4ab51
- (void)_clearUpdates;	// 0x35c4aa59
- (id)_committedSnapshotForObject:(id)object;	// 0x35c4b13d
- (void)_copyChildObject:(id)object toParentObject:(id)parentObject fromChildContext:(id)childContext;	// 0x35c5094d
- (unsigned)_countWithMergedChangesForRequest:(id)request possibleChanges:(id)changes possibleDeletes:(id)deletes error:(id *)error;	// 0x35c4654d
- (unsigned)_countWithNoChangesForRequest:(id)request error:(id *)error;	// 0x35c45c51
- (void)_createAndPostChangeNotification:(id)notification withDeletions:(id)deletions withUpdates:(id)updates withRefreshes:(id)refreshes;	// 0x35c4d161
- (id)_createStoreFetchRequestForFetchRequest:(id)fetchRequest;	// 0x35be9d75
- (id)_currentEventSnapshotForObject:(id)object;	// 0x35c4b1a5
- (void)_dealloc__;	// 0x35c403f1
- (id)_debuggingOnly_localObjectForGlobalID:(id)globalID;	// 0x35c4b081
- (id)_delegate;	// 0x35c4f211
- (void)_didSaveChanges;	// 0x35c499d5
- (void)_disableChangeNotifications;	// 0x35c4dd61
- (BOOL)_disableDiscardEditing;	// 0x35c4b251
- (void)_dispose:(BOOL)dispose;	// 0x35c47a51
- (void)_disposeObjects:(id *)objects count:(unsigned long)count notifyParent:(BOOL)parent;	// 0x35c478b5
- (void)_enableChangeNotifications;	// 0x35c4dd75
- (void)_enqueueEndOfEventNotification;	// 0x35c4d9d5
- (void)_establishEventSnapshotsForObject:(id)object;	// 0x35c4b29d
- (void)_forceInsertionForObject:(id)object;	// 0x35c4c091
- (void)_forceRemoveFromDeletedObjects:(id)deletedObjects;	// 0x35c4c1dd
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore;	// 0x35c46fdd
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore removeFromRegistry:(BOOL)registry;	// 0x35c46ffd
- (id)_globalIDForObject:(id)object;	// 0x35c4b105
- (id)_globalIDsForObjects:(id)objects;	// 0x35c48821
- (void)_growRegistrationCollectionForEntitySlot:(unsigned)entitySlot toSize:(unsigned)size;	// 0x35c4b1e5
- (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x35c490d1
- (BOOL)_handleOptimisticLockingError:(id)error withError:(id *)error2;	// 0x35c49075
- (BOOL)_hasIDMappings;	// 0x35c45a1d
- (BOOL)_ignoringChangeNotifications;	// 0x35c4dd49
- (id)_implicitObservationInfoForEntity:(id)entity forResultingClass:(Class *)resultingClass;	// 0x35c4e86d
- (void)_incrementUndoTransactionID;	// 0x35c4c27d
- (void)_informParentStore:(id)store noLongerInterestedInObjects:(id)objects;	// 0x35c4adbd
- (void)_informParentStore:(id)store ofInterestInObjects:(id)objects;	// 0x35c4ac89
- (id)_initWithParentObjectStore:(unsigned long)parentObjectStore;	// 0x35be7d95
- (void)_insertObjectWithGlobalID:(id)globalID globalID:(id)anId;	// 0x35c48f29
- (BOOL)_isDeallocating;	// 0x35c3f9f1
- (BOOL)_isImportContext;	// 0x35c4b201
- (BOOL)_isPreflightSaveInProgress;	// 0x35c4b215
- (void)_lockObjectStore_oldSchool;	// 0x35c45a69
- (void)_managedObjectContextEditor:(id)editor didCommit:(BOOL)commit contextInfo:(XXStruct_gOQQEC *)info;	// 0x35c4f12d
- (id)_mappedForParentStoreID:(id)parentStoreID;	// 0x35c45a35
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x35c445a1
- (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave;	// 0x35c50131
- (void)_mergeRefreshEpilogueForObject:(id)object mergeChanges:(BOOL)changes;	// 0x35c43cb1
- (BOOL)_mergeRefreshObject:(id)object mergeChanges:(BOOL)changes withPersistentSnapshot:(id)persistentSnapshot;	// 0x35c438cd
- (id)_newSaveRequestForCurrentState;	// 0x35c45b45
- (id)_newUnchangedLockedObjects;	// 0x35c48b2d
- (void)_noop:(id)noop;	// 0x35c4d571
- (void)_objectsChangedInStore:(id)store;	// 0x35c4df19
- (id)_orderedSetWithResultsFromFetchRequest:(id)fetchRequest;	// 0x35c4f221
- (id)_parentObjectsForFetchRequest:(id)fetchRequest inContext:(id)context error:(id *)error;	// 0x35c511cd
- (BOOL)_parentObtainPermanentIDsForObjects:(id)objects context:(id)context error:(id *)error;	// 0x35c526ed
- (id)_parentProcessSaveRequest:(id)request inContext:(id)context error:(id *)error;	// 0x35c50c75
- (id)_parentStore;	// 0x35c526dd
- (void)_performCoordinatorActionAndWait:(id)wait;	// 0x35c477c9
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)_postObjects;	// 0x35c4dcdd
- (void)_postRefreshedObjectsNotificationAndClearList;	// 0x35bd04b1
- (BOOL)_postSaveNotifications;	// 0x35c4b289
- (BOOL)_prepareForPushChanges:(id *)pushChanges;	// 0x35c4c6b1
- (void)_processChangedStoreConfigurationNotification:(id)notification;	// 0x35c4dfa9
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x35c4d579
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x35c4da51
- (void)_processNotificationQueue;	// 0x35c4edc5
- (void)_processObjectStoreChanges:(id)changes;	// 0x35c4d9d1
- (void)_processOwnedObjects:(id)objects set:(id)set boolean:(BOOL)boolean;	// 0x35c4d575
- (id)_processPendingDeletions:(id)deletions withInsertions:(id)insertions withUpdates:(id)updates withNewlyForgottenList:(id)newlyForgottenList withRemovedChangedObjects:(id)removedChangedObjects;	// 0x35c4c995
- (id)_processPendingInsertions:(id)insertions withDeletions:(id)deletions withUpdates:(id)updates;	// 0x35c4ccfd
- (id)_processPendingUpdates:(id)updates;	// 0x35c4cf85
- (BOOL)_processRecentChanges:(id *)changes;	// 0x35bcf181
- (void)_processRecentlyForgottenObjects:(id)objects;	// 0x35c4d42d
- (void)_processReferenceQueue:(BOOL)queue;	// 0x35bd0539
- (void)_propagateDeletesUsingTable:(id)table;	// 0x35c4d615
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)event;	// 0x35c4d2a5
- (void)_refaultObject:(id)object globalID:(id)anId boolean:(BOOL)boolean;	// 0x35c48cb9
- (void)_registerClearStateWithUndoManager;	// 0x35c4c54d
- (void)_registerForNotificationsWithCoordinator:(id)coordinator;	// 0x35be85b5
- (void)_registerObject:(id)object withID:(id)anId;	// 0x35c46e89
- (void)_registerUndoForDeletedObjects:(id)deletedObjects withDeletedChanges:(id)deletedChanges;	// 0x35c4ba3d
- (void)_registerUndoForInsertedObjects:(id)insertedObjects;	// 0x35c4b539
- (void)_registerUndoForModifiedObjects:(id)modifiedObjects;	// 0x35c4be29
- (void)_registerUndoForOperation:(SEL)operation withObjects:(id)objects withExtraArguments:(id)extraArguments;	// 0x35c4be5d
- (void)_resetAllChanges;	// 0x35c485e9
- (id)_retainedObjectWithID:(id)anId;	// 0x35c477bd
- (id)_retainedObjectWithID:(id)anId error:(id *)error;	// 0x35c473d1
- (id)_retainedObjectWithID:(id)anId optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x35bf7369
- (id)_retainedObjectsFromRemovedStore:(id)removedStore;	// 0x35c4aef1
- (id)_retainedRegisteredObjects;	// 0x35c48729
- (void)_sendCommitEditingSelectorToTarget:(id)target sender:(id)sender selector:(SEL)selector flag:(BOOL)flag contextInfo:(void *)info delayed:(BOOL)delayed;	// 0x35c4efe1
- (void)_sendOrEnqueueNotification:(id)notification selector:(SEL)selector;	// 0x35c4e9b9
- (void)_setDelegate:(id)delegate;	// 0x35c4f201
- (void)_setDisableDiscardEditing:(BOOL)editing;	// 0x35c4b22d
- (void)_setIsUbiquityImportContext:(BOOL)context;	// 0x35c4b1e9
- (void)_setParentContext:(id)context;	// 0x35c457e1
- (void)_setPersistentStoreCoordinator:(id)coordinator;	// 0x35be84bd
- (void)_setPostSaveNotifications:(BOOL)notifications;	// 0x35c4b265
- (void)_setRetainsRegisteredObjects:(BOOL)objects;	// 0x35c3f709
- (void)_setStopsValidationAfterFirstError:(BOOL)error;	// 0x35c4b059
- (void)_setUndoManager:(id)manager;	// 0x35be8685
- (void)_startObservingUndoManagerNotifications;	// 0x35c4dd89
- (void)_stopConflictDetectionForObject:(id)object;	// 0x35c4f269
- (void)_stopObservingUndoManagerNotifications;	// 0x35c4ddf5
- (BOOL)_stopsValidationAfterFirstError;	// 0x35c4b041
- (void)_storeConfigurationChanged:(id)changed;	// 0x35c4df8d
- (BOOL)_tryRetain;	// 0x35c3f9a1
- (void)_undoDeletions:(id)deletions;	// 0x35c4b5f1
- (void)_undoDeletionsMovedToUpdates:(id)updates;	// 0x35c4b56d
- (void)_undoInsertions:(id)insertions;	// 0x35c4b365
- (void)_undoManagerCheckpoint:(id)checkpoint;	// 0x35c4d549
- (void)_undoUpdates:(id)updates;	// 0x35c4bc6d
- (void)_unlockObjectStore_oldSchool;	// 0x35c45ab1
- (void)_unregisterForNotifications;	// 0x35c4de6d
- (void)_updateUndoTransactionForThisEvent:(id)thisEvent withDeletions:(id)deletions withUpdates:(id)updates;	// 0x35c4d3a9
- (void)_updateUnprocessedOwnDestinations:(id)destinations;	// 0x35c4c6ad
- (BOOL)_validateChangesForSave:(id *)save;	// 0x35c49249
- (BOOL)_validateDeletesUsingTable:(id)table withError:(id *)error;	// 0x35c49209
- (BOOL)_validateObjects:(id)objects forOperation:(unsigned)operation error:(id *)error exhaustive:(BOOL)exhaustive forSave:(BOOL)save;	// 0x35c493e5
- (void)assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x35c40a5d
- (BOOL)commitEditing;	// 0x35c4ef69
- (void)commitEditingWithDelegate:(id)delegate didCommitSelector:(SEL)selector contextInfo:(void *)info;	// 0x35c4f0e1
- (unsigned)concurrencyType;	// 0x35c459f1
- (unsigned)countForFetchRequest:(id)fetchRequest error:(id *)error;	// 0x35c42661
- (void)dealloc;	// 0x35c40735
- (void)deleteObject:(id)object;	// 0x35c417c1
// converted property getter: - (id)deletedObjects;	// 0x35c40ec1
- (void)detectConflictsForObject:(id)object;	// 0x35c44379
- (void)discardEditing;	// 0x35c4eef9
- (void)encodeWithCoder:(id)coder;	// 0x35c44285
- (id)executeFetchRequest:(id)request error:(id *)error;	// 0x35be8b9d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x35c516e1
- (id)existingObjectWithID:(id)anId error:(id *)error;	// 0x35c4252d
- (void)finalize;	// 0x35c407f1
- (BOOL)hasChanges;	// 0x35be9d61
- (void)insertObject:(id)object;	// 0x35c416bd
// converted property getter: - (id)insertedObjects;	// 0x35c40dfd
- (BOOL)isEditing;	// 0x35c4f1ed
- (void)lock;	// 0x35c44429
- (void)lockObjectStore;	// 0x35be9e71
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x35c51c25
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x35c51d01
- (void)mergeChangesFromContextDidSaveNotification:(id)mergeChangesFromContext;	// 0x35c45459
// converted property getter: - (id)mergePolicy;	// 0x35c3f979
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35c521f9
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35c51ddd
- (void)objectDidBeginEditing:(id)object;	// 0x35c4edc9
- (void)objectDidEndEditing:(id)object;	// 0x35c4ee61
- (id)objectRegisteredForID:(id)anId;	// 0x35c4105d
- (id)objectWithID:(id)anId;	// 0x35c424bd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35c41479
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x35c41935
// converted property getter: - (id)parentContext;	// 0x35c459c5
- (void)performBlock:(id)block;	// 0x35c45525
- (void)performBlockAndWait:(id)wait;	// 0x35c45711
// converted property getter: - (id)persistentStoreCoordinator;	// 0x35be8955
- (void)processPendingChanges;	// 0x35bcf16d
// converted property getter: - (BOOL)propagatesDeletesAtEndOfEvent;	// 0x35c40f85
- (void)redo;	// 0x35c43eed
- (void)refreshObject:(id)object mergeChanges:(BOOL)changes;	// 0x35c43429
- (id)registeredObjects;	// 0x35c40dd5
- (oneway void)release;	// 0x35be89ad
- (void)reset;	// 0x35c3fa1d
- (id)retain;	// 0x35be8835
- (unsigned)retainCount;	// 0x35c3f98d
// converted property getter: - (BOOL)retainsRegisteredObjects;	// 0x35c3f8c5
- (void)rollback;	// 0x35c42ab9
- (BOOL)save:(id *)save;	// 0x35c41d81
// converted property setter: - (void)setMergePolicy:(id)policy;	// 0x35be86f5
// converted property setter: - (void)setParentContext:(id)context;	// 0x35c45875
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x35be8449
// converted property setter: - (void)setPropagatesDeletesAtEndOfEvent:(BOOL)event;	// 0x35c40f99
// converted property setter: - (void)setRetainsRegisteredObjects:(BOOL)objects;	// 0x35c3f825
// converted property setter: - (void)setStalenessInterval:(double)interval;	// 0x35be87a9
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x35be8611
// converted property getter: - (double)stalenessInterval;	// 0x35c409ad
- (BOOL)tryLock;	// 0x35c444bd
- (void)undo;	// 0x35c43d31
// converted property getter: - (id)undoManager;	// 0x35c40a4d
- (void)unlock;	// 0x35c44559
- (void)unlockObjectStore;	// 0x35c45af9
- (id)updatedObjects;	// 0x35c40d11
- (id)userInfo;	// 0x35c457d1
@end
