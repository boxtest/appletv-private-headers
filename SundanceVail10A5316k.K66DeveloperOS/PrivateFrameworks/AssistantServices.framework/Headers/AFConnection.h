/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AFManagedStore.h"

@class NSMutableDictionary, DKConnection, NSString;
@protocol AFAssistantUIService, AFSpeechDelegate;

@interface AFConnection : NSObject <AFManagedStore> {
@private
	DKConnection *_connection;	// 4 = 0x4
	id<AFAssistantUIService> _delegate;	// 8 = 0x8
	id<AFSpeechDelegate> _speechDelegate;	// 12 = 0xc
	float _averagePower;	// 16 = 0x10
	float _peakPower;	// 20 = 0x14
	NSString *_outstandingRequestClass;	// 24 = 0x18
	unsigned _stateInSync : 1;	// 28 = 0x1c
	unsigned _shouldSpeak : 1;	// 28 = 0x1c
	unsigned _isCapturingSpeech : 1;	// 28 = 0x1c
	unsigned _hasOutstandingRequest : 1;	// 28 = 0x1c
	unsigned _replyContextMayInitiateCall : 1;	// 28 = 0x1c
	NSMutableDictionary *_replies;	// 32 = 0x20
}
@property(readonly, assign) float averagePower;	// G=0x345a98c1; converted property
@property(assign, nonatomic) __weak id<AFAssistantUIService> delegate;	// G=0x345aa141; S=0x345a7129; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL isRecording;	// G=0x345a9899; 
@property(readonly, assign) float peakPower;	// G=0x345a98d1; converted property
@property(assign, nonatomic) __weak id<AFSpeechDelegate> speechDelegate;	// G=0x345aa161; S=0x345aa181; @synthesize=_speechDelegate
+ (void)_reachabilityDidChange:(id)_reachability;	// 0x345a8b31
+ (BOOL)assistantIsEnabled;	// 0x345a8985
+ (BOOL)assistantIsSupported;	// 0x345a8b25
+ (BOOL)assistantIsSupportedForLanguageCode:(id)languageCode error:(id *)error;	// 0x345a89dd
+ (void)beginMonitoringAvailability;	// 0x345a8bbd
+ (void)initialize;	// 0x345a7081
+ (BOOL)isAvailable;	// 0x345a8c29
+ (void)stopMonitoringAvailability;	// 0x345a8cb9
+ (BOOL)userDataSyncNeeded;	// 0x345a8d15
- (id)init;	// 0x345a7085
- (void).cxx_destruct;	// 0x345aa195
- (void)_asyncBarrierWithBlock:(id)block;	// 0x345aa42d
- (void)_barrier;	// 0x345aa3f5
- (void)_cancelRequestTimeout;	// 0x345a8791
- (void)_checkAndSetIsCapturingSpeech:(BOOL)speech;	// 0x345a7169
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)identifier;	// 0x345aa47d
- (void)_clearConnection;	// 0x345a84c1
- (id)_connection;	// 0x345a824d
- (void)_handleMessage:(id)message;	// 0x345a8151
- (void)_invokeRequestTimeout;	// 0x345a86e9
- (void)_msgDismissAssistant:(id)assistant;	// 0x345a7c85
- (void)_msgDoCommand:(id)command;	// 0x345a78ad
- (void)_msgOpenURL:(id)url;	// 0x345a7a4d
- (void)_msgReplyMayInitiateCall:(id)call;	// 0x345a7e11
- (void)_msgRequestCompleted:(id)completed;	// 0x345a7a1d
- (void)_msgRequestError:(id)error;	// 0x345a7cd9
- (void)_msgSpeechLevelUpdate:(id)update;	// 0x345a7e5d
- (void)_msgSpeechRecognitionDidFail:(id)_msgSpeechRecognition;	// 0x345a80a1
- (void)_msgSpeechRecognized:(id)recognized;	// 0x345a7fe1
- (void)_msgSpeechRecordingDidBegin:(id)_msgSpeechRecording;	// 0x345a7e4d
- (void)_msgSpeechRecordingDidCancel:(id)_msgSpeechRecording;	// 0x345a7f41
- (void)_msgSpeechRecordingDidEnd:(id)_msgSpeechRecording;	// 0x345a7f11
- (void)_msgSpeechRecordingDidFail:(id)_msgSpeechRecording;	// 0x345a7f71
- (void)_msgSpeechRecordingWillBegin:(id)_msgSpeechRecording;	// 0x345a7e3d
- (void)_msgStateUpdate:(id)update;	// 0x345a7d75
- (void)_requestDidEnd;	// 0x345a7271
- (void)_requestStateUpdate;	// 0x345a87cd
- (void)_requestWillBeginWithRequestClass:(id)_request;	// 0x345a7235
- (void)_scheduleRequestTimeout:(double)timeout;	// 0x345a8755
- (void)_sendMessage:(id)message withReply:(id)reply;	// 0x345aa309
- (void)_sendMessage:(id)message withReplySync:(id)replySync;	// 0x345aa38d
- (void)_tellDelegateRequestFailed:(id)failed requestClass:(id)aClass;	// 0x345a7305
- (void)_tellDelegateRequestFinished;	// 0x345a72b1
- (void)_tellDelegateShouldSpeakChanged:(BOOL)_tellDelegate;	// 0x345a7385
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)_tellSpeechDelegate correctionIdentifier:(id)identifier;	// 0x345a75a5
- (void)_tellSpeechDelegateRecognitionDidFail:(id)_tellSpeechDelegateRecognition;	// 0x345a7841
- (void)_tellSpeechDelegateRecordingDidBegin;	// 0x345a743d
- (void)_tellSpeechDelegateRecordingDidCancel;	// 0x345a74e5
- (void)_tellSpeechDelegateRecordingDidEnd;	// 0x345a7491
- (void)_tellSpeechDelegateRecordingDidFail:(id)_tellSpeechDelegateRecording;	// 0x345a7539
- (void)_tellSpeechDelegateRecordingWillBegin;	// 0x345a73e9
- (void)_unhandledMessage:(id)message;	// 0x345a80e1
// converted property getter: - (float)averagePower;	// 0x345a98c1
- (void)cancelRequest;	// 0x345a968d
- (void)cancelSpeech;	// 0x345a9341
- (void)clearAndSetApplicationContext;	// 0x345a9c25
- (void)clearContext;	// 0x345a9ba5
- (void)clearUndoStack;	// 0x345a9da5
- (void)dealloc;	// 0x345a70e9
// declared property getter: - (id)delegate;	// 0x345aa141
- (id)domainObjectForKey:(id)key;	// 0x345a9e25
- (void)endSession;	// 0x345a8d21
// declared property getter: - (BOOL)isRecording;	// 0x345a9899
- (void)markBulletinAsReadForIdentifier:(id)identifier;	// 0x345a95cd
// converted property getter: - (float)peakPower;	// 0x345a98d1
- (void)preheat;	// 0x345a8e19
- (void)prepreheat;	// 0x345a8da1
- (void)redoRequest;	// 0x345a9d25
- (BOOL)replyContextMayInitiateCall;	// 0x345a98e1
- (void)rollbackRequest;	// 0x345a9721
- (void)sendGenericAceCommand:(id)command;	// 0x345a98f5
- (void)sendGenericAceCommand:(id)command conflictHandler:(id)handler;	// 0x345a9909
- (void)sendReplyCommand:(id)command;	// 0x345a9ae5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x345a7129
- (void)setDomainObject:(id)object forKey:(id)key;	// 0x345aa051
- (BOOL)setLanguageCode:(id)code error:(id *)error;	// 0x345a8e99
- (void)setLockState:(BOOL)state screenLocked:(BOOL)locked;	// 0x345a8fe9
// declared property setter: - (void)setSpeechDelegate:(id)delegate;	// 0x345aa181
- (BOOL)shouldSpeak;	// 0x345a98ad
// declared property getter: - (id)speechDelegate;	// 0x345aa161
- (void)startRequestWithCorrectedText:(id)correctedText forSpeechIdentifier:(id)speechIdentifier;	// 0x345a97a1
- (void)startRequestWithText:(id)text;	// 0x345a9209
- (void)startRequestWithText:(id)text timeout:(double)timeout;	// 0x345a911d
- (void)startSpeechRequestWithOptions:(id)options;	// 0x345a9239
- (void)startSpeechRequestWithSpeechFileAtURL:(id)url;	// 0x345aa201
- (void)stopSpeech;	// 0x345a95b9
- (void)stopSpeechWithOptions:(id)options;	// 0x345a94c9
- (void)undoRequest;	// 0x345a9ca5
- (void)updateSpeechOptions:(id)options;	// 0x345a93e9
@end
