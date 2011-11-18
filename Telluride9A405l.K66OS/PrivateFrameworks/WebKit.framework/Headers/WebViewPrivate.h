/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebFixedPositionContent, WebPreferences, NSURL, WAKWindow, WebVideoFullscreenController, WebInspector, WebEvent, NSString, WebNodeHighlight, NSTimer, NSMutableSet;
@protocol WebCaretChangeListener, WebFormDelegate, WebGeolocationProvider, WebDeviceOrientationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject {
@private
	Page *page;	// 4 = 0x4
	id UIDelegate;	// 8 = 0x8
	id UIDelegateForwarder;	// 12 = 0xc
	id resourceProgressDelegate;	// 16 = 0x10
	id downloadDelegate;	// 20 = 0x14
	id policyDelegate;	// 24 = 0x18
	id policyDelegateForwarder;	// 28 = 0x1c
	id frameLoadDelegate;	// 32 = 0x20
	id frameLoadDelegateForwarder;	// 36 = 0x24
	id<WebFormDelegate> formDelegate;	// 40 = 0x28
	id editingDelegate;	// 44 = 0x2c
	id editingDelegateForwarder;	// 48 = 0x30
	id scriptDebugDelegate;	// 52 = 0x34
	id historyDelegate;	// 56 = 0x38
	id resourceProgressDelegateForwarder;	// 60 = 0x3c
	id formDelegateForwarder;	// 64 = 0x40
	WebInspector *inspector;	// 68 = 0x44
	WebNodeHighlight *currentNodeHighlight;	// 72 = 0x48
	BOOL allowsRemoteInspection;	// 76 = 0x4c
	BOOL allowsUndo;	// 77 = 0x4d
	float zoomMultiplier;	// 80 = 0x50
	BOOL zoomsTextOnly;	// 84 = 0x54
	NSString *applicationNameForUserAgent;	// 88 = 0x58
	String userAgent;	// 92 = 0x5c
	BOOL userAgentOverridden;	// 96 = 0x60
	WebPreferences *preferences;	// 100 = 0x64
	BOOL useSiteSpecificSpoofing;	// 104 = 0x68
	NSURL *userStyleSheetLocation;	// 108 = 0x6c
	WAKWindow *hostWindow;	// 112 = 0x70
	int programmaticFocusCount;	// 116 = 0x74
	WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;	// 120 = 0x78
	WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;	// 212 = 0xd4
	WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;	// 308 = 0x134
	WebHistoryDelegateImplementationCache historyDelegateImplementations;	// 336 = 0x150
	void *observationInfo;	// 356 = 0x164
	BOOL closed;	// 360 = 0x168
	BOOL closing;	// 361 = 0x169
	BOOL shouldCloseWithWindow;	// 362 = 0x16a
	BOOL mainFrameDocumentReady;	// 363 = 0x16b
	BOOL drawsBackground;	// 364 = 0x16c
	BOOL tabKeyCyclesThroughElementsChanged;	// 365 = 0x16d
	BOOL becomingFirstResponder;	// 366 = 0x16e
	BOOL becomingFirstResponderFromOutside;	// 367 = 0x16f
	BOOL hoverFeedbackSuspended;	// 368 = 0x170
	BOOL usesPageCache;	// 369 = 0x171
	BOOL catchesDelegateExceptions;	// 370 = 0x172
	BOOL cssAnimationsSuspended;	// 371 = 0x173
	CGColorRef backgroundColor;	// 372 = 0x174
	NSString *mediaStyle;	// 376 = 0x178
	BOOL hasSpellCheckerDocumentTag;	// 380 = 0x17c
	int spellCheckerDocumentTag;	// 384 = 0x180
	BOOL smartInsertDeleteEnabled;	// 388 = 0x184
	BOOL selectTrailingWhitespaceEnabled;	// 389 = 0x185
	BOOL isStopping;	// 390 = 0x186
	id UIKitDelegate;	// 392 = 0x188
	id UIKitDelegateForwarder;	// 396 = 0x18c
	id WebMailDelegate;	// 400 = 0x190
	BOOL allowsMessaging;	// 404 = 0x194
	NSMutableSet *_caretChangeListeners;	// 408 = 0x198
	id<WebCaretChangeListener> _caretChangeListener;	// 412 = 0x19c
	CGSize fixedLayoutSize;	// 416 = 0x1a0
	BOOL mainViewIsScrollingOrZooming;	// 424 = 0x1a8
	int didDrawTiles;	// 428 = 0x1ac
	HashMap<long unsigned int,WTF::RetainPtr<objc_object*>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<WTF::RetainPtr<objc_object*> > > identifierMap;	// 432 = 0x1b0
	BOOL _keyboardUIModeAccessed;	// 452 = 0x1c4
	int _keyboardUIMode;	// 456 = 0x1c8
	BOOL shouldUpdateWhileOffscreen;	// 460 = 0x1cc
	BOOL usesDocumentViews;	// 461 = 0x1cd
	BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;	// 462 = 0x1ce
	BOOL needsOneShotDrawingSynchronization;	// 463 = 0x1cf
	BOOL postsAcceleratedCompositingNotifications;	// 464 = 0x1d0
	CFRunLoopObserverRef layerSyncRunLoopObserver;	// 468 = 0x1d4
	CGSize lastLayoutSize;	// 472 = 0x1d8
	BOOL ignoringMouseDraggedEvents;	// 480 = 0x1e0
	WebEvent *mouseDownEvent;	// 484 = 0x1e4
	BOOL handlingMouseDownEvent;	// 488 = 0x1e8
	WebEvent *keyDownEvent;	// 492 = 0x1ec
	NSTimer *autoscrollTimer;	// 496 = 0x1f0
	WebEvent *autoscrollTriggerEvent;	// 500 = 0x1f4
	WebVideoFullscreenController *fullscreenController;	// 504 = 0x1f8
	id<WebGeolocationProvider> _geolocationProvider;	// 508 = 0x1fc
	id<WebDeviceOrientationProvider> m_deviceOrientationProvider;	// 512 = 0x200
	RefPtr<WebCore::HistoryItem> _globalHistoryItem;	// 516 = 0x204
	BOOL interactiveFormValidationEnabled;	// 520 = 0x208
	int validationMessageTimerMagnification;	// 524 = 0x20c
	WebFixedPositionContent *_fixedPositionContent;	// 528 = 0x210
}
+ (void)initialize;	// 0x35373ac5
- (id)init;	// 0x35373b01
- (id).cxx_construct;	// 0x35373ac9
- (void).cxx_destruct;	// 0x353ed0fd
- (void)dealloc;	// 0x353ed1c9
- (void)finalize;	// 0x353ed19d
@end

