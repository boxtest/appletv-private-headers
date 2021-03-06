/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, NSArray, NSTimer, NSMutableDictionary, UITextInputTraits, UITextInputArrowKeyHistory, UIKeyboardCandidate, UIAlertView, NSString, UIKeyboardInputManager, UIAutocorrectInlinePrompt, UIKeyboardLayout, UIDelayedAction;
@protocol UIKeyboardTypology, UIKeyInput, UITextInput, UITextInputPrivate, UIKeyboardInput, UIKeyboardImplGeometryDelegate, UIKeyboardCandidateList, UIKeyboardRecording, UIApplicationEventRecording;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
	id<UIKeyInput> m_delegate;	// 84 = 0x54
	UIView *m_languageIndicator;	// 88 = 0x58
	NSString *m_previousInputString;	// 92 = 0x5c
	UIKeyboardInputManager *m_inputManager;	// 96 = 0x60
	UIKeyboardCandidate *m_autocorrection;	// 100 = 0x64
	UIAutocorrectInlinePrompt *m_autocorrectPrompt;	// 104 = 0x68
	UIDelayedAction *m_autocorrectPromptAction;	// 108 = 0x6c
	NSMutableDictionary *m_autocorrectHistoryLists;	// 112 = 0x70
	NSMutableArray *m_recentUnacceptedAutocorrections;	// 116 = 0x74
	NSArray *m_candidates;	// 120 = 0x78
	id<UIKeyboardCandidateList> m_candidateList;	// 124 = 0x7c
	UIView *m_markedTextOverlay;	// 128 = 0x80
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;	// 132 = 0x84
	NSObject<UIKeyboardRecording, UIApplicationEventRecording> *m_recorder;	// 136 = 0x88
	UIKeyboardLayout *m_layout;	// 140 = 0x8c
	NSMutableDictionary *m_keyedLayouts;	// 144 = 0x90
	NSString *m_inputModeLastChosen;	// 148 = 0x94
	struct {
		NSTimer *timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;	// 152 = 0x98
	NSTimer *m_autoDeleteTimer;	// 164 = 0xa4
	BOOL m_autoDeleteJustFired;	// 168 = 0xa8
	unsigned m_autoDeleteCount;	// 172 = 0xac
	double m_autoDeleteLastDelete;	// 176 = 0xb0
	double m_autoDeleteInterval;	// 184 = 0xb8
	unsigned long m_autoDeleteShiftCharacter;	// 192 = 0xc0
	UIDelayedAction *m_longPressAction;	// 196 = 0xc4
	int m_orientation;	// 200 = 0xc8
	int m_originalOrientation;	// 204 = 0xcc
	CGPoint m_inputPoint;	// 208 = 0xd0
	int m_changeCount;	// 216 = 0xd8
	double m_changeTime;	// 220 = 0xdc
	id m_changedDelegate;	// 228 = 0xe4
	CFRunLoopObserverRef m_observer;	// 232 = 0xe8
	unsigned m_textInputChangingCount;	// 236 = 0xec
	BOOL m_textInputChangingText;	// 240 = 0xf0
	BOOL m_textInputChangingDirection;	// 241 = 0xf1
	BOOL m_textInputChangesIgnored;	// 242 = 0xf2
	BOOL m_insideKeyInputDelegateCall;	// 243 = 0xf3
	UITextInputTraits *m_defaultTraits;	// 244 = 0xf4
	UITextInputTraits *m_traits;	// 248 = 0xf8
	int m_returnKeyState;	// 252 = 0xfc
	int m_currentDirection;	// 256 = 0x100
	int m_contextWordDepth;	// 260 = 0x104
	BOOL m_autoDeleteOK;	// 264 = 0x108
	BOOL m_autocapitalizationPreference;	// 265 = 0x109
	BOOL m_autocorrectPromptTimerFired;	// 266 = 0x10a
	BOOL m_autocorrectionPreference;	// 267 = 0x10b
	BOOL m_autoshift;	// 268 = 0x10c
	BOOL m_caretShowingNow;	// 269 = 0x10d
	BOOL m_changeNotificationDisabled;	// 270 = 0x10e
	BOOL m_correctionLearningAllowed;	// 271 = 0x10f
	BOOL m_delegateIsSMSTextView;	// 272 = 0x110
	BOOL m_delegateRequiresKeyEvents;	// 273 = 0x111
	BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;	// 274 = 0x112
	BOOL m_doubleSpacePeriodPreference;	// 275 = 0x113
	BOOL m_hardwareKeyboardAttached;	// 276 = 0x114
	BOOL m_inDealloc;	// 277 = 0x115
	BOOL m_inHardwareKeyboardMode;	// 278 = 0x116
	BOOL m_initializationDone;	// 279 = 0x117
	BOOL m_performDecomposingDelete;	// 280 = 0x118
	BOOL m_performanceLoggingEnabled;	// 281 = 0x119
	BOOL m_selecting;	// 282 = 0x11a
	BOOL m_shift;	// 283 = 0x11b
	BOOL m_shiftLocked;	// 284 = 0x11c
	BOOL m_shiftLockedEnabled;	// 285 = 0x11d
	BOOL m_settingShift;	// 286 = 0x11e
	BOOL m_shouldSkipCandidateSelection;	// 287 = 0x11f
	BOOL m_suggestionsShownForCurrentDeletion;	// 288 = 0x120
	BOOL m_originalShouldSkipCandidateSelection;	// 289 = 0x121
	BOOL m_updatingPreferences;	// 290 = 0x122
	BOOL m_changingGeometryWithSameOrientation;	// 291 = 0x123
	BOOL m_suppressGeometryChangeNotifications;	// 292 = 0x124
	BOOL m_acceptingCandidate;	// 293 = 0x125
	BOOL m_userChangedSelection;	// 294 = 0x126
	BOOL m_shouldChargeKeys;	// 295 = 0x127
	BOOL m_longPress;	// 296 = 0x128
	BOOL m_syntheticInput;	// 297 = 0x129
	BOOL m_replacingWord;	// 298 = 0x12a
	BOOL m_shiftNeedsUpdate;	// 299 = 0x12b
	BOOL m_shiftPreventAutoshift;	// 300 = 0x12c
	BOOL m_shiftHeldDownNeedsUpdated;	// 301 = 0x12d
	BOOL m_delegateAdoptsTextInput;	// 302 = 0x12e
	BOOL m_delegateAdoptsTextInputPrivate;	// 303 = 0x12f
	BOOL m_delegateAdoptsKeyboardInput;	// 304 = 0x130
	BOOL m_clientVariantSupportEnabled;	// 305 = 0x131
	BOOL m_clientVariantSupportEnabledEver;	// 306 = 0x132
	NSMutableArray *m_keyplaneNamesPreviousDelegate;	// 308 = 0x134
	NSMutableArray *m_keyplaneNamesCurrentDelegate;	// 312 = 0x138
	UITextInputArrowKeyHistory *m_arrowKeyHistory;	// 316 = 0x13c
	BOOL m_preRotateShift;	// 320 = 0x140
	BOOL m_preRotateShiftLocked;	// 321 = 0x141
	BOOL m_showInputModeIndicator;	// 322 = 0x142
	BOOL m_suppressUpdateCandidateView;	// 323 = 0x143
	BOOL m_shouldUpdateCacheOnInputModesChange;	// 324 = 0x144
	BOOL m_shouldSetInputModeInNextRun;	// 325 = 0x145
	BOOL m_rivenCenterFilled;	// 326 = 0x146
	float m_splitProgress;	// 328 = 0x148
	NSString *m_currentUsedInputMode;	// 332 = 0x14c
	NSString *m_lastUsedInputMode;	// 336 = 0x150
	BOOL m_needsCandidates;	// 340 = 0x154
	BOOL m_shouldSkipCandidateGeneration;	// 341 = 0x155
	BOOL m_updateLayoutOnShowKeyboard;	// 342 = 0x156
	BOOL m_receivedCandidatesInCurrentInputMode;	// 343 = 0x157
	BOOL m_markedTextChangesIgnored;	// 344 = 0x158
	int _currentAlertReason;	// 348 = 0x15c
	BOOL m_scrolling;	// 352 = 0x160
	id<UIKeyboardTypology> typologyRecorder;	// 356 = 0x164
	BOOL m_showsCandidateBar;	// 360 = 0x168
	BOOL m_showsCandidateInline;	// 361 = 0x169
	UIAlertView *keyboardAlertView;	// 364 = 0x16c
	BOOL committingCandidate;	// 368 = 0x170
	BOOL geometryIsChanging;	// 369 = 0x171
}
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory;	// G=0x32c11569; S=0x32c02049; @synthesize=m_arrowKeyHistory
@property(readonly, assign) BOOL autocapitalizationPreference;	// G=0x32bdcf05; converted property
@property(readonly, retain) UIAutocorrectInlinePrompt *autocorrectPrompt;	// G=0x32c12df1; converted property
@property(assign) BOOL autocorrectSpellingEnabled;	// G=0x32c09031; S=0x32bdb255; converted property
@property(readonly, assign) BOOL autocorrectionPreference;	// G=0x32bdb221; converted property
@property(assign) BOOL automaticMinimizationEnabled;	// G=0x32d276b9; S=0x32d276ed; converted property
@property(assign) BOOL caretBlinks;	// G=0x32d2d7cd; S=0x32bdeb65; converted property
@property(assign) BOOL caretVisible;	// G=0x32c0f00d; S=0x32bdebe9; converted property
@property(readonly, assign) BOOL centerFilled;	// G=0x32d26d1d; 
@property(readonly, assign) int changeCount;	// G=0x32bdc819; converted property
@property(assign) BOOL changeNotificationDisabled;	// G=0x32d28a71; S=0x32d28a81; converted property
@property(retain, nonatomic) id changedDelegate;	// G=0x32bdcac1; S=0x32bdcad1; @synthesize=m_changedDelegate
@property(retain, nonatomic) id changedDelegate;	// @dynamic
@property(readonly, assign, getter=isClientVariantSupportEnabled) BOOL clientVariantSupportEnabled;	// G=0x32be7045; converted property
@property(assign, nonatomic) BOOL committingCandidate;	// G=0x32d2da21; S=0x32d2da31; @synthesize
@property(retain, nonatomic) NSString *currentUsedInputMode;	// G=0x32c12431; S=0x32bdb859; @synthesize=m_currentUsedInputMode
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;	// G=0x32bd6a79; S=0x32bdbf45; 
@property(readonly, assign, nonatomic) UIResponder *delegateAsResponder;	// G=0x32d28725; 
@property(readonly, assign) BOOL delegateIsSMSTextView;	// G=0x32bdcb21; converted property
@property(readonly, assign) BOOL doubleSpacePeriodPreference;	// G=0x32bd796d; converted property
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;	// G=0x32bdbf31; S=0x32bdbbf1; @synthesize=m_geometryDelegate
@property(assign, nonatomic) BOOL geometryIsChanging;	// G=0x32d2da41; S=0x32bec161; @synthesize
@property(retain) id hardwareKeyboardsSeenPreference;	// G=0x32d27c21; S=0x32d27c59; converted property
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;	// G=0x32bd8f2d; S=0x32c10239; 
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *inputDelegate;	// G=0x32bd8d21; 
@property(retain, nonatomic) UIKeyboardInputManager *inputManager;	// G=0x32bdac51; S=0x32bdac41; @synthesize=m_inputManager
@property(readonly, retain) NSString *inputModeLastChosen;	// G=0x32d28389; converted property
@property(retain, nonatomic) UIAlertView *keyboardAlertView;	// G=0x32c8a6a9; S=0x32c8a6b9; @synthesize
@property(retain, nonatomic) NSString *lastUsedInputMode;	// G=0x32d2da11; S=0x32c8aa91; @synthesize=m_lastUsedInputMode
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;	// G=0x32bdedd1; 
@property(assign, getter=isLongPress) BOOL longPress;	// G=0x32c44915; S=0x32d2dd4d; converted property
@property(readonly, retain) UIView *markedTextOverlay;	// G=0x32d28de5; converted property
@property(readonly, assign) unsigned minimumTouchesForTranslation;	// G=0x32d26f35; 
@property(assign) unsigned phraseBoundary;	// G=0x32d298f5; S=0x32d2986d; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;	// G=0x32bd6a55; 
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder;	// G=0x32bdb849; S=0x32c8a7cd; 
@property(assign) BOOL returnKeyEnabled;	// G=0x32bea16d; S=0x32bdcd05; converted property
@property(assign) BOOL rivenSplitLock;	// G=0x32d26ea5; S=0x32d26ed9; 
@property(assign, getter=isShiftLocked) BOOL shiftLocked;	// G=0x32be8455; S=0x32d292cd; converted property
@property(readonly, assign) BOOL shiftLockedEnabled;	// G=0x32d29335; converted property
@property(assign) BOOL shouldChargeKeys;	// G=0x32d2c961; S=0x32bdccd1; converted property
@property(assign, nonatomic) BOOL shouldSetInputModeInNextRun;	// G=0x32d2d9f1; S=0x32d2da01; @synthesize=m_shouldSetInputModeInNextRun
@property(readonly, assign, nonatomic) BOOL shouldShowCandidateBar;	// G=0x32bead25; 
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;	// G=0x32c44ee9; S=0x32bdfe39; 
@property(assign, nonatomic) BOOL showInputModeIndicator;	// G=0x32c2c819; S=0x32d2d9e1; @synthesize=m_showInputModeIndicator
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x32bdbe69; S=0x32beae75; @synthesize=m_showsCandidateBar
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x32c8a031; S=0x32c88441; @synthesize=m_showsCandidateInline
@property(readonly, assign, nonatomic) BOOL splitTransitionInProgress;	// G=0x32beb819; 
@property(retain, nonatomic) id<UIKeyboardTypology> typologyRecorder;	// G=0x32bdac61; S=0x32c8a809; @synthesize
+ (void)_clearHardwareKeyboardMinimizationPreference;	// 0x32d2dcc5
+ (id)activeInstance;	// 0x32af9555
+ (float)additionalInstanceHeight;	// 0x32bdbe19
+ (float)additionalInstanceHeightLoading;	// 0x32d266ed
+ (void)applicationDidEnterBackground:(id)application;	// 0x32c89e65
+ (void)applicationDidReceiveMemoryWarning:(id)application;	// 0x32c3c4a9
+ (void)applicationWillEnterForeground:(id)application;	// 0x32c8b3fd
+ (void)applicationWillResignActive:(id)application;	// 0x32c89ac9
+ (void)applicationWillSuspend:(id)application;	// 0x32c89afd
+ (CGSize)defaultSize;	// 0x32d26691
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32b59875
+ (void)hardwareKeyboardAvailabilityChanged;	// 0x32d2cec9
+ (int)interfaceOrientationForSize:(CGSize)size;	// 0x32bdbc49
+ (BOOL)isSplit;	// 0x32bdf759
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32bdf491
+ (void)markElapsed:(id)elapsed;	// 0x32bdbb81
+ (void)markPerformance:(id)performance;	// 0x32bd66fd
+ (id)normalizedInputModesFromPreference;	// 0x32d266b5
+ (int)persistentDictationTargetZone;	// 0x32d270e5
+ (CGPoint)persistentDictationWindowOffset;	// 0x32d272e1
+ (CGPoint)persistentOffset;	// 0x32b5c2c9
+ (float)persistentSplitProgress;	// 0x32d26f99
+ (void)refreshRivenStateWithTraits:(id)traits isKeyboard:(BOOL)keyboard;	// 0x32bd7709
+ (void)releaseSharedInstance;	// 0x32b6ec1d
+ (BOOL)rivenInstalled;	// 0x32b60005
+ (BOOL)rivenPreference;	// 0x32ae7e15
+ (BOOL)rivenTranslationPreference;	// 0x32b5efc5
+ (void)setParentTestForProfiling:(id)profiling;	// 0x32d2dae9
+ (void)setPersistentDictationTargetZone:(int)zone;	// 0x32d2712d
+ (void)setPersistentDictationWindowOffset:(CGPoint)offset;	// 0x32d27189
+ (void)setPersistentOffset:(CGPoint)offset;	// 0x32c184b9
+ (void)setPersistentSplitProgress:(float)progress;	// 0x32d27005
+ (id)sharedInstance;	// 0x32bd6165
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32b59719
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation textInputTraits:(id)traits;	// 0x32bdf50d
+ (float)splitProgress;	// 0x32d26ff5
+ (BOOL)supportsSplit;	// 0x32be21e9
+ (void)suppressSetPersistentOffset:(BOOL)offset;	// 0x32d270d1
- (id)initWithFrame:(CGRect)frame;	// 0x32bd6339
- (id)UILanguagePreference;	// 0x32bd7a29
- (id)_autocorrectPromptRects;	// 0x32c529b9
- (int)_clipCornersOfView:(id)view;	// 0x32d28a91
- (id)_getAutocorrection;	// 0x32d2dfd9
- (id)_getCurrentKeyboardName;	// 0x32d2def1
- (id)_getCurrentKeyplaneName;	// 0x32d2de8d
- (id)_getLocalizedInputMode;	// 0x32d2df55
- (void)_handleWebKeyEvent:(GSEventRef)event withEventType:(int)eventType withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x32d2d439
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString;	// 0x32d2d591
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x32d2d515
- (BOOL)_hasCandidates;	// 0x32bd8681
- (unsigned)_inputCountForAutocorrectionCandidate;	// 0x32d2e109
- (id)_inputForAutocorrectionCandidate;	// 0x32c4fccd
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;	// 0x32d2db89
- (id)_layout;	// 0x32bdf4ed
- (BOOL)_needsCandidates;	// 0x32d2e0b9
- (int)_positionInCandidateList:(id)candidateList;	// 0x32d2dff9
- (id)_rangeForAutocorrectionText:(id)autocorrectionText;	// 0x32c52c11
- (void)_releaseInputManager;	// 0x32d2e0e9
- (void)_remapKeyEvent:(GSEventRef)event;	// 0x32c10361
- (void)_resetInputLocation;	// 0x32d2e0c9
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x32d2dfb9
- (void)_setInputManager:(id)manager;	// 0x32d2db25
- (void)_setNeedsCandidates:(BOOL)candidates;	// 0x32d2e0a9
- (void)_setShiftLockedEnabled:(BOOL)enabled;	// 0x32d2db35
- (id)_shortcutConversionCandidateForInput:(id)input;	// 0x32c12441
- (BOOL)_shouldMinimizeForHardwareKeyboard;	// 0x32bdbf01
- (BOOL)_shouldShowCandidateBar:(BOOL)bar;	// 0x32bead41
- (void)_updateSoundPreheatingForWindow:(id)window;	// 0x32bdc8f1
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x32bebf75
- (void)acceptAutocorrection;	// 0x32c19ac1
- (void)acceptCandidate:(id)candidate atIndex:(unsigned)index;	// 0x32d2a881
- (void)acceptCurrentCandidate;	// 0x32d2ac51
- (void)acceptCurrentCandidateIfSelected;	// 0x32be96d5
- (BOOL)acceptInputString:(id)string;	// 0x32c0d2fd
- (BOOL)acceptWord:(id)word firstDelete:(unsigned)aDelete;	// 0x32c4bbad
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x32d2c935
- (void)addInputObject:(id)object;	// 0x32d2afed
- (void)addInputString:(id)string;	// 0x32d295e5
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x32c1172d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x32d27fa1
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)sortingMethod;	// 0x32d2c879
- (void)animateAutocorrection;	// 0x32caa859
- (void)applicationResumedEventsOnly:(id)only;	// 0x32d267e5
- (void)applicationSuspendedEventsOnly:(id)only;	// 0x32d26779
- (void)applyAutocorrection;	// 0x32caa451
// declared property getter: - (id)arrowKeyHistory;	// 0x32c11569
- (void)autoDeleteTimerFired:(id)fired;	// 0x32d2caa9
// converted property getter: - (BOOL)autocapitalizationPreference;	// 0x32bdcf05
- (id)autocorrectHistoryForInputMode:(id)inputMode;	// 0x32ca68c9
// converted property getter: - (id)autocorrectPrompt;	// 0x32c12df1
// converted property getter: - (BOOL)autocorrectSpellingEnabled;	// 0x32c09031
- (void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void *)context;	// 0x32cab339
// converted property getter: - (BOOL)autocorrectionPreference;	// 0x32bdb221
- (BOOL)autocorrectionPreferenceForTraits;	// 0x32bdb1ad
- (id)autocorrectionRecordForWord:(id)word;	// 0x32ca6891
// converted property getter: - (BOOL)automaticMinimizationEnabled;	// 0x32d276b9
- (void)callChanged;	// 0x32c0a90d
- (void)callChangedSelection;	// 0x32bded55
- (BOOL)callLayoutIgnoresShiftState;	// 0x32c44fc5
- (BOOL)callLayoutIsShiftKeyBeingHeld;	// 0x32beb0f5
- (BOOL)callLayoutIsShiftKeyPlaneChooser;	// 0x32beb0a5
- (void)callLayoutLongPressAction;	// 0x32d2da55
- (void)callLayoutSetAutoshift:(BOOL)autoshift;	// 0x32bdf33d
- (void)callLayoutSetShift:(BOOL)shift;	// 0x32bdf2e5
- (void)callLayoutUpdateAllLocalizedKeys;	// 0x32d2da9d
- (void)callLayoutUpdateLocalizedKeys;	// 0x32bdb165
- (void)callLayoutUpdateReturnKey;	// 0x32bdcd31
- (BOOL)callLayoutUsesAutoShift;	// 0x32bdf1cd
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)call characterCountForRapidDelete:(int)rapidDelete;	// 0x32d287e1
- (BOOL)callShouldInsertText:(id)call;	// 0x32c12711
- (BOOL)callShouldReplaceExtendedRange:(unsigned)call withText:(id)text includeMarkedText:(BOOL)text3;	// 0x32caa0f1
- (BOOL)canHandleKeyHitTest;	// 0x32beaa0d
- (void)cancelAllKeyEvents;	// 0x32c2ddb9
- (void)cancelSplitTransition;	// 0x32d274cd
- (id)candidateList;	// 0x32d2aeb1
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x32d2ae11
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32d2ae35
// converted property getter: - (BOOL)caretBlinks;	// 0x32d2d7cd
// converted property getter: - (BOOL)caretVisible;	// 0x32c0f00d
// declared property getter: - (BOOL)centerFilled;	// 0x32d26d1d
// converted property getter: - (int)changeCount;	// 0x32bdc819
// converted property getter: - (BOOL)changeNotificationDisabled;	// 0x32d28a71
// declared property getter: - (id)changedDelegate;	// 0x32bdcac1
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x32d2c971
- (BOOL)checkSpellingPreference;	// 0x32bdb371
- (BOOL)checkSpellingPreferenceForTraits;	// 0x32bdb2fd
- (void)clearAnimations;	// 0x32c8a091
- (void)clearAutocorrectPromptTimer;	// 0x32bd8e8d
- (void)clearChangeTimeAndCount;	// 0x32bdc82d
- (void)clearDelegate;	// 0x32c8a055
- (void)clearExcessKeyboardMemory;	// 0x32c445bd
- (void)clearInput;	// 0x32bd8389
- (void)clearKeyAreas;	// 0x32beaa31
- (void)clearLanguageIndicator;	// 0x32d2dd5d
- (void)clearLayouts;	// 0x32bdb86d
- (void)clearLongPressTimer;	// 0x32bf91a1
- (void)clearSelection;	// 0x32d2d7f5
- (void)clearShiftState;	// 0x32c14055
- (void)clearTimers;	// 0x32c8a0dd
- (void)clearTransientState;	// 0x32bdcae5
- (id)clientOverrideForKey:(id)key;	// 0x32d2756d
- (id)clientVariantDelegate;	// 0x32bdcdc5
- (id)clientVariantsForKey:(id)key;	// 0x32d27515
// declared property getter: - (BOOL)committingCandidate;	// 0x32d2da21
- (CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;	// 0x32c53255
- (id)currentInputContextFromInputDelegateWithWordRange:(id)wordRange;	// 0x32bde7f5
- (BOOL)currentKeyboardTraitsAllowCandidateBar;	// 0x32c19cdd
- (float)currentLandscapeHeight;	// 0x32d2651d
- (float)currentLandscapeWidth;	// 0x32d26471
- (float)currentPortraitHeight;	// 0x32beb6dd
- (float)currentPortraitWidth;	// 0x32beb5f5
// declared property getter: - (id)currentUsedInputMode;	// 0x32c12431
- (void)dealloc;	// 0x32c8a819
- (void)defaultsDidChange;	// 0x32d26acd
- (void)delayedInit;	// 0x32bf7ec5
// declared property getter: - (id)delegate;	// 0x32bd6a79
// declared property getter: - (id)delegateAsResponder;	// 0x32d28725
// converted property getter: - (BOOL)delegateIsSMSTextView;	// 0x32bdcb21
- (BOOL)delegateSuggestionsForCurrentInput;	// 0x32d2c3e1
- (BOOL)delegateSupportsCorrectionUI;	// 0x32c4fca1
- (void)deleteBackward;	// 0x32d295d1
- (void)deleteBackwardAndNotify:(BOOL)notify;	// 0x32d294f1
- (void)deleteForwardAndNotify:(BOOL)notify;	// 0x32d29561
- (void)deleteFromInput;	// 0x32d2a101
- (void)detach;	// 0x32c8a6cd
- (void)dismissKeyboard;	// 0x32d2d285
- (BOOL)displaysCandidates;	// 0x32c0a675
// converted property getter: - (BOOL)doubleSpacePeriodPreference;	// 0x32bd796d
- (CGSize)dragGestureSize;	// 0x32d26e6d
- (void)enable;	// 0x32d287cd
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;	// 0x32d27f6d
- (void)fadeAutocorrectPrompt;	// 0x32d2c161
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x32d2ddfd
- (void)firstHardwareAutoRepeat:(id)repeat;	// 0x32d2cfa1
- (BOOL)flushKeyplaneName:(id)name;	// 0x32c19d99
- (void)forceShiftUpdate;	// 0x32ca67a1
- (void)forceShiftUpdateIfKeyboardStateChanged;	// 0x32c0b8fd
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x32d26e39
- (id)generateAutocorrectionReplacements:(id)replacements;	// 0x32ca86c5
- (void)generateCandidates;	// 0x32bf91ed
- (void)generateCandidatesWithOptions:(int)options;	// 0x32bf9201
- (void)geometryChangeDone:(BOOL)done;	// 0x32bf90cd
// declared property getter: - (id)geometryDelegate;	// 0x32bdbf31
// declared property getter: - (BOOL)geometryIsChanging;	// 0x32d2da41
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x32d2c8a5
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x32d2c8d5
- (void)handleAutoDelete;	// 0x32d2cc51
- (void)handleDelete;	// 0x32d294d9
- (void)handleDeleteAsRepeat:(BOOL)repeat;	// 0x32d2940d
- (void)handleDeleteWithNonZeroInputCount;	// 0x32d29ea9
- (void)handleDeleteWithZeroInputCount;	// 0x32d29b0d
- (BOOL)handleDoubleSpacePeriodForInputString:(id)inputString afterSpace:(BOOL)space elapsedTime:(double)time;	// 0x32c4c1f9
- (BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL *)okay;	// 0x32c10401
- (void)handleKeyEvent:(GSEventRef)event;	// 0x32c0fa29
- (void)handleObserverCallback;	// 0x32c0a871
- (void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;	// 0x32c11675
- (void)hardwareAutoRepeat:(id)repeat;	// 0x32d2cf81
- (void)hardwareKeyboardAvailabilityChanged;	// 0x32d2cefd
// converted property getter: - (id)hardwareKeyboardsSeenPreference;	// 0x32d27c21
- (BOOL)hasAutoRepeat;	// 0x32d2db45
- (BOOL)hasEditableMarkedText;	// 0x32bde651
- (BOOL)hasMarkedText;	// 0x32bde69d
- (BOOL)hasUpToDateCandidates;	// 0x32d2ad51
- (BOOL)hideAccessoryViewsDuringSplit;	// 0x32d2742d
- (void)hideKeyboard;	// 0x32d2d029
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32c0aea9
- (id)indexTitlesForGroupTitles:(id)groupTitles sortingMethod:(id)method;	// 0x32d2c905
// declared property getter: - (id)inputDelegate;	// 0x32bd8d21
// declared property getter: - (id)inputManager;	// 0x32bdac51
- (id)inputModeFirstPreference;	// 0x32d277cd
// converted property getter: - (id)inputModeLastChosen;	// 0x32d28389
- (id)inputModeLastChosenPreference;	// 0x32d2781d
- (id)inputModeLastUsedForLanguage:(id)language;	// 0x32d27989
- (id)inputModeLastUsedPreference;	// 0x32bd7ce5
- (id)inputModePreference;	// 0x32bd79b1
- (id)inputOverlayContainer;	// 0x32c52e79
- (id)inputStringFromPhraseBoundary;	// 0x32d28e91
- (void)insertText:(id)text;	// 0x32c4508d
- (void)installRecorder;	// 0x32bdb959
- (void)installTypology;	// 0x32bdba15
- (int)interfaceOrientation;	// 0x32bfb2bd
- (BOOL)isAllowedInputMode:(id)mode;	// 0x32bd7d75
- (BOOL)isAutoDeleteActive;	// 0x32d2dc85
- (BOOL)isAutoFillMode;	// 0x32c559d9
- (BOOL)isAutoShifted;	// 0x32be22dd
// converted property getter: - (BOOL)isClientVariantSupportEnabled;	// 0x32be7045
- (BOOL)isDesiredInputMode:(id)mode;	// 0x32bdda3d
// declared property getter: - (BOOL)isInHardwareKeyboardMode;	// 0x32bd8f2d
// converted property getter: - (BOOL)isLongPress;	// 0x32c44915
- (BOOL)isMinimized;	// 0x32bdacad
// converted property getter: - (BOOL)isShiftLocked;	// 0x32be8455
- (BOOL)isShifted;	// 0x32c0ab4d
- (BOOL)isUsingDictationLayout;	// 0x32d2b545
- (BOOL)isValidKeyInput:(id)input;	// 0x32c11579
- (void)keyActivated;	// 0x32d293f5
- (void)keyDeactivated;	// 0x32d29405
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x32c0c6b1
// declared property getter: - (id)keyboardAlertView;	// 0x32c8a6a9
- (void)keyboardDidHide:(id)keyboard;	// 0x32c44719
- (BOOL)keyboardDrawsOpaque;	// 0x32c40ab5
- (BOOL)keyboardRecordingEnabled;	// 0x32bdb999
- (BOOL)keyboardsExpandedPreference;	// 0x32d27685
- (id)keyplaneNameInCurrentDelegateListForIndex:(int)index;	// 0x32d27619
// declared property getter: - (id)lastUsedInputMode;	// 0x32d2da11
- (void)launchTypologyApplication;	// 0x32d2dd25
- (void)layoutHasChanged;	// 0x32c87c55
// declared property getter: - (id)legacyInputDelegate;	// 0x32bdedd1
- (void)longPressAction;	// 0x32d2ce85
// converted property getter: - (id)markedTextOverlay;	// 0x32d28de5
- (void)mediaKeyDown:(GSEventRef)down;	// 0x32d2d71d
// declared property getter: - (unsigned)minimumTouchesForTranslation;	// 0x32d26f35
- (void)movePhraseBoundaryToDirection:(int)direction;	// 0x32d29915
- (BOOL)needsToDeferUpdateTextCandidateView;	// 0x32d2b469
- (BOOL)noContent;	// 0x32c46925
- (void)notifyShiftState;	// 0x32bdf221
- (void)performClientVariantActionNamed:(id)named;	// 0x32d275c5
- (BOOL)performanceLoggingPreference;	// 0x32bf8065
// converted property getter: - (unsigned)phraseBoundary;	// 0x32d298f5
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32bfaf9d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32c0ab6d
- (void)prepareForGeometryChange;	// 0x32bebffd
- (void)prepareForSelectionChange;	// 0x32c00f61
- (void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;	// 0x32d28435
- (void)prepareUsedKeyplaneNameListForNewDelegate;	// 0x32bdcebd
// declared property getter: - (id)privateInputDelegate;	// 0x32bd6a55
- (void)pushRecentAutocorrectionSuggestion:(id)suggestion;	// 0x32c52901
- (id)recentAutocorrectionSuggestionForTypedString:(id)typedString;	// 0x32c4c12d
- (void)recomputeActiveInputModes;	// 0x32d29281
- (void)recomputeActiveInputModesFromList:(id)list;	// 0x32bdd6fd
- (void)recordAcceptedAutocorrection:(id)autocorrection;	// 0x32cab059
- (void)recordRejectedAutocorrection:(id)autocorrection;	// 0x32d2c391
// declared property getter: - (id)recorder;	// 0x32bdb849
- (void)refreshRivenPreferences;	// 0x32bd76d9
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x32beabd9
- (void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;	// 0x32be1c3d
- (void)releaseSuppressUpdateCandidateView;	// 0x32bf8701
- (void)removeAutocorrectPrompt;	// 0x32bd8d49
- (void)removeAutocorrection;	// 0x32d2a851
- (void)removeFromSuperview;	// 0x32c8a5fd
- (void)replaceText:(id)text;	// 0x32d2b0e9
- (void)resizeCandidateBarWithDelta:(float)delta;	// 0x32d2b58d
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x32be3475
- (void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;	// 0x32be1c8d
- (id)returnKeyDisplayName;	// 0x32bea18d
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x32bea16d
- (int)returnKeyType;	// 0x32bea205
// declared property getter: - (BOOL)rivenSplitLock;	// 0x32d26ea5
- (void)saveInputModesPreference:(id)preference;	// 0x32d27791
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x32d2b299
- (id)searchStringForMarkedText;	// 0x32d28e59
- (void)selectionDidChange:(id)selection;	// 0x32c01e11
- (void)selectionScrolling:(id)scrolling;	// 0x32d267f9
- (id)selectionView;	// 0x32bdeb91
- (void)selectionWillChange:(id)selection;	// 0x32c00f21
// declared property setter: - (void)setArrowKeyHistory:(id)history;	// 0x32c02049
// converted property setter: - (void)setAutocorrectSpellingEnabled:(BOOL)enabled;	// 0x32bdb255
- (void)setAutocorrection:(id)autocorrection;	// 0x32bd8421
// converted property setter: - (void)setAutomaticMinimizationEnabled:(BOOL)enabled;	// 0x32d276ed
- (void)setCandidateList:(id)list updateCandidateView:(BOOL)view;	// 0x32d2b2d5
- (void)setCandidates:(id)candidates;	// 0x32bd8519
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x32bdeb65
// converted property setter: - (void)setCaretVisible:(BOOL)visible;	// 0x32bdebe9
// converted property setter: - (void)setChangeNotificationDisabled:(BOOL)disabled;	// 0x32d28a81
- (void)setChanged;	// 0x32c0a135
// declared property setter: - (void)setChangedDelegate:(id)delegate;	// 0x32bdcad1
// declared property setter: - (void)setCommittingCandidate:(BOOL)candidate;	// 0x32d2da31
- (void)setCorrectionLearningAllowed:(BOOL)allowed;	// 0x32d28631
// declared property setter: - (void)setCurrentUsedInputMode:(id)mode;	// 0x32bdb859
- (void)setDefaultTextInputTraits:(id)traits;	// 0x32bebee5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32bdbf45
- (void)setDelegate:(id)delegate force:(BOOL)force;	// 0x32bdbf59
- (void)setFrame:(CGRect)frame;	// 0x32bd6769
// declared property setter: - (void)setGeometryDelegate:(id)delegate;	// 0x32bdbbf1
// declared property setter: - (void)setGeometryIsChanging:(BOOL)changing;	// 0x32bec161
// converted property setter: - (void)setHardwareKeyboardsSeenPreference:(id)preference;	// 0x32d27c59
// declared property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x32c10239
- (void)setInitialDirection;	// 0x32bdec19
// declared property setter: - (void)setInputManager:(id)manager;	// 0x32bdac41
- (void)setInputMode:(id)mode;	// 0x32bd7e7d
- (void)setInputMode:(id)mode userInitiated:(BOOL)initiated;	// 0x32bd7e91
- (void)setInputModeFromPreferences;	// 0x32bd7abd
- (void)setInputModeLastChosenPreference;	// 0x32d27879
- (void)setInputModeToNextASCIICapableInPreferredList;	// 0x32d2833d
- (void)setInputModeToNextInPreferredList;	// 0x32d28199
- (void)setInputObject:(id)object;	// 0x32d2aec5
- (void)setInputPoint:(CGPoint)point;	// 0x32c0d339
// declared property setter: - (void)setKeyboardAlertView:(id)view;	// 0x32c8a6b9
// declared property setter: - (void)setLastUsedInputMode:(id)mode;	// 0x32c8aa91
// converted property setter: - (void)setLongPress:(BOOL)press;	// 0x32d2dd4d
- (void)setMarkedText;	// 0x32d28ce9
- (void)setOrientation;	// 0x32bd6811
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x32d2986d
- (void)setPreviousInputString:(id)string;	// 0x32c09e1d
// declared property setter: - (void)setRecorder:(id)recorder;	// 0x32c8a7cd
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x32bdcd05
// declared property setter: - (void)setRivenSplitLock:(BOOL)lock;	// 0x32d26ed9
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x32d28f1d
- (void)setShift:(BOOL)shift;	// 0x32c09fb5
- (void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;	// 0x32c09fc9
// converted property setter: - (void)setShiftLocked:(BOOL)locked;	// 0x32d292cd
- (void)setShiftLockedForced:(BOOL)forced;	// 0x32d29309
- (void)setShiftNeedsUpdate;	// 0x32c0a065
- (void)setShiftOffIfNeeded;	// 0x32c09f29
- (void)setShiftPreventAutoshift:(BOOL)autoshift;	// 0x32c0a115
// converted property setter: - (void)setShouldChargeKeys:(BOOL)chargeKeys;	// 0x32bdccd1
// declared property setter: - (void)setShouldSetInputModeInNextRun:(BOOL)setInputModeInNextRun;	// 0x32d2da01
// declared property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x32bdfe39
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)updateCacheOnInputModesChange;	// 0x32d27c11
// declared property setter: - (void)setShowInputModeIndicator:(BOOL)indicator;	// 0x32d2d9e1
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x32beae75
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x32c88441
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x32d2dda1
- (void)setSplitProgress:(float)progress;	// 0x32d26f3d
- (void)setTextInputChangesIgnored:(BOOL)ignored;	// 0x32d2de7d
// declared property setter: - (void)setTypologyRecorder:(id)recorder;	// 0x32c8a809
- (void)setUsesCandidateSelection:(BOOL)selection;	// 0x32be97c5
- (unsigned)shiftFlagsForInputString;	// 0x32c44f49
- (BOOL)shiftLockPreference;	// 0x32bd7939
// converted property getter: - (BOOL)shiftLockedEnabled;	// 0x32d29335
- (BOOL)shouldAcceptCandidate:(id)candidate beforeInputString:(id)string;	// 0x32d29629
// converted property getter: - (BOOL)shouldChargeKeys;	// 0x32d2c961
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)deletedCharacter;	// 0x32d29a65
// declared property getter: - (BOOL)shouldSetInputModeInNextRun;	// 0x32d2d9f1
// declared property getter: - (BOOL)shouldShowCandidateBar;	// 0x32bead25
// declared property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x32c44ee9
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x32d2d8a1
- (BOOL)shouldSwitchInputMode:(id)mode;	// 0x32bde025
- (void)showInformationalAlertIfNeededForReason:(int)reason;	// 0x32d28025
// declared property getter: - (BOOL)showInputModeIndicator;	// 0x32c2c819
- (void)showInternationalKeyInfoAlertIfNeeded;	// 0x32d28181
- (void)showKeyboard;	// 0x32d2d0d5
- (void)showNextCandidates;	// 0x32d2adcd
// declared property getter: - (BOOL)showsCandidateBar;	// 0x32bdbe69
// declared property getter: - (BOOL)showsCandidateInline;	// 0x32c8a031
- (id)sortingMethods;	// 0x32d2c825
// declared property getter: - (BOOL)splitTransitionInProgress;	// 0x32beb819
- (void)startAutoDeleteTimer;	// 0x32d2ce11
- (void)startCaretBlinkIfNeeded;	// 0x32d2d7a1
- (void)startKeyboardRecording;	// 0x32de6dc9
- (void)stopAutoDelete;	// 0x32bdc9c5
- (void)stopKeyboardRecording;	// 0x32de6ed1
- (void)storeDelegateConformance;	// 0x32bdc855
- (CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;	// 0x32c0a38d
- (BOOL)suppliesCompletions;	// 0x32d29345
- (BOOL)supportsNumberKeySelection;	// 0x32d293d1
- (BOOL)swipeToTabPreference;	// 0x32bdfde9
- (void)takeTextInputTraitsFromDelegate;	// 0x32bd68ed
- (void)testAutocorrectionPromptWithCorrection:(id)correction;	// 0x32d2dc61
- (void)textChanged:(id)changed;	// 0x32c09b5d
- (void)textDidChange:(id)text;	// 0x32c09b4d
- (void)textFrameChanged:(id)changed;	// 0x32c12a31
- (int)textInputChangingCount;	// 0x32d2dc51
- (id)textInputTraits;	// 0x32bdf4fd
- (void)textWillChange:(id)text;	// 0x32c09a9d
- (void)timeElapsed:(unsigned)elapsed message:(id)message;	// 0x32c0d4f1
- (void)timeMark:(unsigned)mark;	// 0x32c0d34d
- (void)timeMark:(unsigned)mark message:(id)message;	// 0x32c0d23d
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x32d2c84d
- (void)toggleShift;	// 0x32d292a5
- (void)touchAutoDeleteTimerWithThreshold:(double)threshold;	// 0x32d2c991
- (void)touchAutocorrectPromptTimer;	// 0x32be9c6d
- (void)touchLongPressTimer;	// 0x32c0d131
- (void)touchLongPressTimerWithDelay:(double)delay;	// 0x32c0d149
- (void)trackUsageForAcceptedAutocorrection:(id)acceptedAutocorrection promptWasShowing:(BOOL)showing;	// 0x32cab175
- (void)trackUsageForPromptedCorrection:(id)promptedCorrection inputString:(id)string previousPrompt:(id)prompt;	// 0x32d2d8c9
- (BOOL)typologyEnabled;	// 0x32bdbb49
// declared property getter: - (id)typologyRecorder;	// 0x32bdac61
- (void)updateAutocorrectPrompt:(id)prompt;	// 0x32bd886d
- (void)updateAutocorrectPromptAction;	// 0x32bfad71
- (void)updateAutocorrectPromptDisplay:(CGRect)display;	// 0x32d2c069
- (void)updateCandidateDisplay;	// 0x32bd86f5
- (void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;	// 0x32d2b391
- (void)updateChangeTimeAndIncrementCount;	// 0x32c12661
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)character;	// 0x32d295f9
- (void)updateDoubleSpacePeriodStateForString:(id)string;	// 0x32c45715
- (void)updateForChangedSelection;	// 0x32bde071
- (void)updateFromTextInputTraits;	// 0x32d2db59
- (void)updateInputContextForDeletedText:(id)deletedText toWordRange:(id)wordRange;	// 0x32d28f79
- (void)updateInputManagerAutocapitalizationType;	// 0x32bd78dd
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only;	// 0x32d27f59
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only preserveIfPossible:(BOOL)possible;	// 0x32d27cfd
- (void)updateKeyboardEventsLagging:(GSEventRef)lagging;	// 0x32c101c1
- (void)updateKeysWithDelegates;	// 0x32beb7a9
- (void)updateLastUsedInputMode:(id)mode;	// 0x32c12325
- (void)updateLayout;	// 0x32bdaced
- (void)updateLayoutAndSetShift;	// 0x32d29add
- (void)updateLayoutIfNeeded;	// 0x32bec175
- (void)updateLayoutToCurrentInterfaceOrientation;	// 0x32d284e5
- (void)updateMarkedTextIfChanged;	// 0x32c01f39
- (void)updateObserverState;	// 0x32c0a089
- (void)updateReturnKey;	// 0x32c45701
- (void)updateReturnKey:(BOOL)key;	// 0x32bea035
- (void)updateShiftState;	// 0x32bdeec5
- (void)updateTextCandidateView;	// 0x32d2b759
- (BOOL)userSelectedCurrentCandidate;	// 0x32d2acf1
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;	// 0x32d2a731
@end

