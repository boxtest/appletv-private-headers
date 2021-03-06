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
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges;	// G=0x35436ae5; @synthesize=_differenceDueToRecentChanges
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;	// G=0x35436af5; @synthesize=_differenceSincePreservingPreviousVersion
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving;	// G=0x35436b05; @synthesize=_differenceSinceSaving
@property(readonly, assign) int documentState;	// G=0x35431a85; 
@property(assign, getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;	// G=0x354314e9; S=0x354313ad; 
@property(copy) NSDate *fileModificationDate;	// G=0x35431341; S=0x354312bd; 
@property(readonly, assign) NSString *fileType;	// G=0x354311c1; 
@property(readonly, assign) NSURL *fileURL;	// G=0x354310d1; 
@property(readonly, assign) NSString *localizedName;	// G=0x354359ad; 
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x35435a21; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x35435a11; 
@property(retain) NSUndoManager *undoManager;	// G=0x35435541; S=0x35435421; 
+ (void)_autosavingTimerDidFireSoContinue:(id)_autosavingTimer;	// 0x35433c25
+ (id)_customizationOfError:(id)error withDescription:(id)description recoverySuggestion:(id)suggestion recoveryAttempter:(id)attempter;	// 0x35431c41
+ (id)_fileModificationDateForURL:(id)url;	// 0x35436b25
+ (void)_finishWritingToURL:(id)url withTemporaryDirectoryURL:(id)temporaryDirectoryURL newContentsURL:(id)url3 afterSuccess:(BOOL)success;	// 0x35432495
+ (id)_typeForContentsOfURL:(id)url error:(id *)error;	// 0x3542fc09
+ (void)initialize;	// 0x3542fa25
- (id)init;	// 0x3542fc75
- (id)initWithFileURL:(id)fileURL;	// 0x3542fd05
- (void)_applicationDidBecomeActive:(id)_application;	// 0x3543640d
- (void)_applicationWillResignActive:(id)_application;	// 0x354362a1
- (void)_autosaveWithCompletionHandler:(id)completionHandler;	// 0x35434591
- (void)_autosavingCompletedSuccessfully:(BOOL)successfully;	// 0x35433c45
- (double)_autosavingDelay;	// 0x35433c19
- (void)_changeWasDone:(id)done;	// 0x35435135
- (void)_changeWasRedone:(id)redone;	// 0x35435299
- (void)_changeWasUndone:(id)undone;	// 0x35435211
- (void)_coordinateWritingItemAtURL:(id)url error:(id *)error byAccessor:(id)accessor;	// 0x35432a31
- (dispatch_queue_s *)_fileOpeningQueue;	// 0x35436b15
- (void)_finishSavingToURL:(id)url forSaveOperation:(int)saveOperation changeCount:(id)count;	// 0x35433b19
- (BOOL)_hasSavingError;	// 0x354317ed
- (BOOL)_hasUnsavedChanges;	// 0x354348ed
// declared property getter: - (BOOL)_isEditingDisabled;	// 0x354314e9
- (BOOL)_isInConflict;	// 0x354318e1
- (BOOL)_isInOpen;	// 0x354316f9
- (BOOL)_isOpen;	// 0x35431649
- (void)_lockFileAccessQueueAndPerformBlock:(id)block;	// 0x35431b5d
- (void)_performBlock:(id)block synchronouslyOnQueue:(dispatch_queue_s *)queue;	// 0x35436bcd
- (void)_performBlockSynchronouslyOnMainThread:(id)thread;	// 0x35436bf1
- (id)_presentableFileNameForSaveOperation:(int)saveOperation url:(id)url;	// 0x35432591
- (void)_registerAsFilePresenterIfNecessary;	// 0x354303c5
- (void)_releaseUndoManager;	// 0x35435321
- (void)_rescheduleAutosaving;	// 0x35433c99
- (void)_saveUnsavedChangesWithCompletionHandler:(id)completionHandler;	// 0x35434171
- (void)_scheduleAutosaving;	// 0x35434139
- (void)_scheduleAutosavingAfterDelay:(double)delay reset:(BOOL)reset;	// 0x35433e2d
- (void)_sendStateChangedNotification;	// 0x3543192d
// declared property setter: - (void)_setEditingDisabled:(BOOL)disabled;	// 0x354313ad
- (void)_setFileURL:(id)url;	// 0x3543104d
- (void)_setHasSavingError:(BOOL)error;	// 0x35431745
- (void)_setInConflict:(BOOL)conflict;	// 0x35431839
- (void)_setInOpen:(BOOL)open;	// 0x35431695
- (void)_setOpen:(BOOL)open;	// 0x35431535
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;	// 0x35435ac5
- (void)_unlockFileAccessQueue;	// 0x35431c2d
- (void)_unregisterAsFilePresenterIfNecessary;	// 0x35430571
- (void)_updateLocalizedName;	// 0x3543590d
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x354365d1
- (void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id)handler;	// 0x3543688d
- (void)autosaveWithCompletionHandler:(id)completionHandler;	// 0x354346ed
- (id)changeCountTokenForSaveOperation:(int)saveOperation;	// 0x35434cf9
- (void)closeWithCompletionHandler:(id)completionHandler;	// 0x3543470d
- (id)contentsForType:(id)type error:(id *)error;	// 0x35432f35
- (void)dealloc;	// 0x3543000d
- (id)description;	// 0x3543023d
// declared property getter: - (id)differenceDueToRecentChanges;	// 0x35436ae5
// declared property getter: - (id)differenceSincePreservingPreviousVersion;	// 0x35436af5
// declared property getter: - (id)differenceSinceSaving;	// 0x35436b05
- (void)disableEditing;	// 0x35436ae1
// declared property getter: - (int)documentState;	// 0x35431a85
- (void)enableEditing;	// 0x35436add
- (id)fileAttributesToWriteToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x354329c5
// declared property getter: - (id)fileModificationDate;	// 0x35431341
- (id)fileNameExtensionForType:(id)type saveOperation:(int)operation;	// 0x354359e5
// declared property getter: - (id)fileType;	// 0x354311c1
// declared property getter: - (id)fileURL;	// 0x354310d1
- (void)finishedHandlingError:(id)error recovered:(BOOL)recovered;	// 0x35435835
- (void)handleError:(id)error userInteractionPermitted:(BOOL)permitted;	// 0x354355cd
- (BOOL)hasUnsavedChanges;	// 0x35434945
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;	// 0x35432449
// declared property getter: - (id)localizedName;	// 0x354359ad
- (void)openWithCompletionHandler:(id)completionHandler;	// 0x35430721
- (void)performAsynchronousFileAccessUsingBlock:(id)block;	// 0x35431afd
- (void)presentedItemDidChange;	// 0x354366b5
- (void)presentedItemDidGainVersion:(id)presentedItem;	// 0x35436715
- (void)presentedItemDidLoseVersion:(id)presentedItem;	// 0x354367d1
- (void)presentedItemDidMoveToURL:(id)presentedItem;	// 0x3543663d
// declared property getter: - (id)presentedItemOperationQueue;	// 0x35435a21
// declared property getter: - (id)presentedItemURL;	// 0x35435a11
- (void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;	// 0x35436a1d
- (void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;	// 0x35436a7d
- (void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url2;	// 0x354369b9
- (void)presentedSubitemDidAppearAtURL:(id)presentedSubitem;	// 0x354368f9
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x35436959
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x354320dd
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x35435a59
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x35435b21
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x35431e31
- (void)savePresentedItemChangesWithCompletionHandler:(id)completionHandler;	// 0x35436079
- (void)saveToURL:(id)url forSaveOperation:(int)saveOperation completionHandler:(id)handler;	// 0x35432f95
- (id)savingFileType;	// 0x354346fd
// declared property setter: - (void)setFileModificationDate:(id)date;	// 0x354312bd
- (void)setFileType:(id)type;	// 0x3543113d
// declared property setter: - (void)setUndoManager:(id)manager;	// 0x35435421
// declared property getter: - (id)undoManager;	// 0x35435541
- (void)updateChangeCount:(int)count;	// 0x3543495d
- (void)updateChangeCountWithToken:(id)token forSaveOperation:(int)saveOperation;	// 0x35434f05
- (void)userInteractionNoLongerPermittedForError:(id)error;	// 0x354358ed
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x35432615
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x354327d1
@end

