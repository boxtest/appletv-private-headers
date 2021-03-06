/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DATask.h"
#import "NSURLConnectionDelegate.h"
#import "DAEAS-Structs.h"
#import <NSObject.h> // Unknown library

@class ASTaskManager, NSDate, NSHTTPURLResponse, NSURLConnection, NSURLRequest, ASItem, NSTimer, DATaskManager, ASParseContext, NSMutableSet, NSString, NSError;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x3420dfad; S=0x3420dfbd; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x3420df19; S=0x3420df29; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x3420df79; S=0x3420df89; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x3420def9; S=0x3420df09; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x3420df39; S=0x3420df49; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x3420df59; S=0x3420df69; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x3420dfcd; S=0x3420dfdd; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x342084bd; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x3420dee9; S=0x3420ddc1; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x3420e001; S=0x3420de91; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x34208505
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x342084f1
- (id)init;	// 0x34207f5d
- (id)_HTTPMethodForRequest:(id)request;	// 0x342084e1
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x3420b291
- (void)_continuePerformTask;	// 0x3420a1e9
- (id)_createBodyData;	// 0x34209c11
- (id)_easVersion;	// 0x342085b1
- (void)_failImmediately;	// 0x34209c39
- (void)_handleBadPasswordResponse;	// 0x3420b3dd
- (BOOL)_handleCertificateError:(id)error;	// 0x3420b5dd
- (BOOL)_handleRedirect:(id)redirect;	// 0x3420b699
- (void)_initFakeParseContext;	// 0x3420db7d
- (BOOL)_isWBXML;	// 0x342085f1
- (id)_policyKey;	// 0x342085d1
- (void)_popModal;	// 0x34209e21
- (void)_pushModalForReason:(int)reason;	// 0x34209dbd
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x342084dd
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x342084d9
- (void)_timeoutEnforcerFired:(id)fired;	// 0x34208ec5
- (id)_url;	// 0x34208575
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x3420dfad
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x3420abd9
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x3420b141
- (BOOL)checkForErrorInContext:(id)context;	// 0x34208765
- (id)command;	// 0x34208625
- (int)commandCode;	// 0x34208641
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3420cabd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3420d431
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3420cb59
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3420ba41
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3420d0f9
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x3420b9a5
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x3420c40d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3420c469
- (int)connectionActionForResponse:(id)response;	// 0x34208dd9
- (void)connectionDidFinishLoading:(id)connection;	// 0x3420cd41
- (id)contentType;	// 0x34208da9
// declared property getter: - (void *)context;	// 0x3420df19
// declared property getter: - (id)currentlyParsingItem;	// 0x3420df79
- (void)dealloc;	// 0x342080a1
// declared property getter: - (id)delegate;	// 0x3420def9
- (id)description;	// 0x342082cd
- (void)didCallOutToDelegate;	// 0x3420ae4d
- (void)didProcessContext:(id)context;	// 0x34208db9
- (BOOL)expectsWBXML;	// 0x34208621
- (void)finishWithError:(id)error;	// 0x3420aed5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x342086e1
- (void)handleTopLevelErrorStatus:(id)status;	// 0x3420d92d
- (id)httpMethod;	// 0x342084cd
// declared property getter: - (int)interfaceBinding;	// 0x3420df39
// declared property getter: - (BOOL)isExclusive;	// 0x3420df59
- (BOOL)isInCallOutToDelegate;	// 0x3420aec5
// declared property getter: - (id)lastKnownPassword;	// 0x3420dfcd
- (void)loadRequest:(id)request;	// 0x34208f99
- (int)numDownloadedElements;	// 0x3420dd31
- (id)parameterData;	// 0x3420868d
- (double)percentComplete;	// 0x34208c25
- (void)performTask;	// 0x34209ce5
- (BOOL)processContext:(id)context;	// 0x342086dd
- (void)reportStatusWithError:(id)error;	// 0x3420dd35
- (id)requestBody;	// 0x34208695
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x34208691
- (BOOL)requiresEASVersionInformaton;	// 0x34208dd1
- (void)reset;	// 0x3420dbfd
- (id)responseContentType;	// 0x3420847d
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x3420dfbd
// declared property setter: - (void)setContext:(void *)context;	// 0x3420df29
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x3420df89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3420df09
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x3420df49
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x3420df69
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x3420dfdd
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x3420ddc1
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x3420de91
- (BOOL)shouldHandlePasswordErrors;	// 0x3420b9a1
- (BOOL)shouldHoldPowerAssertion;	// 0x34208dd5
- (BOOL)shouldLogIncomingData;	// 0x34208dcd
- (BOOL)shouldReportTimeInNetwork;	// 0x3420dd2d
- (void)startModal;	// 0x34209e65
// converted property getter: - (int)taskID;	// 0x342084bd
// declared property getter: - (id)taskManager;	// 0x3420dee9
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x3420a1a9
- (void)taskManagerDidFindEASVersion;	// 0x3420a089
- (void)taskManagerDidUpdatePolicyKey;	// 0x3420a119
- (int)taskStatusForError:(id)error;	// 0x34208c35
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34208c31
- (void)tearDownResources;	// 0x34209b39
// declared property getter: - (id)timeoutEnforcer;	// 0x3420e001
- (double)timeoutInterval;	// 0x3420851d
- (void)willCallOutToDelegate;	// 0x3420ac9d
- (void)willProcessContext;	// 0x34208db5
@end

