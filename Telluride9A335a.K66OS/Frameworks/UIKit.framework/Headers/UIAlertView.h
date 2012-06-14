/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSString, UILabel, UIWindow, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	UILabel *_subtitleLabel;	// 56 = 0x38
	UILabel *_bodyTextLabel;	// 60 = 0x3c
	UILabel *_taglineTextLabel;	// 64 = 0x40
	float _startY;	// 68 = 0x44
	CGPoint _center;	// 72 = 0x48
	id _context;	// 80 = 0x50
	int _cancelButton;	// 84 = 0x54
	int _defaultButton;	// 88 = 0x58
	int _firstOtherButton;	// 92 = 0x5c
	UIToolbar *_toolbar;	// 96 = 0x60
	UIWindow *_originalWindow;	// 100 = 0x64
	UIWindow *_dimWindow;	// 104 = 0x68
	int _suspendTag;	// 108 = 0x6c
	int _dismissButtonIndex;	// 112 = 0x70
	float _bodyTextHeight;	// 116 = 0x74
	NSMutableArray *_buttons;	// 120 = 0x78
	NSMutableArray *_textFields;	// 124 = 0x7c
	UIView *_keyboard;	// 128 = 0x80
	UIView *_table;	// 132 = 0x84
	UIView *_dimView;	// 136 = 0x88
	UIView *_backgroundImageView;	// 140 = 0x8c
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
	} _modalViewFlags;	// 144 = 0x90
}
@property(assign) int alertSheetStyle;	// G=0x33cc4525; S=0x33cc4551; converted property
@property(assign, nonatomic) int alertViewStyle;	// G=0x33cc51bd; S=0x33cc5165; 
@property(assign) BOOL blocksInteraction;	// G=0x33cc46f1; S=0x33cc46c9; converted property
@property(retain) id bodyText;	// G=0x33ad43b1; S=0x33a560a1; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x33cc288d; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x33a56a5d; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x33ada685; S=0x33a56a6d; 
@property(retain) id context;	// G=0x33ada695; S=0x33ad3e09; converted property
@property(retain) id defaultButton;	// G=0x33cc1319; S=0x33cc1309; converted property
@property(assign) int defaultButtonIndex;	// G=0x33cc5155; S=0x33cc5139; converted property
@property(assign, nonatomic) id delegate;	// G=0x33cc50a1; S=0x33a56131; 
@property(retain) id destructiveButton;	// G=0x33cc1399; S=0x33cc1359; converted property
@property(assign) BOOL dimsBackground;	// G=0x33cc46a5; S=0x33cc467d; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x33ad3ddd; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x33cc4539; S=0x33a55fbd; converted property
@property(assign) BOOL groupsTextFields;	// G=0x33cc0219; S=0x33cc0231; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x33cc11e1; converted property
@property(copy, nonatomic) NSString *message;	// G=0x33ad43a1; S=0x33a56091; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x33cc50e9; 
@property(assign) int numberOfRows;	// G=0x33cc4511; S=0x33a55fa5; converted property
@property(assign) BOOL runsModal;	// G=0x33cc4721; S=0x33cc4709; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x33cc1b29; S=0x33cc1b11; converted property
@property(retain) id subtitle;	// G=0x33cc07b1; S=0x33cc0731; converted property
@property(assign) int suspendTag;	// G=0x33cc46b9; S=0x33b274d5; converted property
@property(readonly, retain) UIView *table;	// G=0x33cc1941; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x33cc15c9; S=0x33cc15ad; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x33cc289d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x33a56065; S=0x33a55fd5; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x33cc287d; converted property
@property(assign) int titleMaxLineCount;	// G=0x33cc0879; S=0x33cc07d1; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x33cc5109; 
+ (id)_alertWindow;	// 0x339935e5
+ (id)_popupAlertBackground:(BOOL)background;	// 0x33ad895d
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x33cc0035
+ (CGSize)minimumSize;	// 0x33cbffe9
- (id)initWithFrame:(CGRect)frame;	// 0x33a55e11
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x33cc0075
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x33a55cad
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x33cc4f79
- (id)_addButtonWithTitle:(id)title;	// 0x33cc1329
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x33a563f5
- (id)_addButtonWithTitleText:(id)titleText;	// 0x33cc1451
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x33a569f1
- (void)_addTextEntryFieldsWithStyle:(int)style;	// 0x33cc51dd
- (id)_addTextFieldWithValue:(id)value label:(id)label;	// 0x33cc0955
- (void)_adjustLabelFontSizes;	// 0x33cc28dd
- (int)_alertOrientation;	// 0x33cc28c5
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x33cc41d9
- (void)_alertSheetTextFieldDidChange:(id)_alertSheetTextField;	// 0x33ad520d
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x33cc0dd1
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x33cc0e01
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x33cc0ed1
- (void)_appSuspended:(id)suspended;	// 0x33cc3fc1
- (float)_bottomVerticalInset;	// 0x33ad8bd9
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x33ad9379
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x33ad9285
- (id)_buttonAtIndex:(int)index;	// 0x33cc1471
- (void)_buttonClicked:(id)clicked;	// 0x33ad97e1
- (float)_buttonHeight;	// 0x33ad89d1
- (BOOL)_canShowAlerts;	// 0x33ad51e9
- (void)_cancelAnimated:(BOOL)animated;	// 0x33cc27f9
- (void)_cleanupAfterPopupAnimation;	// 0x33ad9389
- (void)_cleanupKBWatcher;	// 0x33cc10fd
- (void)_createBodyTextLabelIfNeeded;	// 0x33ad3ba1
- (void)_createSubtitleLabelIfNeeded;	// 0x33cc02c5
- (void)_createTaglineTextLabelIfNeeded;	// 0x33cc04a1
- (void)_createTitleLabelIfNeeded;	// 0x33ad3a89
- (int)_currentOrientation;	// 0x33ad57c1
- (id)_defaultButton;	// 0x33cc1415
- (id)_destructiveButton;	// 0x33cc14d1
- (id)_dimView;	// 0x33cc31cd
- (BOOL)_dimsBackground;	// 0x33cc276d
- (id)_firstOtherButton;	// 0x33cc150d
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x33ad916d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x33cc4db1
- (BOOL)_isAnimating;	// 0x33cc26c1
- (BOOL)_isSBAlert;	// 0x33cc4f51
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x33cc1fd9
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x33cc2115
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x33cc2271
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x33cc23cd
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x33cc2529
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x33cc2685
- (void)_keyboardDidHide:(id)_keyboard;	// 0x33cc5981
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x33cc1b3d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x33cc573d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x33cc53f5
- (void)_layoutIfNeeded;	// 0x33ad5665
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x33ad5841
- (BOOL)_manualKeyboardIsVisible;	// 0x33cc1a4d
- (float)_maxHeight;	// 0x33ad8c05
- (BOOL)_needsKeyboard;	// 0x33ad5621
- (void)_nukeOldTextFields;	// 0x33cc4e35
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x33ad9c89
- (void)_performPopup:(BOOL)popup;	// 0x33cc1fc5
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x33ad43dd
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x33ada185
- (void)_prepareForDisplay;	// 0x33cc4ba9
- (void)_prepareToBeReplaced;	// 0x33cc4d99
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x33cc2ab9
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x33cc32d9
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x33ada4e5
- (void)_repopup;	// 0x33cc2721
- (void)_repopupNoAnimation;	// 0x33cc26d5
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x33cc286d
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x33cc0249
- (void)_setDefaultButton:(id)button;	// 0x33cc13d5
- (void)_setDestructiveButton:(id)button;	// 0x33cc1491
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x33ad3ded
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x33cc0bad
- (void)_setupKBWatcher;	// 0x33cc0fa9
- (void)_setupTitleStyle;	// 0x33ad8699
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x33cc1a65
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x33cc1bb9
- (void)_showManualKBIfNecessary;	// 0x33cc1b69
- (void)_slideSheetOut:(BOOL)anOut;	// 0x33cc3c7d
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x33cc2785
- (id)_textFieldAtIndex:(int)index;	// 0x33cc0d15
- (float)_titleHorizontalInset;	// 0x33ad8a8d
- (float)_titleVerticalBottomInset;	// 0x33ad8b49
- (float)_titleVerticalTopInset;	// 0x33ad8ab9
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x33cc48dd
- (void)_updateFrameForDisplay;	// 0x33ad8d6d
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x33cc0e89
- (void)_useUndoStyle:(BOOL)style;	// 0x33cc53dd
- (void)_willRotateKeyboard;	// 0x33cc59e1
- (int)addButtonWithTitle:(id)title;	// 0x33a563c1
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x33cc156d
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x33cc1549
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x33cc4f69
// converted property getter: - (int)alertSheetStyle;	// 0x33cc4525
// declared property getter: - (int)alertViewStyle;	// 0x33cc51bd
- (CGSize)backgroundSize;	// 0x33cc3f89
- (BOOL)becomeFirstResponder;	// 0x33ad973d
// converted property getter: - (BOOL)blocksInteraction;	// 0x33cc46f1
- (int)bodyMaxLineCount;	// 0x33cc0941
// converted property getter: - (id)bodyText;	// 0x33ad43b1
// converted property getter: - (id)bodyTextLabel;	// 0x33cc288d
- (id)buttonAtIndex:(int)index;	// 0x33cc1339
- (int)buttonCount;	// 0x33cc158d
- (id)buttonTitleAtIndex:(int)index;	// 0x33cc50b1
// converted property getter: - (id)buttons;	// 0x33a56a5d
- (BOOL)canBecomeFirstResponder;	// 0x33ad977d
// declared property getter: - (int)cancelButtonIndex;	// 0x33ada685
// converted property getter: - (id)context;	// 0x33ada695
- (void)dealloc;	// 0x33ada6a5
// converted property getter: - (id)defaultButton;	// 0x33cc1319
// converted property getter: - (int)defaultButtonIndex;	// 0x33cc5155
// declared property getter: - (id)delegate;	// 0x33cc50a1
// converted property getter: - (id)destructiveButton;	// 0x33cc1399
// converted property getter: - (BOOL)dimsBackground;	// 0x33cc46a5
- (void)dismiss;	// 0x33cc3f41
- (void)dismissAnimated:(BOOL)animated;	// 0x33cc3f55
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x33ad9959
// declared property getter: - (int)firstOtherButtonIndex;	// 0x33ad3ddd
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x33cc4539
// converted property getter: - (BOOL)groupsTextFields;	// 0x33cc0219
- (BOOL)isBodyTextTruncated;	// 0x33cc28ad
// declared property getter: - (BOOL)isVisible;	// 0x33cc5109
// converted property getter: - (id)keyboard;	// 0x33cc11e1
- (void)layout;	// 0x33ad5b99
- (void)layoutAnimated:(BOOL)animated;	// 0x33ad58a5
// declared property getter: - (id)message;	// 0x33ad43a1
// declared property getter: - (int)numberOfButtons;	// 0x33cc50e9
- (int)numberOfLinesInTitle;	// 0x33cc477d
// converted property getter: - (int)numberOfRows;	// 0x33cc4511
- (void)popupAlertAnimated:(BOOL)animated;	// 0x33cc2aa5
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x33ad3e75
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x33ad3e9d
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x33cc2a85
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x33cc2d99
- (void)presentSheetFromBehindView:(id)behindView;	// 0x33cc2d85
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x33cc4b15
- (void)presentSheetInView:(id)view;	// 0x33cc2dad
- (void)presentSheetToAboveView:(id)aboveView;	// 0x33cc2f25
- (void)replaceAlert:(id)alert;	// 0x33cc4cd5
- (BOOL)requiresPortraitOrientation;	// 0x33ad583d
- (BOOL)resignFirstResponder;	// 0x33ada141
// converted property getter: - (BOOL)runsModal;	// 0x33cc4721
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x33cc4551
// declared property setter: - (void)setAlertViewStyle:(int)style;	// 0x33cc5165
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x33cc46c9
// converted property setter: - (void)setBodyText:(id)text;	// 0x33a560a1
- (void)setBodyTextMaxLineCount:(int)count;	// 0x33cc088d
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x33a56a6d
// converted property setter: - (void)setContext:(id)context;	// 0x33ad3e09
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x33cc1309
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x33cc5139
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a56131
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x33cc1359
- (void)setDimView:(id)view;	// 0x33cc318d
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x33cc467d
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x33a55fbd
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x33cc0231
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x33cc0da9
// declared property setter: - (void)setMessage:(id)message;	// 0x33a56091
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x33a55fa5
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x33cc4709
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x33cc1b11
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33cc0731
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x33b274d5
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x33cc15ad
- (void)setTaglineText:(id)text;	// 0x33cc06b1
// declared property setter: - (void)setTitle:(id)title;	// 0x33a55fd5
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x33cc07d1
- (void)show;	// 0x33ad3e4d
- (void)showWithAnimationType:(int)animationType;	// 0x33ad3e61
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x33cc1b29
// converted property getter: - (id)subtitle;	// 0x33cc07b1
// converted property getter: - (int)suspendTag;	// 0x33cc46b9
// converted property getter: - (id)table;	// 0x33cc1941
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x33cc15c9
- (id)tableView;	// 0x33cc15dd
// converted property getter: - (id)taglineTextLabel;	// 0x33cc289d
- (id)textField;	// 0x33cc0d61
- (id)textFieldAtIndex:(int)index;	// 0x33cc5365
- (int)textFieldCount;	// 0x33cc0d39
// declared property getter: - (id)title;	// 0x33a56065
// converted property getter: - (id)titleLabel;	// 0x33cc287d
// converted property getter: - (int)titleMaxLineCount;	// 0x33cc0879
- (CGRect)titleRect;	// 0x33cc4735
@end
