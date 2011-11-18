/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSThread;

@interface MSSearch : MSMailDefaultService {
	NSThread *_originalThread;	// 24 = 0x18
}
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x321950a5
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x321950dd
+ (void)setUnitTestingResultsArray:(id)array;	// 0x3219590d
+ (id)smi_serverCommandName;	// 0x32195099
- (id)_didFindMessageData:(id)data userInfo:(id)info;	// 0x321954f5
- (id)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x3219527d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x321957c1
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x321957f5
- (id)_initWithDelegate:(id)delegate;	// 0x3219518d
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x321953ed
- (BOOL)_unitTestsAreEnabled;	// 0x321957b1
- (void)dealloc;	// 0x3219521d
@end

