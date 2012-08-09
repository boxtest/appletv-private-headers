/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskGroupDelegate.h"
#import "CoreDAVMkcolTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSDictionary, NSMutableSet, NSURL, NSMutableArray, NSString, NSArray, NSMutableDictionary;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	NSString *_previousSyncToken;	// 60 = 0x3c
	NSString *_nextSyncToken;	// 64 = 0x40
	NSString *_previousPTag;	// 68 = 0x44
	NSString *_nextPTag;	// 72 = 0x48
	NSArray *_actions;	// 76 = 0x4c
	void *_context;	// 80 = 0x50
	unsigned _multiGetBatchSize;	// 84 = 0x54
	NSMutableArray *_unsubmittedTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSMutableSet *_syncReportDeletedURLs;	// 100 = 0x64
	NSMutableDictionary *_leafURLToETag;	// 104 = 0x68
	NSMutableArray *_childCollectionURL;	// 108 = 0x6c
	Class _appSpecificDataItemClass;	// 112 = 0x70
	Class _appSpecificContainerItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 124 = 0x7c
	BOOL _preflightCTag;	// 128 = 0x80
}
@property(readonly, assign) void *context;	// G=0x304a190d; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x304a1891; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x304a1921; @synthesize=_folderURLToChildrenURLOrder
@property(assign) unsigned multiGetBatchSize;	// G=0x304a1865; S=0x304a1879; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x304a1935; S=0x304a1949; @synthesize=_nextCTag
@property(assign) BOOL preflightCTag;	// G=0x304a18b9; S=0x304a18d1; @synthesize=_preflightCTag
@property(readonly, assign) NSString *previousCTag;	// G=0x304a18a5; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x304a18e9; S=0x304a18fd; @synthesize=_previousSyncToken
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3049d9d1
- (id)_copyContainerParserMappings;	// 0x304a1735
- (void)_folderModTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x304a00c5
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x3049df21
- (void)_getDataPayloads;	// 0x3049f079
- (void)_getItemTags;	// 0x3049eced
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x304a11e9
- (void)_getTopFolderTags;	// 0x3049eb11
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x3049fee1
- (void)_pushActions;	// 0x3049e35d
- (unsigned)_submitTasks;	// 0x3049e061
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x304a0865
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)contents;	// 0x3049e235
- (void)_tearDownAllUnsubmittedTasks;	// 0x3049ddd9
- (void)bailWithError:(id)error;	// 0x3049dfdd
- (void)cancelTaskGroup;	// 0x3049e021
// declared property getter: - (void *)context;	// 0x304a190d
- (id)copyFolderMultiGetTaskWithURLs:(id)urls;	// 0x304a1799
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x304a1755
- (id)dataContentType;	// 0x304a17dd
- (void)dealloc;	// 0x3049dbb9
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x304a0681
- (id)description;	// 0x3049dcf9
// declared property getter: - (id)folderURL;	// 0x304a1891
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x304a1921
- (BOOL)isWhitelistedError:(id)error;	// 0x3049fb65
- (void)mkcolTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x304a0571
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x304a1865
// declared property getter: - (id)nextCTag;	// 0x304a1935
// declared property getter: - (BOOL)preflightCTag;	// 0x304a18b9
// declared property getter: - (id)previousCTag;	// 0x304a18a5
// declared property getter: - (id)previousSyncToken;	// 0x304a18e9
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x304a0e0d
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x304a0581
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x3049fbd5
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x304a1879
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x304a1949
// declared property setter: - (void)setPreflightCTag:(BOOL)tag;	// 0x304a18d1
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x304a18fd
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x304a1821
- (void)startTaskGroup;	// 0x3049fb0d
- (void)syncAway;	// 0x3049fb55
- (void)task:(id)task didFinishWithError:(id)error;	// 0x304a0591
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3049dd69
@end
