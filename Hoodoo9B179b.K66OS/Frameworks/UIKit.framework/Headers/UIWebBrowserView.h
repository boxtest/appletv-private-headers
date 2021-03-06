/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormAccessoryDelegate.h"
#import "UIBrowserDocumentController.h"
#import "UIWebDocumentView.h"
#import "UIKit-Structs.h"

@class UIWebPDFView, DOMNode, NSMutableArray, UIWebFormAccessory, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, NSArray, NSTimer, UIWebRotatingSheet;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory *_accessory;	// 572 = 0x23c
	NSObject<UIFormPeripheral> *_input;	// 576 = 0x240
	DOMNode *_currentAssistedNode;	// 580 = 0x244
	CGRect _inputViewBounds;	// 584 = 0x248
	CGRect _addressViewBounds;	// 600 = 0x258
	float _lastAdjustmentForScroller;	// 616 = 0x268
	unsigned _accessoryEnabled : 1;	// 620 = 0x26c
	unsigned _forceInputView : 1;	// 620 = 0x26c
	unsigned _formIsAutoFilling : 1;	// 620 = 0x26c
	unsigned _inputViewObeysDOMFocus : 1;	// 620 = 0x26c
	unsigned _hasEditedTextField : 1;	// 620 = 0x26c
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 624 = 0x270
	UIWebFormDelegate *_formDelegate;	// 628 = 0x274
	UIResponder *_editingDelegateForEverythingExceptForms;	// 632 = 0x278
	unsigned _dispatchedTouchEvents;	// 636 = 0x27c
	NSMutableArray *_deferredTouchEvents;	// 640 = 0x280
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 644 = 0x284
	struct {
		UIWebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 676 = 0x2a4
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x331ed41d; S=0x3306442d; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x331ed43d; S=0x33064451; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x331ed44d; S=0x330612ad; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x331ed42d; S=0x33063b11; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x331ed45d; S=0x331ed471; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x331ea929; S=0x32f650f5; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x331ed505; @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// G=0x331ed4c5; S=0x331ed4e9; @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x331ed48d; S=0x331ed4a5; @synthesize=_inputViewObeysDOMFocus
@property(readonly, assign, nonatomic) BOOL isDispatchingTouchEvents;	// G=0x331eb251; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x331ea9b9; S=0x331ea96d; 
+ (id)_PDFPageNumberLabel:(BOOL)label;	// 0x331ece55
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x331e9e0d
+ (BOOL)isAutoFillAllowed;	// 0x331e9e39
+ (float)preferredScrollDecelerationFactor;	// 0x32f60b5d
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x32f62e0d
- (id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;	// 0x331ed309
// declared property getter: - (id)_accessory;	// 0x331ed41d
- (CGRect)_activeRectForRectToCenter:(CGRect)center;	// 0x331eb2a9
- (void)_autoFillFrame:(id)frame;	// 0x32f64329
- (id)_buildVersion;	// 0x32f647dd
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x331eb5f1
- (void)_clearAllConsoleMessages;	// 0x33007ba1
- (void)_clearSelectionAndUI;	// 0x331ed1e9
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x3300d67d
// declared property getter: - (id)_currentAssistedNode;	// 0x331ed43d
- (CGSize)_defaultScrollViewContentSize;	// 0x331ec56d
- (void)_deferWebEvent:(id)event;	// 0x331eb0bd
- (void)_dispatchWebEvent:(id)event;	// 0x331eaff1
- (void)_displayFormNodeInputView;	// 0x331ea5d5
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;	// 0x33004e75
- (void)_dumpWebArchiveAtPath:(id)path;	// 0x331ed10d
- (id)_editingDelegate;	// 0x331ea2a5
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x331ed44d
- (void)_endDeferringEvents;	// 0x331eb085
- (unsigned)_firstVisiblePDFPageNumber;	// 0x331eceb9
- (void)_handleDeferredEvents;	// 0x331eb149
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x331e9ff1
// declared property getter: - (id)_input;	// 0x331ed42d
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x33012db1
- (id)_keyboardResponder;	// 0x331e9f91
- (void)_keyboardWillChangeFrame:(id)_keyboard;	// 0x330128f9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x33012ee9
- (void)_keyboardWillShow:(id)_keyboard;	// 0x3301293d
- (CGPoint)_originForPDFPageLabelInSuperview:(id)superview;	// 0x331eced9
- (void)_promptForReplace:(id)replace;	// 0x331ea365
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x33004d69
- (BOOL)_requiresKeyboardResetOnReload;	// 0x33063a99
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x33063c0d
- (void)_resetFormDataForFrame:(id)frame;	// 0x33006f61
- (void)_rotateEnclosingScrollView:(id)view toFrame:(CGRect)frame withVisibleHeight:(float)visibleHeight rotationDelegate:(id)delegate;	// 0x331ec625
- (void)_scrollCaretToVisible:(id)visible;	// 0x331eab31
- (void)_setAddressViewFrame:(CGRect)frame;	// 0x33004c25
- (void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;	// 0x32f64761
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)automaticKeyboardInfo adjustScrollView:(BOOL)view;	// 0x33012de5
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x331ed229
- (void)_setUIWebViewUserAgent;	// 0x3306199d
- (BOOL)_shouldDeferEvents;	// 0x331eafd9
- (void)_startAssistingKeyboard;	// 0x331ea389
- (void)_startAssistingNode:(id)node;	// 0x331ea3b1
- (void)_startDeferringEvents;	// 0x331eb04d
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x331ed261
- (void)_stopAssistingFormNode;	// 0x331ea501
- (void)_stopAssistingKeyboard;	// 0x331ea39d
- (void)_stopAssistingNode:(id)node;	// 0x331ea3d1
- (void)_updateAccessory;	// 0x331ea641
- (void)_updateFixedPositionContent;	// 0x3300b691
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;	// 0x330124ed
- (void)_updateFixedPositioningObjectsLayoutSoon;	// 0x331ea3e5
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x331ecf75
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x331ea3f5
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x3300dd9d
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x331eb94d
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x331ebcad
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x331ebd29
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x331ec515
- (void)acceptedAutoFillWord:(id)word;	// 0x331eac9d
- (void)accessoryAutoFill;	// 0x331eaa79
- (void)accessoryClear;	// 0x331eab05
- (void)accessoryDone;	// 0x331ea9fd
- (void)accessoryTab:(BOOL)tab;	// 0x331eaa0d
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x331ea929
- (void)assistFormNode:(id)node;	// 0x331ea7ad
- (void)assistFormNodeForTyping:(id)typing;	// 0x331ea769
- (void)autoFillWithElementValue;	// 0x331eace5
- (BOOL)canAutoFill;	// 0x331eabe9
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x331ea0dd
- (void)clearMessagesMatchingMask:(int)mask;	// 0x32f64f25
- (void)copy:(id)copy;	// 0x331ea1fd
- (void)dealloc;	// 0x330642c1
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x331eab6d
- (id)formElement;	// 0x3300f621
// declared property getter: - (BOOL)hasEditedTextField;	// 0x331ed505
- (id)inputAccessoryView;	// 0x33063b35
- (id)inputView;	// 0x33063a9d
// declared property getter: - (CGRect)inputViewBounds;	// 0x331ed4c5
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x331ed48d
- (void)installGestureRecognizers;	// 0x32f630b5
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x331ed45d
- (BOOL)isAutoFillMode;	// 0x331ead29
- (BOOL)isAutoFilling;	// 0x331eadb1
// declared property getter: - (BOOL)isDispatchingTouchEvents;	// 0x331eb251
- (BOOL)isEditable;	// 0x331e9f39
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x331ea9b9
- (id)messagesMatchingMask:(int)mask;	// 0x331ecd71
- (BOOL)playsNicelyWithGestures;	// 0x331ea2dd
- (BOOL)resignFirstResponder;	// 0x33002a85
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x331ed471
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x32f650f5
- (void)setBounds:(CGRect)bounds;	// 0x331ea439
- (void)setFrame:(CGRect)frame;	// 0x32f62fed
// declared property setter: - (void)setInputViewBounds:(CGRect)bounds;	// 0x331ed4e9
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x331ed4a5
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x331ea96d
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x3306442d
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x33064451
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x330612ad
// declared property setter: - (void)set_input:(id)input;	// 0x33063b11
- (id)textDocument;	// 0x331e9fd1
- (id)textFormElement;	// 0x3300f5f9
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x331eac55
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x331eac0d
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x32f64305
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x33008089
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x331ecab1
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x33006da5
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x331eaecd
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x331eade1
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x33006e81
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x331eb289
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x331eadc9
@end

