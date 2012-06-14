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

@class DOMNode, UIWebPDFView, NSMutableArray, NSArray, NSTimer, UIWebFormAccessory, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, UIWebRotatingSheet;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory *_accessory;	// 568 = 0x238
	NSObject<UIFormPeripheral> *_input;	// 572 = 0x23c
	DOMNode *_currentAssistedNode;	// 576 = 0x240
	CGRect _inputViewBounds;	// 580 = 0x244
	CGRect _addressViewBounds;	// 596 = 0x254
	float _lastAdjustmentForScroller;	// 612 = 0x264
	unsigned _accessoryEnabled : 1;	// 616 = 0x268
	unsigned _forceInputView : 1;	// 616 = 0x268
	unsigned _formIsAutoFilling : 1;	// 616 = 0x268
	unsigned _inputViewObeysDOMFocus : 1;	// 616 = 0x268
	unsigned _hasEditedTextField : 1;	// 616 = 0x268
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 620 = 0x26c
	UIWebFormDelegate *_formDelegate;	// 624 = 0x270
	UIResponder *_editingDelegateForEverythingExceptForms;	// 628 = 0x274
	unsigned _dispatchedTouchEvents;	// 632 = 0x278
	NSMutableArray *_deferredTouchEvents;	// 636 = 0x27c
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 640 = 0x280
	struct {
		UIWebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 672 = 0x2a0
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x359a1391; S=0x3581d9a9; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x359a13b1; S=0x3581d9cd; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x359a13c1; S=0x3581a829; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x359a13a1; S=0x3581d08d; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x359a13d1; S=0x359a13e5; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x3599e89d; S=0x3571fbf5; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x359a1479; @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// G=0x359a1439; S=0x359a145d; @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x359a1401; S=0x359a1419; @synthesize=_inputViewObeysDOMFocus
@property(readonly, assign, nonatomic) BOOL isDispatchingTouchEvents;	// G=0x3599f1c5; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x3599e92d; S=0x3599e8e1; 
+ (id)_PDFPageNumberLabel:(BOOL)label;	// 0x359a0dc9
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x3599dd15
+ (BOOL)isAutoFillAllowed;	// 0x3599dd41
+ (float)preferredScrollDecelerationFactor;	// 0x3571b6a1
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x3571d90d
- (id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;	// 0x359a127d
// declared property getter: - (id)_accessory;	// 0x359a1391
- (CGRect)_activeRectForRectToCenter:(CGRect)center;	// 0x3599f21d
- (void)_autoFillFrame:(id)frame;	// 0x3571ee29
- (id)_buildVersion;	// 0x3571f2dd
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x3599f565
- (void)_clearAllConsoleMessages;	// 0x357c10e9
- (void)_clearSelectionAndUI;	// 0x359a115d
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x357c6bc5
// declared property getter: - (id)_currentAssistedNode;	// 0x359a13b1
- (CGSize)_defaultScrollViewContentSize;	// 0x359a04e1
- (void)_deferWebEvent:(id)event;	// 0x3599f031
- (void)_dispatchWebEvent:(id)event;	// 0x3599ef65
- (void)_displayFormNodeInputView;	// 0x3599e549
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;	// 0x357be3bd
- (void)_dumpWebArchiveAtPath:(id)path;	// 0x359a1081
- (id)_editingDelegate;	// 0x3599e219
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x359a13c1
- (void)_endDeferringEvents;	// 0x3599eff9
- (unsigned)_firstVisiblePDFPageNumber;	// 0x359a0e2d
- (void)_handleDeferredEvents;	// 0x3599f0bd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3599def9
// declared property getter: - (id)_input;	// 0x359a13a1
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x357cc2f9
- (id)_keyboardResponder;	// 0x3599de99
- (void)_keyboardWillChangeFrame:(id)_keyboard;	// 0x357cbe41
- (void)_keyboardWillHide:(id)_keyboard;	// 0x357cc431
- (void)_keyboardWillShow:(id)_keyboard;	// 0x357cbe85
- (CGPoint)_originForPDFPageLabelInSuperview:(id)superview;	// 0x359a0e4d
- (void)_promptForReplace:(id)replace;	// 0x3599e2d9
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x357be2b1
- (BOOL)_requiresKeyboardResetOnReload;	// 0x3581d015
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x3581d189
- (void)_resetFormDataForFrame:(id)frame;	// 0x357c04a9
- (void)_rotateEnclosingScrollView:(id)view toFrame:(CGRect)frame withVisibleHeight:(float)visibleHeight rotationDelegate:(id)delegate;	// 0x359a0599
- (void)_scrollCaretToVisible:(id)visible;	// 0x3599eaa5
- (void)_setAddressViewFrame:(CGRect)frame;	// 0x357be16d
- (void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;	// 0x3571f261
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)automaticKeyboardInfo adjustScrollView:(BOOL)view;	// 0x357cc32d
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x359a119d
- (void)_setUIWebViewUserAgent;	// 0x3581af19
- (BOOL)_shouldDeferEvents;	// 0x3599ef4d
- (void)_startAssistingKeyboard;	// 0x3599e2fd
- (void)_startAssistingNode:(id)node;	// 0x3599e325
- (void)_startDeferringEvents;	// 0x3599efc1
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x359a11d5
- (void)_stopAssistingFormNode;	// 0x3599e475
- (void)_stopAssistingKeyboard;	// 0x3599e311
- (void)_stopAssistingNode:(id)node;	// 0x3599e345
- (void)_updateAccessory;	// 0x3599e5b5
- (void)_updateFixedPositionContent;	// 0x357c4bd9
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;	// 0x357cba35
- (void)_updateFixedPositioningObjectsLayoutSoon;	// 0x3599e359
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x359a0ee9
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x3599e369
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x357c72e5
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x3599f8c1
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x3599fc21
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x3599fc9d
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x359a0489
- (void)acceptedAutoFillWord:(id)word;	// 0x3599ec11
- (void)accessoryAutoFill;	// 0x3599e9ed
- (void)accessoryClear;	// 0x3599ea79
- (void)accessoryDone;	// 0x3599e971
- (void)accessoryTab:(BOOL)tab;	// 0x3599e981
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x3599e89d
- (void)assistFormNode:(id)node;	// 0x3599e721
- (void)assistFormNodeForTyping:(id)typing;	// 0x3599e6dd
- (void)autoFillWithElementValue;	// 0x3599ec59
- (BOOL)canAutoFill;	// 0x3599eb5d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3599dfe5
- (void)clearMessagesMatchingMask:(int)mask;	// 0x3571fa25
- (void)copy:(id)copy;	// 0x3599e171
- (void)dealloc;	// 0x3581d83d
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x3599eae1
- (id)formElement;	// 0x357c8b69
// declared property getter: - (BOOL)hasEditedTextField;	// 0x359a1479
- (id)inputAccessoryView;	// 0x3581d0b1
- (id)inputView;	// 0x3581d019
// declared property getter: - (CGRect)inputViewBounds;	// 0x359a1439
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x359a1401
- (void)installGestureRecognizers;	// 0x3571dbb5
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x359a13d1
- (BOOL)isAutoFillMode;	// 0x3599ec9d
- (BOOL)isAutoFilling;	// 0x3599ed25
// declared property getter: - (BOOL)isDispatchingTouchEvents;	// 0x3599f1c5
- (BOOL)isEditable;	// 0x3599de41
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x3599e92d
- (id)messagesMatchingMask:(int)mask;	// 0x359a0ce5
- (BOOL)playsNicelyWithGestures;	// 0x3599e251
- (BOOL)resignFirstResponder;	// 0x357bbfcd
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x359a13e5
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x3571fbf5
- (void)setBounds:(CGRect)bounds;	// 0x3599e3ad
- (void)setFrame:(CGRect)frame;	// 0x3571daed
// declared property setter: - (void)setInputViewBounds:(CGRect)bounds;	// 0x359a145d
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x359a1419
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x3599e8e1
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x3581d9a9
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x3581d9cd
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x3581a829
// declared property setter: - (void)set_input:(id)input;	// 0x3581d08d
- (id)textDocument;	// 0x3599ded9
- (id)textFormElement;	// 0x357c8b41
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x3599ebc9
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x3599eb81
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x3571ee05
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x357c15d1
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x359a0a25
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x357c02ed
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x3599ee41
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x3599ed55
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x357c03c9
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x3599f1fd
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x3599ed3d
@end
