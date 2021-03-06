/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSFilePresenter.h"

@class NSString, NSTimer, NSMutableArray, NSDate, NSDocumentDifferenceSize, NSUndoManager, NSURL, NSOperationQueue, NSLock;

@interface UIDocument : NSObject <NSFilePresenter> {
@private
	NSURL *_fileURL;	// 4 = 0x4
	NSString *_fileType;	// 8 = 0x8
	NSString *_localizedName;	// 12 = 0xc
	NSUndoManager *_undoManager;	// 16 = 0x10
	NSDate *_fileModificationDate;	// 20 = 0x14
	dispatch_queue_s *_fileAccessQueue;	// 24 = 0x18
	dispatch_queue_s *_openingQueue;	// 28 = 0x1c
	dispatch_semaphore_s *_fileAccessSemaphore;	// 32 = 0x20
	NSOperationQueue *_filePresenterQueue;	// 36 = 0x24
	id _differenceDueToRecentChanges;	// 40 = 0x28
	id _differenceSincePreservingPreviousVersion;	// 44 = 0x2c
	id _differenceSinceSaving;	// 48 = 0x30
	NSTimer *_autosavingTimer;	// 52 = 0x34
	double _lastSaveTime;	// 56 = 0x38
	unsigned _fileContentsPreservationReason;	// 64 = 0x40
	double _lastPreservationTime;	// 68 = 0x44
	id _versionWithoutRecentChanges;	// 76 = 0x4c
	NSMutableArray *_versions;	// 80 = 0x50
	void *_conflictObserver;	// 84 = 0x54
	NSLock *_documentPropertyLock;	// 88 = 0x58
	id _alertPresenter;	// 92 = 0x5c
	docFlags _docFlags;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges;	// G=0x359f5ae5; @synthesize=_differenceDueToRecentChanges
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;	// G=0x359f5af5; @synthesize=_differenceSincePreservingPreviousVersion
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving;	// G=0x359f5b05; @synthesize=_differenceSinceSaving
@property(readonly, assign) int documentState;	// G=0x359f0a85; 
@property(assign, getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;	// G=0x359f04e9; S=0x359f03ad; 
@property(copy) NSDate *fileModificationDate;	// G=0x359f0341; S=0x359f02bd; 
@property(readonly, assign) NSString *fileType;	// G=0x359f01c1; 
@property(readonly, assign) NSURL *fileURL;	// G=0x359f00d1; 
@property(readonly, assign) NSString *localizedName;	// G=0x359f49ad; 
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x359f4a21; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x359f4a11; 
@property(retain) NSUndoManager *undoManager;	// G=0x359f4541; S=0x359f4421; 
+ (void)_autosavingTimerDidFireSoContinue:(id)_autosavingTimer;	// 0x359f2c25
+ (id)_customizationOfError:(id)error withDescription:(id)description recoverySuggestion:(id)suggestion recoveryAttempter:(id)attempter;	// 0x359f0c41
+ (id)_fileModificationDateForURL:(id)url;	// 0x359f5b25
+ (void)_finishWritingToURL:(id)url withTemporaryDirectoryURL:(id)temporaryDirectoryURL newContentsURL:(id)url3 afterSuccess:(BOOL)success;	// 0x359f1495
+ (id)_typeForContentsOfURL:(id)url error:(id *)error;	// 0x359eec09
+ (void)initialize;	// 0x359eea25
- (id)init;	// 0x359eec75
- (id)initWithFileURL:(id)fileURL;	// 0x359eed05
- (void)_applicationDidBecomeActive:(id)_application;	// 0x359f540d
- (void)_applicationWillResignActive:(id)_application;	// 0x359f52a1
- (void)_autosaveWithCompletionHandler:(id)completionHandler;	// 0x359f3591
- (void)_autosavingCompletedSuccessfully:(BOOL)successfully;	// 0x359f2c45
- (double)_autosavingDelay;	// 0x359f2c19
- (void)_changeWasDone:(id)done;	// 0x359f4135
- (void)_changeWasRedone:(id)redone;	// 0x359f4299
- (void)_changeWasUndone:(id)undone;	// 0x359f4211
- (void)_coordinateWritingItemAtURL:(id)url error:(id *)error byAccessor:(id)accessor;	// 0x359f1a31
- (dispatch_queue_s *)_fileOpeningQueue;	// 0x359f5b15
- (void)_finishSavingToURL:(id)url forSaveOperation:(int)saveOperation changeCount:(id)count;	// 0x359f2b19
- (BOOL)_hasSavingError;	// 0x359f07ed
- (BOOL)_hasUnsavedChanges;	// 0x359f38ed
// declared property getter: - (BOOL)_isEditingDisabled;	// 0x359f04e9
- (BOOL)_isInConflict;	// 0x359f08e1
- (BOOL)_isInOpen;	// 0x359f06f9
- (BOOL)_isOpen;	// 0x359f0649
- (void)_lockFileAccessQueueAndPerformBlock:(id)block;	// 0x359f0b5d
- (void)_performBlock:(id)block synchronouslyOnQueue:(dispatch_queue_s *)queue;	// 0x359f5bcd
- (void)_performBlockSynchronouslyOnMainThread:(id)thread;	// 0x359f5bf1
- (id)_presentableFileNameForSaveOperation:(int)saveOperation url:(id)url;	// 0x359f1591
- (void)_registerAsFilePresenterIfNecessary;	// 0x359ef3c5
- (void)_releaseUndoManager;	// 0x359f4321
- (void)_rescheduleAutosaving;	// 0x359f2c99
- (void)_saveUnsavedChangesWithCompletionHandler:(id)completionHandler;	// 0x359f3171
- (void)_scheduleAutosaving;	// 0x359f3139
- (void)_scheduleAutosavingAfterDelay:(double)delay reset:(BOOL)reset;	// 0x359f2e2d
- (void)_sendStateChangedNotification;	// 0x359f092d
// declared property setter: - (void)_setEditingDisabled:(BOOL)disabled;	// 0x359f03ad
- (void)_setFileURL:(id)url;	// 0x359f004d
- (void)_setHasSavingError:(BOOL)error;	// 0x359f0745
- (void)_setInConflict:(BOOL)conflict;	// 0x359f0839
- (void)_setInOpen:(BOOL)open;	// 0x359f0695
- (void)_setOpen:(BOOL)open;	// 0x359f0535
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;	// 0x359f4ac5
- (void)_unlockFileAccessQueue;	// 0x359f0c2d
- (void)_unregisterAsFilePresenterIfNecessary;	// 0x359ef571
- (void)_updateLocalizedName;	// 0x359f490d
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x359f55d1
- (void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id)handler;	// 0x359f588d
- (void)autosaveWithCompletionHandler:(id)completionHandler;	// 0x359f36ed
- (id)changeCountTokenForSaveOperation:(int)saveOperation;	// 0x359f3cf9
- (void)closeWithCompletionHandler:(id)completionHandler;	// 0x359f370d
- (id)contentsForType:(id)type error:(id *)error;	// 0x359f1f35
- (void)dealloc;	// 0x359ef00d
- (id)description;	// 0x359ef23d
// declared property getter: - (id)differenceDueToRecentChanges;	// 0x359f5ae5
// declared property getter: - (id)differenceSincePreservingPreviousVersion;	// 0x359f5af5
// declared property getter: - (id)differenceSinceSaving;	// 0x359f5b05
- (void)disableEditing;	// 0x359f5ae1
// declared property getter: - (int)documentState;	// 0x359f0a85
- (void)enableEditing;	// 0x359f5add
- (id)fileAttributesToWriteToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x359f19c5
// declared property getter: - (id)fileModificationDate;	// 0x359f0341
- (id)fileNameExtensionForType:(id)type saveOperation:(int)operation;	// 0x359f49e5
// declared property getter: - (id)fileType;	// 0x359f01c1
// declared property getter: - (id)fileURL;	// 0x359f00d1
- (void)finishedHandlingError:(id)error recovered:(BOOL)recovered;	// 0x359f4835
- (void)handleError:(id)error userInteractionPermitted:(BOOL)permitted;	// 0x359f45cd
- (BOOL)hasUnsavedChanges;	// 0x359f3945
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;	// 0x359f1449
// declared property getter: - (id)localizedName;	// 0x359f49ad
- (void)openWithCompletionHandler:(id)completionHandler;	// 0x359ef721
- (void)performAsynchronousFileAccessUsingBlock:(id)block;	// 0x359f0afd
- (void)presentedItemDidChange;	// 0x359f56b5
- (void)presentedItemDidGainVersion:(id)presentedItem;	// 0x359f5715
- (void)presentedItemDidLoseVersion:(id)presentedItem;	// 0x359f57d1
- (void)presentedItemDidMoveToURL:(id)presentedItem;	// 0x359f563d
// declared property getter: - (id)presentedItemOperationQueue;	// 0x359f4a21
// declared property getter: - (id)presentedItemURL;	// 0x359f4a11
- (void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;	// 0x359f5a1d
- (void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;	// 0x359f5a7d
- (void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url2;	// 0x359f59b9
- (void)presentedSubitemDidAppearAtURL:(id)presentedSubitem;	// 0x359f58f9
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x359f5959
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x359f10dd
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x359f4a59
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x359f4b21
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x359f0e31
- (void)savePresentedItemChangesWithCompletionHandler:(id)completionHandler;	// 0x359f5079
- (void)saveToURL:(id)url forSaveOperation:(int)saveOperation completionHandler:(id)handler;	// 0x359f1f95
- (id)savingFileType;	// 0x359f36fd
// declared property setter: - (void)setFileModificationDate:(id)date;	// 0x359f02bd
- (void)setFileType:(id)type;	// 0x359f013d
// declared property setter: - (void)setUndoManager:(id)manager;	// 0x359f4421
// declared property getter: - (id)undoManager;	// 0x359f4541
- (void)updateChangeCount:(int)count;	// 0x359f395d
- (void)updateChangeCountWithToken:(id)token forSaveOperation:(int)saveOperation;	// 0x359f3f05
- (void)userInteractionNoLongerPermittedForError:(id)error;	// 0x359f48ed
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x359f1615
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x359f17d1
@end

