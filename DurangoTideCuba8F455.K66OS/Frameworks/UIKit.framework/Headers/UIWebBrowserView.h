/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIBrowserDocumentController.h"
#import "UIWebFormAccessoryDelegate.h"

@class UIWindow, UIActionSheet, DOMNode, WebPDFView, NSMutableArray, NSTimer, UIWebFormAccessory, UIWebFormDelegate, UIInformalDelegate, UIWebTouchEventsGestureRecognizer;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory *_accessory;	// 520 = 0x208
	NSObject<UIFormPeripheral> *_input;	// 524 = 0x20c
	DOMNode *_currentAssistedNode;	// 528 = 0x210
	CGRect _inputViewBounds;	// 532 = 0x214
	float _lastAdjustmentForScroller;	// 548 = 0x224
	unsigned _accessoryEnabled : 1;	// 552 = 0x228
	unsigned _forceInputView : 1;	// 552 = 0x228
	unsigned _formIsAutoFilling : 1;	// 552 = 0x228
	unsigned _inputViewObeysDOMFocus : 1;	// 552 = 0x228
	unsigned _hasEditedTextField : 1;	// 552 = 0x228
	unsigned _requiresInputView : 1;	// 552 = 0x228
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 556 = 0x22c
	UIWebFormDelegate *_formDelegate;	// 560 = 0x230
	UIResponder *_editingDelegateForEverythingExceptForms;	// 564 = 0x234
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 568 = 0x238
	struct {
		WebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 600 = 0x258
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x303296d9; S=0x3032b105; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x303296b9; S=0x3032b12d; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x301a48ed; S=0x303296a9; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x303296c9; S=0x3018714d; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x30329679; S=0x3032968d; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x3032b835; S=0x300ffed1; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x303295ed; @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// G=0x30329601; S=0x3032961d; @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x30329649; S=0x3032965d; @synthesize=_inputViewObeysDOMFocus
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x3032b7c1; S=0x3032b7f9; 
+ (id)_PDFPageNumberLabel;	// 0x30329789
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x3032a021
+ (BOOL)isAutoFillAllowed;	// 0x3032c1dd
+ (float)preferredScrollDecelerationFactor;	// 0x300f98b9
- (id)initWithFrame:(CGRect)frame;	// 0x300fbe41
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x300fbec9
// declared property getter: - (id)_accessory;	// 0x303296d9
- (void)_autoFillFrame:(id)frame;	// 0x300ff215
- (id)_buildVersion;	// 0x300ff6bd
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x3032bac1
- (void)_cleanUpPDF;	// 0x30180cb9
- (void)_clearAllConsoleMessages;	// 0x3018144d
- (void)_clearSelectionAndUI;	// 0x301b03cd
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x3032ab21
// declared property getter: - (id)_currentAssistedNode;	// 0x303296b9
- (void)_displayFormNodeInputView;	// 0x3032b86d
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;	// 0x3017fe3d
- (void)_dumpWebArchiveAtPath:(id)path;	// 0x3032c06d
- (id)_editingDelegate;	// 0x30329fb5
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x301a48ed
- (CGRect)_editingRect;	// 0x3032b4f1
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3032b155
- (void)_hidePDFPageNumberLabel;	// 0x30180cdd
// declared property getter: - (id)_input;	// 0x303296c9
- (id)_keyboardResponder;	// 0x30329fe9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x3019be71
- (void)_keyboardWillShow:(id)_keyboard;	// 0x3019bb81
- (void)_pdfPageNumberLabelAnimationDidStop:(id)_pdfPageNumberLabelAnimation finished:(id)finished;	// 0x30329745
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x3017fd45
- (BOOL)_requiresKeyboardResetOnReload;	// 0x301870dd
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x30187239
- (void)_resetFormDataForFrame:(id)frame;	// 0x301809d5
- (void)_scrollCaretToVisible:(id)visible;	// 0x3032b675
- (void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;	// 0x300ff641
- (void)_setPDFView:(id)view;	// 0x303295dd
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x3032b4bd
- (void)_setUIWebViewUserAgent;	// 0x303296e9
- (void)_startAssistingKeyboard;	// 0x30329f79
- (void)_startAssistingSelectForNode:(id)node;	// 0x30329f41
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x3032c13d
- (void)_stopAssistingFormNode;	// 0x3032b419
- (void)_stopAssistingKeyboard;	// 0x30329f61
- (void)_stopAssistingSelectForNode:(id)node;	// 0x30329f29
- (void)_updateAccessory;	// 0x30329e49
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x30183739
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x30329ee9
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x3032b8d9
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x3032bdd1
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x30329b2d
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x3032c679
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x30329ad1
- (void)acceptedAutoFillWord:(id)word;	// 0x30329d85
- (void)accessoryAutoFill;	// 0x3032b6a9
- (void)accessoryDone;	// 0x3032b799
- (void)accessoryTab:(BOOL)tab;	// 0x3032b725
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x3032b835
- (void)assistFormNode:(id)node;	// 0x3032b2dd
- (void)autoFillWithElementValue;	// 0x30329d45
- (BOOL)canAutoFill;	// 0x30329dc5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3032abe9
- (void)clearMessagesMatchingMask:(int)mask;	// 0x300ffcd5
- (void)dealloc;	// 0x3032a425
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x3032b601
- (id)formElement;	// 0x30184d6d
// declared property getter: - (BOOL)hasEditedTextField;	// 0x303295ed
- (id)inputAccessoryView;	// 0x30187175
- (id)inputView;	// 0x301870e1
// declared property getter: - (CGRect)inputViewBounds;	// 0x30329601
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x30329649
- (void)installGestureRecognizers;	// 0x300fc919
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x30329679
- (BOOL)isAutoFillMode;	// 0x30329ccd
- (BOOL)isAutoFilling;	// 0x303294ed
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x3032b7c1
- (id)messagesMatchingMask:(int)mask;	// 0x30329521
- (BOOL)playsNicelyWithGestures;	// 0x301a4869
- (void)promptForReplace:(id)replace;	// 0x30329f91
- (BOOL)resignFirstResponder;	// 0x301885e5
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x3032968d
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x300ffed1
- (void)setBounds:(CGRect)bounds;	// 0x3032b225
- (void)setFrame:(CGRect)frame;	// 0x300fc5d5
// declared property setter: - (void)setInputViewBounds:(CGRect)bounds;	// 0x3032961d
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x3032965d
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x3032b7f9
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x3032b105
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x3032b12d
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x303296a9
// declared property setter: - (void)set_input:(id)input;	// 0x3018714d
- (id)textFormElement;	// 0x30184d49
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x301814c9
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x300ff1dd
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x303297f1
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x30180831
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x30329bc9
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x30329c39
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x30180905
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x30329ba5
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x30329501
@end

