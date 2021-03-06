/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebTiledView.h"
#import "UIActionSheetDelegate.h"
#import "UIKit-Structs.h"
#import "UIAutoscrollContainer.h"
#import "UIKeyboardInput.h"
#import "UIModalViewDelegate.h"
#import "UILongPressGestureRecognizerDelegate.h"
#import "UITextSelectingContent.h"

@class UILongPressGestureRecognizer, UIWindow, UITapGestureRecognizer, UIView, UIActionSheet, UITextInteractionAssistant, UITextSelectionView, WebView, UIPanGestureRecognizer, UIColor, DOMNode, CALayer, UITextChecker, DOMHTMLElement, UITextPosition, NSDictionary, UITextRange, UIResponder, UIWebSelectionAssistant, UIAutoscroll, NSTimer, UITextInputTraits, WebViewReachabilityObserver, UIInformalDelegate, WebThreadSafeUndoManager;
@protocol UITextInputDelegate;

@interface UIWebDocumentView : UIWebTiledView <UITextSelectingContent, UIAutoscrollContainer, UIActionSheetDelegate, UIKeyboardInput, UIModalViewDelegate, UILongPressGestureRecognizerDelegate> {
	int _retainCount;	// 60 = 0x3c
	WKWindow *_wkWindow;	// 64 = 0x40
	WebView *_webView;	// 68 = 0x44
	WebViewReachabilityObserver *_reachabilityObserver;	// 72 = 0x48
	id m_parentTextView;	// 76 = 0x4c
	id _delegate;	// 80 = 0x50
	id _textSuggestionDelegate;	// 84 = 0x54
	id _editingDelegate;	// 88 = 0x58
	CGRect _doubleTapRect;	// 92 = 0x5c
	CGRect _mainDocumentDoubleTapRect;	// 108 = 0x6c
	CGPoint _scrollPoint;	// 124 = 0x7c
	CGPoint _doubleTapStartPosition;	// 132 = 0x84
	double _doubleTapStartTime;	// 140 = 0x8c
	CGSize _pendingSize;	// 148 = 0x94
	int _orientation;	// 156 = 0x9c
	DOMHTMLElement *_standaloneEditingElement;	// 160 = 0xa0
	CGPoint _mouseDownPoint;	// 164 = 0xa4
	double _mouseDownTime;	// 172 = 0xac
	UIAutoscroll *_autoscroll;	// 180 = 0xb4
	CFDictionaryRef _plugInViews;	// 184 = 0xb8
	int m_selectionGranularity;	// 188 = 0xbc
	CALayer *_contentLayersHostingLayer;	// 192 = 0xc0
	UITextInputTraits *_traits;	// 196 = 0xc4
	id<UITextInputDelegate> _inputDelegate;	// 200 = 0xc8
	UITapGestureRecognizer *_singleTapGestureRecognizer;	// 204 = 0xcc
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 208 = 0xd0
	UITapGestureRecognizer *_twoFingerDoubleTapGestureRecognizer;	// 212 = 0xd4
	UILongPressGestureRecognizer *_highlightLongPressGestureRecognizer;	// 216 = 0xd8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 220 = 0xdc
	UIPanGestureRecognizer *_twoFingerPanGestureRecognizer;	// 224 = 0xe0
	struct {
		NSTimer *timer;
		CGPoint location;
		BOOL isBlocked;
		BOOL isCancelled;
		BOOL isOnWebThread;
		BOOL isDisplayingHighlight;
		BOOL attemptedClick;
		CGPoint lastPanTranslation;
		DOMNode *element;
		BOOL defersCallbacksState;
		UIInformalDelegate *delegate;
		UIWindow *windowForReenablingRotation;
		int interactionSheetType;
		UIActionSheet *interactionSheet;
		BOOL allowsImageSheet;
		BOOL allowsDataDetectorsSheet;
		BOOL allowsLinkSheet;
	} _interaction;	// 228 = 0xe4
	struct {
		CGSize size;
		float initialScale;
		float minimumScale;
		float maximumScale;
		BOOL allowsUserScaling;
	} _viewportConfigurations[6];	// 284 = 0x11c
	CGSize _minimumSize;	// 428 = 0x1ac
	int _documentType;	// 436 = 0x1b4
	float _documentScale;	// 440 = 0x1b8
	CGRect _documentBounds;	// 444 = 0x1bc
	int _enabledGestures;	// 460 = 0x1cc
	unsigned _customConfigurations;	// 464 = 0x1d0
	unsigned _mouseDownCount;	// 468 = 0x1d4
	unsigned _dataDetectorTypes;	// 472 = 0x1d8
	unsigned _webCoreNeedsSetNeedsDisplay : 1;	// 476 = 0x1dc
	unsigned _webCoreNeedsDraw : 1;	// 476 = 0x1dc
	unsigned _ignoresFocusingMouse : 1;	// 476 = 0x1dc
	unsigned _ignoresKeyEvents : 1;	// 476 = 0x1dc
	unsigned _autoresizes : 1;	// 476 = 0x1dc
	unsigned _updatingSize : 1;	// 476 = 0x1dc
	unsigned _scalesToFit : 1;	// 476 = 0x1dc
	unsigned _updatesScrollView : 1;	// 476 = 0x1dc
	unsigned _hasCustomScale : 1;	// 477 = 0x1dd
	unsigned _userScrolled : 1;	// 477 = 0x1dd
	unsigned _pageNeedsReset : 1;	// 477 = 0x1dd
	unsigned _hasScrollPoint : 1;	// 477 = 0x1dd
	unsigned _setNeedsDisplayWasForced : 1;	// 477 = 0x1dd
	unsigned _gesturesDisabled : 1;	// 477 = 0x1dd
	unsigned _doubleTapRectIsReplaced : 1;	// 477 = 0x1dd
	unsigned _standaloneEditableView : 1;	// 477 = 0x1dd
	unsigned _widgetEditingView : 1;	// 478 = 0x1de
	unsigned _mouseDragged : 1;	// 478 = 0x1de
	unsigned _mouseReentrancyGuard : 1;	// 478 = 0x1de
	unsigned _isShowingFullScreenPlugIn : 1;	// 478 = 0x1de
	unsigned _isSettingRedrawFrame : 1;	// 478 = 0x1de
	unsigned _needsScrollNotifications : 1;	// 478 = 0x1de
	unsigned _loadsSynchronously : 1;	// 478 = 0x1de
	unsigned _mouseDown : 1;	// 478 = 0x1de
	unsigned _usePreTimberlineTransparencyBehavior : 1;	// 479 = 0x1df
	unsigned _geolocationDialogAllowed : 1;	// 479 = 0x1df
	unsigned _usingMinimalTilesDuringLoading : 1;	// 479 = 0x1df
	unsigned _sheetsCount : 2;	// 479 = 0x1df
	unsigned _didFirstVisuallyNonEmptyLayout : 1;	// 479 = 0x1df
	unsigned _loadInProgress : 1;	// 479 = 0x1df
	unsigned _uiwdvIsResigningFirstResponder : 1;	// 479 = 0x1df
	unsigned _classicViewportMode : 1;	// 480 = 0x1e0
	unsigned _sizeUpdatesSuspended : 1;	// 480 = 0x1e0
	unsigned _sizeUpdateOccurredWhileSuspended : 1;	// 480 = 0x1e0
	unsigned _shouldOnlyRecognizeGesturesOnActiveElements : 1;	// 480 = 0x1e0
	unsigned _shouldIgnoreCustomViewport : 1;	// 480 = 0x1e0
	unsigned _ignoresFocusEventFromFirstResponderChange : 1;	// 480 = 0x1e0
	unsigned _shoudCloseWebViewAtDealloc : 1;	// 480 = 0x1e0
	unsigned _hasDrawnTiles : 1;	// 480 = 0x1e0
	WebThreadSafeUndoManager *_undoManager;	// 484 = 0x1e4
	UIWebSelectionAssistant *_webSelectionAssistant;	// 488 = 0x1e8
	UITextInteractionAssistant *_textSelectionAssistant;	// 492 = 0x1ec
	UITextSelectionView *_textSelectionView;	// 496 = 0x1f0
	UITextChecker *_textChecker;	// 500 = 0x1f4
	UIEdgeInsets _caretInsets;	// 504 = 0x1f8
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// @dynamic
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *asText;	// G=0x307def59; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x307df075; S=0x307df0e9; 
@property(assign) BOOL becomesEditableWithGestures;	// G=0x30764405; S=0x30764409; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x306d27c5; 
@property(assign) UIEdgeInsets caretInsets;	// G=0x307def35; S=0x3062059d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3066ee05; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// @dynamic
@property(assign) unsigned dataDetectorTypes;	// G=0x3061fed9; S=0x30615285; converted property
@property(assign) id delegate;	// G=0x306c67a9; S=0x30616589; converted property
@property(assign) BOOL detectsPhoneNumbers;	// G=0x307641ed; S=0x30766c79; converted property
@property(readonly, assign) CGRect documentBounds;	// G=0x30616781; converted property
@property(assign, nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled;	// G=0x307662cd; S=0x30623759; 
@property(readonly, assign) CGRect doubleTapRect;	// G=0x307642e5; converted property
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x306bb819; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x306d672d; 
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign) int enabledGestures;	// G=0x30764279; S=0x30615879; converted property
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x307648f9; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x30667fcd; S=0x3066df49; 
@property(retain, nonatomic) UIColor *insertionPointColor;	// @dynamic
@property(assign, nonatomic) unsigned insertionPointWidth;	// @dynamic
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x306bb901; 
@property(assign) id interactionDelegate;	// G=0x3076bed5; S=0x30616599; converted property
@property(assign) BOOL isStandaloneEditableView;	// G=0x30764321; S=0x30624725; converted property
@property(assign) BOOL isWidgetEditingView;	// G=0x3076435d; S=0x30764341; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) BOOL loadsSynchronously;	// G=0x307641d9; S=0x3061fafd; converted property
@property(retain) id markedText;	// G=0x30681f61; S=0x306d2695; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x3066e6c9; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x30764425; S=0x30764429; 
@property(assign, nonatomic) BOOL plainText;
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x3066e781; S=0x30764949; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x3066a171; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x307def25; S=0x306c6695; 
@property(readonly, assign, nonatomic) int selectionState;	// G=0x307649c1; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3069e2dd; 
@property(assign, nonatomic) BOOL shouldIgnoreCustomViewport;	// G=0x3076423d; S=0x306c6199; 
@property(assign, nonatomic) BOOL shouldOnlyRecognizeGesturesOnActiveElements;	// G=0x307642d1; S=0x307642b5; 
@property(assign, nonatomic) BOOL sizeUpdatesSuspended;	// G=0x30764229; S=0x30766475; 
@property(retain) DOMHTMLElement *standaloneEditingElement;	// G=0x30764331; S=0x306248b9; converted property
@property(retain) id text;	// G=0x30765409; S=0x30765551; converted property
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// @dynamic
@property(assign, nonatomic) int textSelectionBehavior;	// @dynamic
@property(assign, nonatomic) id textSuggestionDelegate;	// @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// @dynamic
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x3066e901; 
@property(readonly, retain) WebThreadSafeUndoManager *undoManager;	// G=0x3066b17d; converted property
@property(assign) BOOL updatesScrollView;	// G=0x307642a5; S=0x30764289; converted property
@property(readonly, retain) UIWebSelectionAssistant *webSelectionAssistant;	// G=0x30764395; converted property
@property(readonly, retain) WebView *webView;	// G=0x306146a9; converted property
+ (id)_createDefaultHighlightView;	// 0x3069d2a5
+ (id)_highlightView;	// 0x3069d269
+ (double)getTimestamp;	// 0x3069f1ed
+ (Class)layerClass;	// 0x3061357d
+ (id)standardTextViewPreferences;	// 0x3061f899
- (id)initSimpleHTMLDocumentWithStyle:(id)style editable:(BOOL)editable withFrame:(CGRect)frame withPreferences:(id)preferences;	// 0x3061f979
- (id)initWithFrame:(CGRect)frame;	// 0x30612e8d
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x3061300d
- (void)_WAKViewSizeDidChange:(id)_WAKViewSize;	// 0x3068c691
- (id)_beginPrintModeForHTMLWithSize:(CGSize)size startOffset:(float)offset minimumLayoutWidth:(float)width maximumLayoutWidth:(float)width4 tileClippedContent:(BOOL)content;	// 0x3076e639
- (id)_beginPrintModeForPDFWithSize:(CGSize)size startOffset:(float)offset minimumLayoutWidth:(float)width maximumLayoutWidth:(float)width4;	// 0x3076e261
- (void)_cleanUpPDF;	// 0x30624319
- (void)_clearAllConsoleMessages;	// 0x30624371
- (void)_clearDoubleTapRect;	// 0x3062431d
- (void)_copyElement:(id)element;	// 0x3076c301
- (void)_copyImage:(id)image;	// 0x3076d445
- (BOOL)_dataDetectionIsActivated;	// 0x30615371
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x30616a89
- (void)_didScroll;	// 0x3069a385
- (void)_disableWebView;	// 0x3076cc81
- (void)_disableWindowRotation;	// 0x3076d635
- (id)_documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x3076786d
- (float)_documentScale;	// 0x3069974d
- (id)_doubleTapGestureRecognizer;	// 0x3076ba55
- (void)_doubleTapRecognized:(id)recognized;	// 0x3076d13d
- (float)_doubleTapScaleForSize:(float)size isWidth:(BOOL)width isPDF:(BOOL)pdf;	// 0x307661c1
- (void)_drawPDFPagesForPage:(unsigned)page withPaginationInfo:(id)paginationInfo;	// 0x3076e901
- (BOOL)_editable;	// 0x306c621d
- (void)_enableWebView;	// 0x3076cc01
- (void)_enableWindowRotation;	// 0x3076d5ad
- (id)_focusedOrMainFrame;	// 0x3061ff51
- (id)_groupName;	// 0x307665a9
- (void)_handleDoubleTapAtLocation:(CGPoint)location;	// 0x30768449
- (void)_handleDoubleTapAtPoint:(CGPoint)point inWebHTMLView:(id)webHTMLView outRenderRect:(CGRect *)rect;	// 0x307669d5
- (void)_handleDoubleTapAtPoint:(CGPoint)point inWebPDFView:(id)webPDFView outRenderRect:(CGRect *)rect;	// 0x30768a65
- (void)_handleTwoFingerDoubleTapAtLocation:(CGPoint)location;	// 0x307660c9
- (void)_highlightLongPressRecognized:(id)recognized;	// 0x3076d061
- (BOOL)_isSubviewOfPlugInView:(id)view;	// 0x3069b25d
- (CGRect)_lastRectForRange:(id)range;	// 0x30766829
- (void)_longPressRecognized:(id)recognized;	// 0x3076c979
- (NSRange)_markedTextNSRange;	// 0x307668bd
- (void)_notifyContentHostingLayersOfScaleChange;	// 0x306138ad
- (void)_notifyPlugInViewsOfDidZoom;	// 0x3076765d
- (void)_notifyPlugInViewsOfScaleChange;	// 0x3061603d
- (void)_notifyPlugInViewsOfWillBeginZooming;	// 0x3076771d
- (id)_parentTextView;	// 0x3066df59
- (id)_positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset withAffinityDownstream:(BOOL)affinityDownstream;	// 0x307646e1
- (Class)_printFormatterClass;	// 0x3086978d
- (void)_reachabilityManagerNotifiedIsReachable:(BOOL)reachable;	// 0x30617da1
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x30764319
- (void)_resetForNewPage;	// 0x3062493d
- (void)_resetFormDataForFrame:(id)frame;	// 0x30624239
- (void)_resetInteractionWithLocation:(CGPoint)location;	// 0x3069c5e9
- (void)_reshapePlugInViews;	// 0x307662f1
- (id)_responderForBecomeFirstResponder;	// 0x306c6a61
- (void)_restoreScrollPointForce:(BOOL)force;	// 0x306984e1
- (void)_restoreViewportSettingsWithSize:(CGSize)size;	// 0x30614221
- (void)_saveImages:(id)images;	// 0x3076d27d
- (void)_saveStateToHistoryItem:(id)historyItem;	// 0x30699a2d
- (id)_scriptingInfoForForm:(id)form;	// 0x30767f1d
- (id)_scriptingInfoForLink:(id)link;	// 0x30767d29
- (void)_scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x3076458d
- (void)_sendMouseMoveAndAttemptClick:(id)click;	// 0x3069f0ed
- (void)_setDocumentScale:(float)scale;	// 0x30615e19
- (void)_setDocumentType:(int)type;	// 0x306153ad
- (void)_setDocumentType:(int)type overrideCustomConfigurations:(BOOL)configurations;	// 0x306153c5
- (void)_setEditable:(BOOL)editable;	// 0x30765e95
- (void)_setLtoRTextDirection:(id)direction;	// 0x30764be1
- (void)_setPDFView:(id)view;	// 0x30764315
- (void)_setParentTextView:(id)view;	// 0x3061fd01
- (void)_setRtoLTextDirection:(id)direction;	// 0x30764bf5
- (void)_showDataDetectorsSheet;	// 0x3076ba65
- (void)_showImageSheet;	// 0x3076d999
- (void)_showLinkSheet;	// 0x3076d6d1
- (void)_singleTapRecognized:(id)recognized;	// 0x3069bf6d
- (id)_supportedPasteboardTypesForCurrentSelection;	// 0x306d8119
- (id)_textSelectingContainer;	// 0x3076440d
- (void)_twoFingerDoubleTapRecognized:(id)recognized;	// 0x3076d105
- (void)_twoFingerPanRecognized:(id)recognized;	// 0x3076cfd5
- (void)_undoManagerDidRedo:(id)_undoManager;	// 0x30765eb9
- (void)_undoManagerDidUndo:(id)_undoManager;	// 0x30765f25
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x306da7b9
- (void)_updateScrollViewBoundaryZoomScales;	// 0x30615d21
- (void)_updateSize;	// 0x3068c235
- (void)actionDidFinish;	// 0x3076bc15
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3076bfed
- (void)actionWillStart;	// 0x3076bc29
- (void)addInputString:(id)string;	// 0x30765e61
- (id)approximateNodeAtViewportLocation:(CGPoint *)viewportLocation;	// 0x3069d1c9
// declared property getter: - (id)asText;	// 0x307def59
- (void)assistFormNode:(id)node;	// 0x307677bd
- (void)attemptClick:(id)click;	// 0x3069dd0d
- (id)automaticallySelectedOverlay;	// 0x306cf56d
- (CGRect)autoscrollContentFrame;	// 0x307643ed
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x307df075
- (CGRect)autoscrollDragFrame;	// 0x307643d5
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x30764439
- (BOOL)becomeFirstResponder;	// 0x3069dfd1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x30764405
- (id)beginPrintModeWithSize:(CGSize)size startOffset:(float)offset minimumLayoutWidth:(float)width maximumLayoutWidth:(float)width4 tileClippedContent:(BOOL)content;	// 0x3076de65
- (id)beginPrintModeWithWidth:(float)width height:(float)height startOffset:(float)offset shrinkToFit:(BOOL)fit;	// 0x3076dfa5
- (id)beginPrintModeWithWidth:(float)width height:(float)height startOffset:(float)offset shrinkToFit:(BOOL)fit tileClippedContent:(BOOL)content;	// 0x3076e4dd
- (void)beginSelectionChange;	// 0x30669e21
// declared property getter: - (id)beginningOfDocument;	// 0x306d27c5
- (BOOL)canBecomeFirstResponder;	// 0x3069e0d9
- (BOOL)canOpenNewPageForURL:(id)url;	// 0x3076bb7d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x306d7bb9
- (BOOL)canResignFirstResponder;	// 0x3069f631
- (void)cancelAutoscroll;	// 0x307df019
- (void)cancelInteraction;	// 0x3069c65d
- (void)cancelInteractionWithImmediateDisplay:(BOOL)immediateDisplay;	// 0x3069a595
- (BOOL)cancelMouseTracking;	// 0x307667e9
- (BOOL)cancelTouchTracking;	// 0x307667a9
// converted property getter: - (UIEdgeInsets)caretInsets;	// 0x307def35
- (CGRect)caretRect;	// 0x3066a26d
- (CGRect)caretRectForPosition:(id)position;	// 0x306d02b9
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x3066abdd
- (unsigned short)characterAfterCaretSelection;	// 0x30765b69
- (unsigned short)characterBeforeCaretSelection;	// 0x306d87b1
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x30765b95
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x3076442d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x30764435
- (id)checkSpellingOfString:(id)string;	// 0x306d4b35
- (void)clearInteractionTimer;	// 0x3069a655
- (void)clearRangedSelectionInitialExtent;	// 0x307df24d
- (void)clearSelection;	// 0x307e01a9
- (BOOL)clearWKFirstResponder;	// 0x3069f635
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x307e011d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x3076455d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x3076449d
- (void)collapseSelection;	// 0x307e00d1
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x30764739
- (void)completeInteraction;	// 0x3069f4b5
- (void)confirmMarkedText:(id)text;	// 0x30765bc5
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x3076ec01
- (BOOL)containsOnlySelectableElements;	// 0x30764a25
// declared property getter: - (id)content;	// 0x3066ee05
- (CGRect)contentFrameForView:(id)view;	// 0x307df03d
- (void)continueInteractionWithLocation:(CGPoint)location;	// 0x3076c749
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x30764371
- (CGPoint)convertPoint:(CGPoint)point fromFrame:(id)frame;	// 0x30766be9
- (CGPoint)convertPoint:(CGPoint)point toFrame:(id)frame;	// 0x30766c31
- (CGPoint)convertPointToSelectedFrameCoordinates:(CGPoint)selectedFrameCoordinates;	// 0x306cbd31
- (CGRect)convertRect:(CGRect)rect fromFrame:(id)frame;	// 0x30766b49
- (CGRect)convertRect:(CGRect)rect toFrame:(id)frame;	// 0x30766b99
- (CGRect)convertRectFromSelectedFrameCoordinates:(CGRect)selectedFrameCoordinates;	// 0x3066a2ed
- (void)copy:(id)copy;	// 0x30764f19
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x3076639d
- (void)cut:(id)cut;	// 0x30765191
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x3061fed9
- (void)dealloc;	// 0x30766e11
- (void)deferInteraction;	// 0x3076c4b5
- (void)deferredBecomeFirstResponder;	// 0x306c767d
// converted property getter: - (id)delegate;	// 0x306c67a9
- (void)deleteBackward;	// 0x306e18c5
- (void)deleteFromInput;	// 0x30765e35
- (void)detachInteractionAssistant;	// 0x30616999
- (void)detachSelectionView;	// 0x30616979
// converted property getter: - (BOOL)detectsPhoneNumbers;	// 0x307641ed
- (void)didEndScroll;	// 0x30764ae9
- (void)didEndZoom;	// 0x30764a5d
- (BOOL)didFirstVisuallyNonEmptyLayout;	// 0x307641b5
- (void)didMoveToSuperview;	// 0x30616b21
- (void)didRemovePlugInView:(id)view;	// 0x306998b1
- (void)didZoom;	// 0x30764a75
// converted property getter: - (CGRect)documentBounds;	// 0x30616781
// converted property getter: - (CGRect)doubleTapRect;	// 0x307642e5
- (BOOL)doubleTapRectIsReplaced;	// 0x30764301
- (void)drawPage:(unsigned)page withPaginationInfo:(id)paginationInfo;	// 0x3076e065
- (unsigned)effectiveDataDetectorTypes;	// 0x306c6241
- (void)enableReachability;	// 0x30614529
// converted property getter: - (int)enabledGestures;	// 0x30764279
- (void)enclosingScrollerDidScroll;	// 0x30766445
// declared property getter: - (id)endOfDocument;	// 0x307648f9
- (void)endPrintMode;	// 0x3076ddc9
- (void)endSelectionChange;	// 0x3066a64d
- (void)ensureSelection;	// 0x306cb8b1
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x30765aad
- (void)extendCurrentSelection:(int)selection;	// 0x30765871
- (CGRect)firstRectForRange:(id)range;	// 0x306cf315
- (id)fontForCaretSelection;	// 0x306d0405
- (void)forceLayout;	// 0x30767335
- (id)formElement;	// 0x306cbd95
- (void)forwardInvocation:(id)invocation;	// 0x30668749
- (BOOL)gestureRecognizer:(id)recognizer canBePreventedByGestureRecognizer:(id)recognizer2;	// 0x3076c5d5
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x3076c655
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3069b1fd
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3076c519
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3069babd
- (void)handleKeyWebEvent:(id)event;	// 0x3076533d
- (BOOL)hasContent;	// 0x30667f7d
- (BOOL)hasDrawnTiles;	// 0x30617b25
- (BOOL)hasEditableSelection;	// 0x306d7fb5
- (BOOL)hasMarkedText;	// 0x3061ff09
- (BOOL)hasPlugInSubviews;	// 0x3076763d
- (BOOL)hasSelection;	// 0x306b2125
- (BOOL)hasSelection;	// 0x30765845
- (BOOL)hasSelectionInPlainTextRegion;	// 0x307657cd
- (BOOL)hasSimpleTextOnlyStructure;	// 0x307649ed
- (BOOL)hasText;	// 0x306702c9
- (void)hideAlert;	// 0x3076bc3d
- (void)hideBrowserSheet;	// 0x3076bc91
- (void)hideTapHighlight;	// 0x3069f559
- (void)highlightApproximateNodeAndDisplayInfoSheet;	// 0x3076c7a1
- (void)highlightApproximateNodeInverted:(BOOL)inverted;	// 0x3069c675
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3069b0bd
- (void)image:(id)image didFinishSavingWithError:(id)error contextInfo:(id)info;	// 0x3076d3e1
- (id)implementationWebView;	// 0x3076438d
- (float)initialScale;	// 0x306159e9
// declared property getter: - (id)inputDelegate;	// 0x30667fcd
- (void)insertText:(id)text;	// 0x30680c51
- (void)installGestureRecognizers;	// 0x30613c65
- (float)integralScaleForScale:(float)scale;	// 0x30615fc1
// declared property getter: - (id)interactionAssistant;	// 0x306bb901
// converted property getter: - (id)interactionDelegate;	// 0x3076bed5
- (BOOL)isCaretInEmptyParagraph;	// 0x306d8749
- (BOOL)isClassicViewportMode;	// 0x30764251
// declared property getter: - (BOOL)isDoubleTapEnabled;	// 0x307662cd
// declared property getter: - (BOOL)isEditable;	// 0x306bb819
// declared property getter: - (BOOL)isEditing;	// 0x306d672d
- (BOOL)isInInteraction;	// 0x3076ba05
- (BOOL)isInPrintMode;	// 0x3076dfd9
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x30764681
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x30764601
- (BOOL)isShowingFullScreenPlugInUI;	// 0x306a81c1
// converted property getter: - (BOOL)isStandaloneEditableView;	// 0x30764321
// converted property getter: - (BOOL)isWidgetEditingView;	// 0x3076435d
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x306cc2e9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x306d20f9
- (BOOL)keyboardInputChanged:(id)changed;	// 0x306cc639
- (void)keyboardInputChangedSelection:(id)selection;	// 0x306c6745
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30765371
- (void)layoutSubviews;	// 0x306178dd
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x307671f9
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x30623cfd
- (void)loadRequest:(id)request;	// 0x30696bc9
// converted property getter: - (BOOL)loadsSynchronously;	// 0x307641d9
- (BOOL)makeWKFirstResponder;	// 0x306cb6e1
// converted property getter: - (id)markedText;	// 0x30681f61
// declared property getter: - (id)markedTextRange;	// 0x3066e6c9
// declared property getter: - (id)markedTextStyle;	// 0x30764425
- (float)maximumScale;	// 0x30764215
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30617a8d
- (float)minimumScale;	// 0x30615905
- (float)minimumScaleForMinimumSize:(CGSize)minimumSize;	// 0x306986b5
- (BOOL)mouseEventsChangeSelection;	// 0x3076eb21
- (void)moveBackward:(unsigned)backward;	// 0x30765711
- (void)moveForward:(unsigned)forward;	// 0x307656ad
- (BOOL)needsScrollNotifications;	// 0x30764265
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x3076633d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x306d2815
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x307dfd35
- (void)paste:(id)paste;	// 0x30764ce9
- (void)performClick:(id)click;	// 0x3069f215
- (void)performInteractionSelector:(SEL)selector afterDelay:(double)delay;	// 0x3069f4fd
- (BOOL)playsNicelyWithGestures;	// 0x306bb8fd
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x307646b5
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x3066ed21
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x30764635
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x30764431
- (void)promptForReplace:(id)replace;	// 0x30764c09
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x307658e5
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x30765915
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x3066e905
- (id)rangeOfEnclosingWord:(id)enclosingWord;	// 0x30764831
- (CGRect)rectContainingCaretSelection;	// 0x30766901
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x3076695d
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x30766cc1
- (void)redrawScaledDocument;	// 0x307673d5
- (void)release;	// 0x306179c1
- (void)replace:(id)replace;	// 0x30764c39
- (void)replaceCurrentWordWithText:(id)text;	// 0x30765cc9
- (void)replaceRange:(id)range withText:(id)text;	// 0x30764781
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x30765d75
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x306d25b9
- (void)replaceSelectionWithWebArchive:(id)webArchive selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x307659ed
- (BOOL)requiresKeyEvents;	// 0x306721f1
- (void)resetInteraction;	// 0x3069a629
- (void)resetTilingAfterLoadComplete;	// 0x30624699
- (BOOL)resignFirstResponder;	// 0x30624741
- (id)retain;	// 0x30616809
- (unsigned)retainCount;	// 0x307641c9
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x3066a85d
- (void)saveStateToCurrentHistoryItem;	// 0x306999e5
- (id)scriptingInfoWithChildren;	// 0x30695691
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x307def55
- (void)select:(id)select;	// 0x30764ca9
- (void)selectAll;	// 0x307dff51
- (void)selectAll;	// 0x30765661
- (void)selectAll:(id)all;	// 0x30764c69
- (void)selectWord;	// 0x307df339
- (id)selectedDOMRange;	// 0x3066a145
- (id)selectedDOMRange;	// 0x307659c1
// declared property getter: - (id)selectedTextRange;	// 0x3066e781
// declared property getter: - (int)selectionAffinity;	// 0x3066a171
- (BOOL)selectionAtDocumentStart;	// 0x307657a1
- (BOOL)selectionAtWordStart;	// 0x30765775
- (int)selectionBaseWritingDirection;	// 0x306850b5
- (void)selectionChanged;	// 0x307df2fd
- (void)selectionChanged:(id)changed;	// 0x30669fb9
- (CGRect)selectionClipRect;	// 0x307677d1
// declared property getter: - (int)selectionGranularity;	// 0x307def25
- (BOOL)selectionIsCaretInDisplayBlockElementAtOffset:(int)offset;	// 0x307dfefd
- (NSRange)selectionRange;	// 0x306d20c5
- (id)selectionRects;	// 0x307dfdd9
- (id)selectionRectsForRange:(id)range;	// 0x306cf39d
// declared property getter: - (int)selectionState;	// 0x307649c1
- (int)selectionState;	// 0x306d7fe1
// declared property getter: - (id)selectionView;	// 0x3069e2dd
- (void)sendOrientationEventForOrientation:(int)orientation;	// 0x3061679d
- (void)sendScrollWheelEvents;	// 0x3076cdb5
- (void)setAllowsDataDetectorsSheet:(BOOL)sheet;	// 0x3076ba2d
- (void)setAllowsImageSheet:(BOOL)sheet;	// 0x3061662d
- (void)setAllowsLinkSheet:(BOOL)sheet;	// 0x3076ba41
- (void)setAllowsUserScaling:(BOOL)scaling forDocumentTypes:(int)documentTypes;	// 0x30614425
- (void)setAutoresizes:(BOOL)autoresizes;	// 0x30615391
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x307df0e9
- (void)setBaseWritingDirection:(int)direction;	// 0x306cb859
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x3076443d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x30764409
- (void)setBottomBufferHeight:(float)height;	// 0x30671045
- (void)setCaretChangeListener:(id)listener;	// 0x307653dd
// converted property setter: - (void)setCaretInsets:(UIEdgeInsets)insets;	// 0x3062059d
- (void)setContinuousSpellCheckingEnabled:(BOOL)enabled;	// 0x3066e639
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x30615285
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30616589
// converted property setter: - (void)setDetectsPhoneNumbers:(BOOL)numbers;	// 0x30766c79
// declared property setter: - (void)setDoubleTapEnabled:(BOOL)enabled;	// 0x30623759
- (void)setDrawsBackground:(BOOL)background;	// 0x3061fd55
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x30615879
- (void)setFrame:(CGRect)frame;	// 0x3061368d
- (void)setIgnoresFocusingMouse:(BOOL)mouse;	// 0x3061fa65
- (void)setIgnoresKeyEvents:(BOOL)events;	// 0x306c617d
- (void)setInitialScale:(float)scale forDocumentTypes:(int)documentTypes;	// 0x306143a1
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x3066df49
- (void)setInteractionAssistantGestureRecognizers;	// 0x30765f91
// converted property setter: - (void)setInteractionDelegate:(id)delegate;	// 0x30616599
// converted property setter: - (void)setIsStandaloneEditableView:(BOOL)view;	// 0x30624725
// converted property setter: - (void)setIsWidgetEditingView:(BOOL)view;	// 0x30764341
// converted property setter: - (void)setLoadsSynchronously:(BOOL)synchronously;	// 0x3061fafd
// converted property setter: - (void)setMarkedText:(id)text;	// 0x306d2695
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30765c3d
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x30764429
- (void)setMaximumScale:(float)scale forDocumentTypes:(int)documentTypes;	// 0x306143f9
- (void)setMinimumScale:(float)scale forDocumentTypes:(int)documentTypes;	// 0x306143cd
- (void)setMinimumSize:(CGSize)size;	// 0x30614161
- (void)setNeedsDisplay;	// 0x30620449
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x30620489
- (void)setOpaque:(BOOL)opaque;	// 0x3061fd11
- (void)setPaused:(BOOL)paused;	// 0x30765325
- (void)setPaused:(BOOL)paused withEvents:(BOOL)events;	// 0x306a81d5
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x307df2d1
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x307df279
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x307df2a5
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x307dfca9
- (void)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x307dfc1d
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x307df1f5
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x307df221
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x307dfb11
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity;	// 0x307df17d
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x30765945
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x30764949
- (void)setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x30764961
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x306c6695
- (void)setSelectionToEnd;	// 0x307dffe9
- (void)setSelectionToStart;	// 0x307dff9d
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x307dfb81
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x307df385
// declared property setter: - (void)setShouldIgnoreCustomViewport:(BOOL)ignoreCustomViewport;	// 0x306c6199
// declared property setter: - (void)setShouldOnlyRecognizeGesturesOnActiveElements:(BOOL)onlyRecognizeGesturesOnActiveElements;	// 0x307642b5
// declared property setter: - (void)setSizeUpdatesSuspended:(BOOL)suspended;	// 0x30766475
- (void)setSmoothsFonts:(BOOL)fonts;	// 0x306165cd
// converted property setter: - (void)setStandaloneEditingElement:(id)element;	// 0x306248b9
// converted property setter: - (void)setText:(id)text;	// 0x30765551
- (void)setTilingArea:(int)area;	// 0x3062423d
// converted property setter: - (void)setUpdatesScrollView:(BOOL)view;	// 0x30764289
- (void)setUsePreTimberlineTransparencyBehavior;	// 0x30764201
- (void)setUserStyleSheet:(id)sheet;	// 0x307664dd
- (void)setUsesUIScrollView;	// 0x30614525
- (void)setViewportSize:(CGSize)size forDocumentTypes:(int)documentTypes;	// 0x30614451
- (BOOL)shouldEnableAutoShift;	// 0x3066ef1d
// declared property getter: - (BOOL)shouldIgnoreCustomViewport;	// 0x3076423d
// declared property getter: - (BOOL)shouldOnlyRecognizeGesturesOnActiveElements;	// 0x307642d1
- (void)showAlert:(id)alert;	// 0x3076bd19
- (void)showBrowserSheet:(id)sheet;	// 0x3076bce9
- (void)showBrowserSheet:(id)sheet atPoint:(CGPoint)point;	// 0x3076bcb9
- (void)showBrowserSheet:(id)sheet shouldShowFromPoint:(BOOL)point point:(CGPoint)point3;	// 0x3076bd9d
- (void)showBrowserSheet:(id)sheet shouldShowFromPoint:(BOOL)point point:(CGPoint)point3 arrowDirections:(unsigned)directions;	// 0x3076d175
// declared property getter: - (BOOL)sizeUpdatesSuspended;	// 0x30764229
- (void)smartExtendRangedSelection:(int)selection;	// 0x307df14d
// converted property getter: - (id)standaloneEditingElement;	// 0x30764331
- (BOOL)startActionSheet;	// 0x3076cb21
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x307df41d
- (void)startInteractionWithLocation:(CGPoint)location;	// 0x3076c771
- (void)stopLoading:(id)loading;	// 0x306c61b5
- (id)superviewForSheet;	// 0x3076bdc9
- (BOOL)supportsTwoFingerScrollingAtTouchLocation:(CGPoint)touchLocation andLocation:(CGPoint)location;	// 0x3076bef9
- (void)takeTraitsFrom:(id)from;	// 0x30765249
- (void)tapInteractionWithLocation:(CGPoint)location;	// 0x3076c705
// converted property getter: - (id)text;	// 0x30765409
- (id)textColorForCaretSelection;	// 0x306d4f09
- (id)textFormElement;	// 0x3076431d
- (id)textInDOMRange:(id)domrange;	// 0x306cc2b9
- (id)textInRange:(id)range;	// 0x306c6cb5
- (id)textInputTraits;	// 0x306140a1
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x306c6c45
- (void)toggleBaseWritingDirection;	// 0x307e0085
// declared property getter: - (id)tokenizer;	// 0x3066e901
// converted property getter: - (id)undoManager;	// 0x3066b17d
- (id)undoManagerForWebView:(id)webView;	// 0x3066b19d
- (void)unmarkText;	// 0x3068d6c1
- (BOOL)updateKeyboardStateOnResponderChanges;	// 0x3076605d
- (void)updateSelection;	// 0x30764391
// converted property getter: - (BOOL)updatesScrollView;	// 0x307642a5
- (void)useSelectionAssistantWithMode:(int)mode;	// 0x306146b9
- (void)validateInteractionWithLocation:(CGPoint)location;	// 0x3076c6b5
- (void)viewportConfigurationsDidChange:(unsigned)viewportConfigurations;	// 0x30615515
- (float)viewportHeight;	// 0x306160dd
- (float)viewportWidth;	// 0x30615ae1
- (CGRect)visibleBounds;	// 0x306d6629
- (CGRect)visibleContentFrame;	// 0x307643bd
- (CGRect)visibleFrame;	// 0x307643a5
- (CGRect)visibleRectForSelecting;	// 0x3076eb35
// converted property getter: - (id)webSelectionAssistant;	// 0x30764395
// converted property getter: - (id)webView;	// 0x306146a9
- (void)webView:(id)view attachRootLayer:(id)layer;	// 0x30698f2d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x30623e19
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x307663dd
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30624479
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x306248f1
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x30765271
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x3076c4f1
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x30624375
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x30697dc1
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x3069abed
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x306988c9
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x306a7389
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x3069a12d
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x3066a675
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x30698e35
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x307652dd
- (void)webViewDidDrawTiles:(id)webView;	// 0x30617ad1
- (void)webViewDidLayout:(id)webView;	// 0x30616421
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x3076ba29
- (CGRect)webViewFrameForUIFrame:(CGRect)uiframe;	// 0x306133cd
- (id)webVisiblePositionForPoint:(CGPoint)point;	// 0x306cbcb1
- (BOOL)willInteractWithLocation:(CGPoint)location;	// 0x3076cd11
- (void)willMoveToSuperview:(id)superview;	// 0x30616951
- (void)willStartScroll;	// 0x30764b81
- (void)willStartZoom;	// 0x30764ac1
- (id)wordAtPoint:(CGPoint)point;	// 0x307e0035
- (id)wordContainingCaretSelection;	// 0x30765af9
- (id)wordInRange:(id)range;	// 0x306c6cf9
- (int)wordOffsetInRange:(id)range;	// 0x30765a7d
- (id)wordRangeContainingCaretSelection;	// 0x30765b3d
- (void)zoomToScale:(float)scale;	// 0x30764445
@end

