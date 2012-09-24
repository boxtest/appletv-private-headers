/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "AFDictationDelegate.h"
#import <NSObject.h> // Unknown library

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSTimer, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate> {
	AFDictationConnection *_connection;	// 4 = 0x4
	AFDictationOptions *_options;	// 8 = 0x8
	AFPreferences *_preferences;	// 12 = 0xc
	NSArray *_availableLanguages;	// 16 = 0x10
	NSTimer *_recordingLimitTimer;	// 20 = 0x14
	void *_callCenterFrameworkFileHandle;	// 24 = 0x18
	id _callCenter;	// 28 = 0x1c
	void *_facetimeCallFrameworkFileHandle;	// 32 = 0x20
	id _facetimeCallManager;	// 36 = 0x24
	BOOL _wasDisabledDueToTelephonyActivity;	// 40 = 0x28
	UIAlertView *_dictationAvailableSoonAlert;	// 44 = 0x2c
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;	// 48 = 0x30
	BOOL dictationStartedFromGesture;	// 49 = 0x31
}
@property(readonly, retain) AFDictationConnection *connection;	// G=0x30c61cc1; converted property
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// G=0x30c62ff9; S=0x30c63009; @synthesize
@property(assign) int state;	// G=0x30c61a09; S=0x30c61761; converted property
@property(readonly, assign) BOOL wasDisabledDueToTelephonyActivity;	// G=0x30c61e89; converted property
+ (id)activeInstance;	// 0x30c5e98d
+ (void)applicationDidBecomeActive;	// 0x30c5f84d
+ (void)applicationDidChangeStatusBarFrame;	// 0x30c5f975
+ (void)applicationWillResignActive;	// 0x30c5f885
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x30c60759
+ (BOOL)dictationIsFunctional;	// 0x30c5f3f1
+ (void)disableGestureHandler;	// 0x30c5f461
+ (void)enableGestureHandlerIfNecessary;	// 0x3092f7e5
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x309ad785
+ (id)inputModeNameForDictation;	// 0x309244a5
+ (id)interpretation:(id)interpretation forPhraseIndex:(unsigned)phraseIndex isShiftLocked:(BOOL)locked autocapitalizationType:(int)type;	// 0x30c5fba9
+ (BOOL)isRunning;	// 0x309959e9
+ (void)keyboardDidSetDelegate;	// 0x309a677d
+ (void)keyboardDidSetInputMode;	// 0x309a57ad
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x309274cd
+ (void)logCorrectionStatistics;	// 0x30995a01
+ (void)networkReachableCallback;	// 0x30c5fa1d
+ (BOOL)openAssistantFrameworkIfNecessary;	// 0x30c5e359
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x30c608e5
+ (id)serializedDictationPhrases:(id)phrases;	// 0x30c60719
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x30c60165
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x30c5ea31
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(CFStringRef)transform;	// 0x30c5fa5d
+ (BOOL)setupForOpeningConnections;	// 0x30c5e3f9
+ (BOOL)setupForPhraseSerialization;	// 0x30c5e39d
+ (id)sharedInstance;	// 0x30c5e99d
+ (BOOL)shouldEnableGestureHandler;	// 0x3092f899
+ (void)siriPreferencesChanged;	// 0x30c5f905
+ (void)updateLandingView;	// 0x3099fa2d
+ (void)willEndEditingInTextView:(id)textView;	// 0x30995985
- (id)init;	// 0x30c5e48d
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x30c60b71
- (float)audioLevel;	// 0x30c60d79
- (void)cancelDictation;	// 0x30c62239
- (void)cancelRecordingLimitTimer;	// 0x30c61bf5
// converted property getter: - (id)connection;	// 0x30c61cc1
- (id)connectionForStatisticsLogging;	// 0x30c61d99
- (void)dealloc;	// 0x30c61a19
- (void)delayedTelephonyCheckingSetup;	// 0x30c5e855
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x30c62b41
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;	// 0x30c625b1
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x30c62db9
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x30c62c49
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x30c62b89
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x30c62bed
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x30c62b91
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x30c62b65
- (BOOL)dictationEnabled;	// 0x30c61dc9
- (id)dictationPhraseArrayFromDictationResult:(id)dictationResult;	// 0x30c623f9
// declared property getter: - (BOOL)dictationStartedFromGesture;	// 0x30c62ff9
- (void)disableAutorotation;	// 0x30c5f525
- (BOOL)disabledDueToTelephonyActivity;	// 0x30c5e7d5
- (void)enableProximity;	// 0x30c5f6a5
- (void)errorAnimationDidFinish;	// 0x30c619cd
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x30c60e11
- (id)inputModeThatInvokedDictation;	// 0x30c60ce1
- (float)normalizedAudioLevel;	// 0x30c60da1
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x30c61085
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x30c60f19
- (void)proximityStateChanged:(id)changed;	// 0x30c5f55d
- (void)reenableAutorotation;	// 0x30c5f4b9
- (void)releaseConnection;	// 0x30c61d25
- (void)releaseConnectionAfterDictationRequest;	// 0x30c61d65
- (void)releaseConnectionAfterStatisticsLogging;	// 0x30c61d75
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x30c611f1
// declared property setter: - (void)setDictationStartedFromGesture:(BOOL)gesture;	// 0x30c63009
// converted property setter: - (void)setState:(int)state;	// 0x30c61761
- (void)setupConnectionOptions;	// 0x30c612dd
- (void)setupForDictationStart;	// 0x30c61e99
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30c616cd
- (void)startConnectionForReason:(int)reason;	// 0x30c615a5
- (void)startDictation;	// 0x30c62129
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30c621bd
- (void)startDictationForReason:(int)reason;	// 0x30c62119
- (void)startDictationFromLayout;	// 0x30c6213d
- (void)startRecordingLimitTimer;	// 0x30c61c39
// converted property getter: - (int)state;	// 0x30c61a09
- (void)stopDictation;	// 0x30c622c1
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x30c60bad
// converted property getter: - (BOOL)wasDisabledDueToTelephonyActivity;	// 0x30c61e89
@end
