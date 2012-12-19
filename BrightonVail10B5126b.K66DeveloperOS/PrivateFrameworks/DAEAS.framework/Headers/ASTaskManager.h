/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DATaskManager.h> // Unknown library
#import "ASPolicyManagerDelegate.h"

@class ASTask, NSMutableDictionary, ASPolicyManager, ASGetOptionsTask, NSError;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
	ASPolicyManager *_policyManager;	// 56 = 0x38
	NSError *_versionError;	// 60 = 0x3c
	NSMutableDictionary *_taskIDToTask;	// 64 = 0x40
	ASTask *_modalGetOptionsTask;	// 68 = 0x44
	ASGetOptionsTask *_getOptionsTask;	// 72 = 0x48
	ASTask *_modalPolicyKeyUpdateTask;	// 76 = 0x4c
}
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x33a32439; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x33a318e1
- (void)_finishAllTasksWithError:(id)error;	// 0x33a32585
- (void)_populateVersionDescriptions;	// 0x33a31c01
- (id)_version;	// 0x33a31c75
- (void)cancelAllTasks;	// 0x33a324f1
- (void)cancelTask:(id)task;	// 0x33a32d79
- (void)cancelTaskWithID:(int)anId;	// 0x33a32ab9
- (void)dealloc;	// 0x33a31aa9
- (id)deviceID;	// 0x33a324ed
- (id)easProtocolVersion;	// 0x33a32469
- (void)finishTask:(id)task withError:(id)error;	// 0x33a324d9
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x33a31fad
- (id)policyKey;	// 0x33a324b1
// converted property getter: - (id)policyManager;	// 0x33a32439
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x33a323c1
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x33a32331
- (id)protocol;	// 0x33a32491
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x33a31c9d
- (void)setEASProtocolVersion:(id)version;	// 0x33a32449
- (void)shutdown;	// 0x33a32b95
- (id)stateString;	// 0x33a32669
- (void)taskDidFinish:(id)task;	// 0x33a32e11
- (void)taskEndModal:(id)modal;	// 0x33a32f65
- (BOOL)taskIsModal:(id)modal;	// 0x33a32d19
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x33a327ed
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x33a329ad
- (void)taskRequestModal:(id)modal;	// 0x33a32f11
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x33a321b1
@end
