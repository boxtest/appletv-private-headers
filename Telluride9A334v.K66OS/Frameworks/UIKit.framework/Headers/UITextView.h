/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInput.h"
#import "UIKit-Structs.h"
#import "UITextSelectingContainer.h"
#import "UIScrollView.h"

@class DOMHTMLElement, UIWebDocumentView, UIDelayedAction, UITextRange, NSDictionary, UITextPosition, WebFrame, UITextSelectionView, UITextInteractionAssistant, UIFont, UIColor, NSString;
@protocol UITextInputDelegate, UITextViewDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame *m_frame;	// 404 = 0x194
	DOMHTMLElement *m_body;	// 408 = 0x198
	int m_marginTop;	// 412 = 0x19c
	UIDelayedAction *m_selectionTimer;	// 416 = 0x1a0
	UIDelayedAction *m_longPressAction;	// 420 = 0x1a4
	BOOL m_editable;	// 424 = 0x1a8
	BOOL m_editing;	// 425 = 0x1a9
	BOOL m_becomesEditableWithGestures;	// 426 = 0x1aa
	BOOL m_reentrancyGuard;	// 427 = 0x1ab
	BOOL m_readyForScroll;	// 428 = 0x1ac
	BOOL m_hasExplicitTextAlignment;	// 429 = 0x1ad
	BOOL m_hasExplicitLineHeight;	// 430 = 0x1ae
	UITextInteractionAssistant *m_interactionAssistant;	// 432 = 0x1b0
	UITextSelectionView *m_selectionView;	// 436 = 0x1b4
	UIWebDocumentView *m_webView;	// 440 = 0x1b8
	UIFont *m_font;	// 444 = 0x1bc
	UIColor *m_textColor;	// 448 = 0x1c0
	int m_textAlignment;	// 452 = 0x1c4
	UIView *m_inputView;	// 456 = 0x1c8
	UIView *m_inputAccessoryView;	// 460 = 0x1cc
	float m_lineHeight;	// 464 = 0x1d0
	BOOL m_skipScrollContainingView;	// 468 = 0x1d4
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x301c6e59; S=0x301c6e69; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x302294c1; 
@property(assign) float bottomBufferHeight;	// G=0x3022905d; S=0x30228f6d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x301c2181; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x301c2c81; S=0x301c20b5; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x301c2171; S=0x301c6c59; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x301c2611; S=0x301c7fc1; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x301c87cd; 
@property(retain, nonatomic) UIFont *font;	// G=0x302288f9; S=0x301c2191; 
@property(retain) UIView *inputAccessoryView;	// G=0x301c78c9; S=0x301c35cd; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x302295a9; S=0x302295d1; 
@property(retain) UIView *inputView;	// G=0x301c78b5; S=0x301c35a9; @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x301c7d8d; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x30228aa5; S=0x30228ab5; converted property
@property(assign) int marginTop;	// G=0x30228a95; S=0x301c74a5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x302293e5; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x3022940d; S=0x30229435; 
@property(assign) CGPoint offset;	// G=0x3022912d; S=0x3022911d; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x3022916d; S=0x3022915d; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x301c80dd; S=0x302289cd; 
@property(copy) UITextRange *selectedTextRange;	// G=0x301c7949; S=0x302293b9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x3022982d; S=0x30229855; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x302298c9; S=0x301c87f5; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x301c204d; 
@property(assign) BOOL showScrollerIndicators;	// G=0x302290cd; S=0x30229099; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x301c27ed; S=0x301c2a49; 
@property(assign, nonatomic) int textAlignment;	// G=0x3022898d; S=0x3022899d; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30228931; S=0x301c26bd; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x301c7945; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x301c87a5; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x301c720d; converted property
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x30228011
+ (id)bestInterpretationForMarsVoltas:(id)marsVoltas;	// 0x3022805d
- (id)initWithCoder:(id)coder;	// 0x302275e1
- (id)initWithFrame:(CGRect)frame;	// 0x301c1389
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x301c6be5
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x30227591
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x30227db9
- (id)_automationValue;	// 0x301c8979
- (void)_bold:(id)bold;	// 0x30228311
- (void)_dealloc;	// 0x301c3449
- (void)_define:(id)define;	// 0x302282f1
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x30229881
- (void)_italicize:(id)italicize;	// 0x30228331
- (id)_keyboardResponder;	// 0x301c7935
- (void)_populateArchivedSubviews:(id)subviews;	// 0x302279b5
- (Class)_printFormatterClass;	// 0x303917d1
- (void)_promptForReplace:(id)replace;	// 0x302282b9
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x301c7909
- (void)_showTextStyleOptions:(id)options;	// 0x30228371
- (void)_underline:(id)underline;	// 0x30228351
- (id)automaticallySelectedOverlay;	// 0x301cb46d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x3022965d
- (BOOL)becomeFirstResponder;	// 0x301c74d1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x301c6e59
- (void)beginSelectionChange;	// 0x301c86e5
// declared property getter: - (id)beginningOfDocument;	// 0x302294c1
// converted property getter: - (float)bottomBufferHeight;	// 0x3022905d
- (BOOL)canBecomeFirstResponder;	// 0x301c7849
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x301c8841
- (BOOL)canResignFirstResponder;	// 0x301c88cd
- (void)cancelDataDetectorsWithWebLock;	// 0x301c3561
- (void)cancelInteractionWithLink;	// 0x30228d19
- (CGRect)caretRectForPosition:(id)position;	// 0x301c819d
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x302297bd
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x3022962d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x301c8705
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x30229749
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x301c1645
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x30229549
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x30227df9
// declared property getter: - (id)content;	// 0x301c2181
- (id)contentAsHTMLString;	// 0x301cfaa9
- (void)copy:(id)copy;	// 0x30228239
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x30228079
- (void)cut:(id)cut;	// 0x30228219
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x301c2c81
- (void)dealloc;	// 0x301c3301
- (void)delayedUpdateForKeyboardDidShow;	// 0x301c8145
- (void)deleteBackward;	// 0x30229251
- (void)detachInteractionAssistant;	// 0x301c32e1
- (void)detachSelectionView;	// 0x301c32c1
- (void)didMoveToSuperview;	// 0x301c2739
- (void)displayScrollerIndicators;	// 0x3022910d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x302283cd
- (void)encodeWithCoder:(id)coder;	// 0x30227a09
// declared property getter: - (id)endOfDocument;	// 0x301c87cd
- (void)endSelectionChange;	// 0x301c8821
- (void)ensureSelection;	// 0x301c804d
- (CGRect)firstRectForRange:(id)range;	// 0x302296bd
// declared property getter: - (id)font;	// 0x302288f9
- (void)forwardInvocation:(id)invocation;	// 0x301c7e71
- (BOOL)hasText;	// 0x30228969
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301c86a9
// declared property getter: - (id)inputAccessoryView;	// 0x301c78c9
// declared property getter: - (id)inputDelegate;	// 0x302295a9
// declared property getter: - (id)inputView;	// 0x301c78b5
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x302292a5
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x302292d5
- (void)insertText:(id)text;	// 0x30229279
// declared property getter: - (id)interactionAssistant;	// 0x301c7d8d
- (BOOL)isAccessibilityElementByDefault;	// 0x302b5649
// declared property getter: - (BOOL)isEditable;	// 0x301c2171
// declared property getter: - (BOOL)isEditing;	// 0x301c2611
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b564d
- (BOOL)isFirstResponder;	// 0x301c77f1
- (BOOL)isInteractingWithLink;	// 0x30228d59
- (void)keyboardDidShow:(id)keyboard;	// 0x301c8115
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x301cac71
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x301ceafd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x301caee9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x301c7f41
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30228da5
// converted property getter: - (float)lineHeight;	// 0x30228aa5
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x302281d9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x302281b9
// converted property getter: - (int)marginTop;	// 0x30228a95
// declared property getter: - (id)markedTextRange;	// 0x302293e5
// declared property getter: - (id)markedTextStyle;	// 0x3022940d
- (id)metadataDictionariesForDictationResults;	// 0x30229335
- (id)methodSignatureForSelector:(SEL)selector;	// 0x301c7e25
- (BOOL)mightHaveLinks;	// 0x301c6e39
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x3022809d
// converted property getter: - (CGPoint)offset;	// 0x3022912d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x30229579
- (void)paste:(id)paste;	// 0x30228259
- (void)performBecomeEditableTasks;	// 0x301c7fd1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x30229519
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x302294e9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x302295fd
- (void)recalculateStyle;	// 0x301c2239
- (CGRect)rectForSelection:(NSRange)selection;	// 0x30228835
- (id)rectsForRange:(id)range;	// 0x302298f1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x301c1f5d
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x30229305
- (void)removeFromSuperview;	// 0x301c3251
- (void)replace:(id)replace;	// 0x302281f9
- (void)replaceRange:(id)range withText:(id)text;	// 0x30229389
- (void)resetDataDetectorsResultsWithWebLock;	// 0x301c7ef9
- (BOOL)resignFirstResponder;	// 0x301c3065
- (BOOL)respondsToSelector:(SEL)selector;	// 0x301c13d9
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x30228b3d
- (void)scrollRectToVisibleInContainingScrollView;	// 0x301c8329
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x301c824d
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x30229241
// converted property getter: - (BOOL)scrollingEnabled;	// 0x3022916d
- (void)select:(id)select;	// 0x30228279
- (void)selectAll;	// 0x30228191
- (void)selectAll:(id)all;	// 0x30228299
// declared property getter: - (NSRange)selectedRange;	// 0x301c80dd
- (id)selectedText;	// 0x30228155
// declared property getter: - (id)selectedTextRange;	// 0x301c7949
// declared property getter: - (int)selectionAffinity;	// 0x3022982d
- (CGRect)selectionClipRect;	// 0x301c8229
// declared property getter: - (int)selectionGranularity;	// 0x302298c9
// declared property getter: - (id)selectionView;	// 0x301c204d
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30229185
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x3022914d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x3022968d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x301c6e69
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30228f6d
- (void)setContentToHTMLString:(id)htmlstring;	// 0x301c7375
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x301c20b5
- (void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x30227ed5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x301c6c59
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x301c7fc1
// declared property setter: - (void)setFont:(id)font;	// 0x301c2191
- (void)setFrame:(CGRect)frame;	// 0x301c145d
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x301c35cd
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x302295d1
// declared property setter: - (void)setInputView:(id)view;	// 0x301c35a9
// converted property setter: - (void)setLineHeight:(float)height;	// 0x30228ab5
// converted property setter: - (void)setMarginTop:(int)top;	// 0x301c74a5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30229461
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x30229435
- (void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;	// 0x3022804d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x3022911d
- (void)setRichText:(BOOL)text;	// 0x302288cd
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x30229195
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x3022915d
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x302289cd
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x302293b9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x30229855
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x301c87f5
- (void)setSelectionToEnd;	// 0x30228701
- (void)setSelectionToStart;	// 0x30228601
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x30229099
// declared property setter: - (void)setText:(id)text;	// 0x301c2a49
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x3022899d
// declared property setter: - (void)setTextColor:(id)color;	// 0x301c26bd
- (BOOL)shouldScrollEnclosingScrollView;	// 0x301c2621
- (BOOL)shouldStartDataDetectors;	// 0x301c2ca1
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x302290cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30228429
- (void)startDataDetectorsWithWebLock;	// 0x301c6ec5
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30228cb9
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30228d39
- (id)styleString;	// 0x301c1c11
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x301c8621
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x30228c99
// declared property getter: - (id)text;	// 0x301c27ed
// declared property getter: - (int)textAlignment;	// 0x3022898d
// declared property getter: - (id)textColor;	// 0x30228931
// declared property getter: - (id)textDocument;	// 0x301c7945
- (id)textInRange:(id)range;	// 0x3022935d
- (id)textInputTraits;	// 0x301c143d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x301c8775
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x301c1dc5
// declared property getter: - (id)tokenizer;	// 0x301c87a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302280fd
- (id)undoManager;	// 0x30228391
- (id)undoManagerForWebView:(id)webView;	// 0x301caec9
- (void)unmarkText;	// 0x30229499
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x301c1fcd
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30228cd9
- (void)updateSelection;	// 0x3022812d
- (void)updateWebViewObjects;	// 0x301c1e45
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30228cf9
- (CGRect)visibleRect;	// 0x301c8511
- (CGRect)visibleTextRect;	// 0x301c8431
// converted property getter: - (id)webView;	// 0x301c720d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30228e7d
- (void)webViewDidChange:(id)webView;	// 0x301c22a5
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x30228d7d
@end
