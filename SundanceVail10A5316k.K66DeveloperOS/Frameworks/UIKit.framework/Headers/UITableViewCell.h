/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "UIGestureRecognizerDelegate.h"

@class UIImageView, UILabel, UIButton, UITableView, UILongPressGestureRecognizer, UITextField, _UITableViewCellOldEditingData, UIColor, UIImage, NSString, NSTimer;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate> {
@private
	UITableView *_tableView;	// 84 = 0x54
	id _layoutManager;	// 88 = 0x58
	id _target;	// 92 = 0x5c
	SEL _editAction;	// 96 = 0x60
	SEL _accessoryAction;	// 100 = 0x64
	id _oldEditingData;	// 104 = 0x68
	id _editingData;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	int _indentationLevel;	// 116 = 0x74
	float _indentationWidth;	// 120 = 0x78
	NSString *_reuseIdentifier;	// 124 = 0x7c
	UIView *_contentView;	// 128 = 0x80
	UIImageView *_imageView;	// 132 = 0x84
	UILabel *_textLabel;	// 136 = 0x88
	UILabel *_detailTextLabel;	// 140 = 0x8c
	UIView *_backgroundView;	// 144 = 0x90
	UIView *_selectedBackgroundView;	// 148 = 0x94
	UIView *_multipleSelectionBackgroundView;	// 152 = 0x98
	UIView *_selectedOverlayView;	// 156 = 0x9c
	float _selectionFadeDuration;	// 160 = 0xa0
	UIColor *_backgroundColor;	// 164 = 0xa4
	UIColor *_separatorColor;	// 168 = 0xa8
	UIColor *_topShadowColor;	// 172 = 0xac
	UIColor *_bottomShadowColor;	// 176 = 0xb0
	UIColor *_sectionBorderColor;	// 180 = 0xb4
	UIView *_floatingSeparatorView;	// 184 = 0xb8
	UIView *_topShadowAnimationView;	// 188 = 0xbc
	UIView *_bottomShadowAnimationView;	// 192 = 0xc0
	id _badge;	// 196 = 0xc4
	CFDictionaryRef _unhighlightedStates;	// 200 = 0xc8
	id _selectionSegueTemplate;	// 204 = 0xcc
	id _accessoryActionSegueTemplate;	// 208 = 0xd0
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
	} _tableCellFlags;	// 212 = 0xd4
	UIButton *_accessoryView;	// 224 = 0xe0
	UIButton *_editingAccessoryView;	// 228 = 0xe4
	UIView *_customAccessoryView;	// 232 = 0xe8
	UIView *_customEditingAccessoryView;	// 236 = 0xec
	UIView *_separatorView;	// 240 = 0xf0
	UIView *_topSeparatorView;	// 244 = 0xf4
	UIView *_topShadowView;	// 248 = 0xf8
	UITextField *_editableTextField;	// 252 = 0xfc
	double _lastSelectionTime;	// 256 = 0x100
	NSTimer *_deselectTimer;	// 264 = 0x108
	float _textFieldOffset;	// 268 = 0x10c
	SEL _returnAction;	// 272 = 0x110
	UIColor *_selectionTintColor;	// 276 = 0x114
	UIColor *_accessoryTintColor;	// 280 = 0x118
	UIImage *_reorderControlImage;	// 284 = 0x11c
	UILongPressGestureRecognizer *_menuGesture;	// 288 = 0x120
	id _highlightingSupport;	// 292 = 0x124
}
@property(assign) SEL accessoryAction;	// G=0x302cc949; S=0x302cc85d; converted property
@property(retain) id accessoryActionSegueTemplate;	// G=0x302ca3ad; S=0x302ca369; converted property
@property(assign, nonatomic) int accessoryType;	// G=0x300e8179; S=0x300e965d; 
@property(retain, nonatomic) UIView *accessoryView;	// G=0x30150381; S=0x30142f65; 
@property(retain) UIColor *backgroundColor;	// G=0x3014ab79; S=0x300ea195; converted property
@property(retain, nonatomic) UIView *backgroundView;	// G=0x30154b01; S=0x30154999; 
@property(retain) UIColor *bottomShadowColor;	// G=0x30156151; S=0x300ee9c5; converted property
@property(assign) BOOL clipsContents;	// G=0x302cb79d; S=0x302cb765; converted property
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x300e82d1; 
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x3014ac39; 
@property(assign) BOOL drawingEnabled;	// G=0x301b7b3d; S=0x301e37e1; converted property
@property(assign, nonatomic, getter=_drawsTopShadow, setter=_setDrawsTopShadow:) BOOL drawsTopShadow;	// G=0x30153f61; S=0x300ee47d; 
@property(assign) SEL editAction;	// G=0x302cc84d; S=0x302cc83d; converted property
@property(readonly, assign, nonatomic) UITextField *editableTextField;	// G=0x301c26b9; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x300e9a59; S=0x301a92fd; 
@property(assign, nonatomic) int editingAccessoryType;	// G=0x300e9a71; S=0x30134071; 
@property(retain, nonatomic) UIView *editingAccessoryView;	// G=0x302cb6c5; S=0x301a72f5; 
@property(readonly, assign, nonatomic) int editingStyle;	// G=0x301341ad; 
@property(retain) id font;	// G=0x302caf45; S=0x301aa141; converted property
@property(assign) BOOL hidesAccessoryWhenEditing;	// G=0x302cb749; S=0x302cb6fd; converted property
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x30121761; S=0x300f0275; 
@property(retain) id image;	// G=0x302cb135; S=0x302cb109; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x3010a211; 
@property(assign, nonatomic) int indentationLevel;	// G=0x300ed439; S=0x301c1979; 
@property(assign, nonatomic) float indentationWidth;	// G=0x300ed449; S=0x301c19a1; 
@property(retain) id layoutManager;	// G=0x300e75f5; S=0x300e75b1; converted property
@property(assign) int lineBreakMode;	// G=0x302cb061; S=0x302cb01d; converted property
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;	// G=0x302cb25d; S=0x302cb295; 
@property(assign, nonatomic, getter=_needsSetup, setter=_setNeedsSetup:) BOOL needsSetup;	// G=0x301ab539; S=0x300ea70d; 
@property(retain, nonatomic) _UITableViewCellOldEditingData *oldEditingData;	// G=0x302c9225; S=0x302c9275; 
@property(assign) SEL returnAction;	// G=0x302cd2b1; S=0x302cd2a1; converted property
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x30157959; 
@property(retain) UIColor *sectionBorderColor;	// G=0x30154d39; S=0x300eeab1; converted property
@property(assign) int sectionLocation;	// G=0x300e7dd5; S=0x302cca0d; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3010a1ed; S=0x300effd1; 
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x30135ef1; S=0x30109e91; 
@property(retain) id selectedImage;	// G=0x302cb189; S=0x302cb15d; converted property
@property(readonly, retain) UIView *selectedOverlayView;	// G=0x302cb515; converted property
@property(retain) id selectedTextColor;	// G=0x302cb0e1; S=0x302cb0b5; converted property
@property(assign) float selectionFadeDuration;	// G=0x301b55a5; S=0x300e743d; converted property
@property(retain) id selectionSegueTemplate;	// G=0x301a6129; S=0x302ca3e5; converted property
@property(assign, nonatomic) int selectionStyle;	// G=0x30136309; S=0x3010a44d; 
@property(retain) UIColor *selectionTintColor;	// G=0x301364c1; S=0x302cb4a5; converted property
@property(retain) UIColor *separatorColor;	// G=0x30155bd1; S=0x300ee2b5; converted property
@property(assign) int separatorStyle;	// G=0x30153f4d; S=0x300edfd5; converted property
@property(assign, nonatomic) BOOL shouldIndentWhileEditing;	// G=0x301535e5; S=0x302cb589; 
@property(readonly, assign, nonatomic) BOOL showingDeleteConfirmation;	// G=0x300ebd29; 
@property(assign, nonatomic) BOOL showsReorderControl;	// G=0x3010a3bd; S=0x3014b9c1; 
@property(retain) id tableBackgroundColor;	// G=0x30156035; S=0x302cb3fd; converted property
@property(assign) int tableViewStyle;	// G=0x300e79dd; S=0x300e9ff5; converted property
@property(retain) id target;	// G=0x302cc82d; S=0x302cc745; converted property
@property(retain) id text;	// G=0x302caf19; S=0x301aa201; converted property
@property(assign) int textAlignment;	// G=0x302caff5; S=0x302cafc9; converted property
@property(retain) id textColor;	// G=0x302cb08d; S=0x301aa1b9; converted property
@property(assign, nonatomic, setter=setTextFieldOffset:) float textFieldOffset;	// G=0x301ff811; S=0x301ff0f1; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x3014a8b1; 
@property(retain) UIColor *topShadowColor;	// G=0x30154c71; S=0x300ee3b9; converted property
@property(assign, nonatomic) BOOL wasSwiped;	// G=0x3010a3a5; S=0x300efec5; 
+ (id)_defaultTopShadowColor;	// 0x302cca21
- (id)init;	// 0x302ca429
- (id)initWithCoder:(id)coder;	// 0x302ca45d
- (id)initWithFrame:(CGRect)frame;	// 0x302009e9
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x300e6f85
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x300e6f99
- (SEL)_accessoryAction;	// 0x302ccf59
- (id)_accessoryTintColor;	// 0x302cb689
- (id)_accessoryView:(BOOL)view;	// 0x300e7e5d
- (void)_animateFloatingSeparatorForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x301a9531
- (void)_animateInnerShadowForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x301a9971
- (BOOL)_backgroundColorSet;	// 0x300ea0c9
- (float)_backgroundInset;	// 0x300e7d09
- (id)_backgroundView:(BOOL)view;	// 0x300ebe59
- (id)_badge;	// 0x302c9f05
- (id)_badge:(BOOL)badge;	// 0x302ccac9
- (id)_badgeText;	// 0x302cb201
- (BOOL)_canDrawContent;	// 0x300e72ad
- (void)_cancelInternalPerformRequests;	// 0x301a391d
- (void)_clearOpaqueViewState:(id)state;	// 0x301a5e25
- (id)_contentBackgroundColor;	// 0x3014ab19
- (id)_createRemoveControlForStyle:(int)style;	// 0x302c99e9
- (void)_createReorderControlIfNeeded;	// 0x302c92b9
- (id)_currentAccessoryView:(BOOL)view;	// 0x302c9791
- (id)_customAccessoryView:(BOOL)view;	// 0x300ecea1
- (id)_customEditingAccessoryView:(BOOL)view;	// 0x300ed2f1
- (id)_defaultAccessoryView;	// 0x300e7e95
- (id)_defaultFont;	// 0x302c9ebd
- (void)_delayedDeselect;	// 0x30208339
- (CGRect)_delegateConfirmationRect;	// 0x302cb7b5
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x301a5f19
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x301a5dc1
- (void)_deselectAnimationFinished;	// 0x301b6405
- (id)_detailTextLabel;	// 0x3014ac4d
- (id)_detailTextLabel:(BOOL)label;	// 0x300ed4dd
- (void)_didCreateContentView;	// 0x302caf11
- (id)_disclosureImage:(BOOL)image;	// 0x300e9a89
- (id)_disclosurePressedImage:(BOOL)image;	// 0x300e9f35
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x302cb50d
- (void)_drawSeparatorInRect:(CGRect)rect;	// 0x30121641
- (BOOL)_drawsTopSeparatorDuringReordering;	// 0x301be4a5
// declared property getter: - (BOOL)_drawsTopShadow;	// 0x30153f61
- (id)_editableTextField;	// 0x301c26c9
- (id)_editableTextField:(BOOL)field;	// 0x301ff821
- (id)_editingAccessoryView:(BOOL)view;	// 0x300ec4dd
- (float)_editingButtonOffset;	// 0x301a8d15
- (void)_editingTransitionAnimationDidStop:(id)_editingTransitionAnimation finished:(id)finished context:(void *)context;	// 0x301ab6e5
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x302c95f1
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x302c9f7d
- (void)_grabberBeganReorder:(id)reorder;	// 0x301bbcc9
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x301be291
- (void)_grabberReleased:(id)released;	// 0x301be6b1
- (BOOL)_hasAccessoryView;	// 0x301aa04d
- (BOOL)_hasEditingAccessoryView;	// 0x301aa0c5
- (CGSize)_imageInsetSize;	// 0x302c9f6d
- (id)_imageView;	// 0x3010a225
- (id)_imageView:(BOOL)view;	// 0x300ed45d
- (BOOL)_isCurrentlyConsideredHighlighted;	// 0x300ea53d
- (BOOL)_isHighlighted;	// 0x3014abc9
- (BOOL)_isReorderable;	// 0x302ccd49
- (BOOL)_isUsingOldStyleMultiselection;	// 0x302cd23d
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x302c9b49
- (void)_longPressGestureRecognized:(id)recognized;	// 0x302c9fc9
- (void)_menuDismissed:(id)dismissed;	// 0x302ca179
- (id)_multiselectBackgroundColor;	// 0x301a3ea9
- (void)_multiselectColorChanged;	// 0x302cd0f9
// declared property getter: - (BOOL)_needsSetup;	// 0x301ab539
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x302ca281
- (void)_populateArchivedSubviews:(id)subviews;	// 0x302caaed
- (void)_releaseRemoveControl;	// 0x302c9aa5
- (void)_releaseReorderingControl;	// 0x302c9461
- (id)_removeControl;	// 0x300ee101
- (void)_removeFloatingSeparator;	// 0x301ab759
- (void)_removeInnerShadow;	// 0x301ab799
- (void)_removeRemoveControl;	// 0x3015a445
- (id)_reorderControlImage;	// 0x301bbbe1
- (id)_reorderingControl;	// 0x302c93e5
- (id)_reorderingSeparatorView;	// 0x302c9421
- (void)_resetSelectionTimer;	// 0x3015a3e9
- (void)_saveOpaqueViewState:(id)state;	// 0x301a4049
- (id)_scriptingInfo;	// 0x301c23f1
- (id)_selectedBackgroundView:(BOOL)view;	// 0x300ebe69
- (void)_setAccessoryAction:(SEL)action;	// 0x302cce6d
- (void)_setAccessoryTintColor:(id)color;	// 0x302cb601
- (void)_setBadgeText:(id)text;	// 0x302cb1b1
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x3015a381
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)reordering;	// 0x302ca331
// declared property setter: - (void)_setDrawsTopShadow:(BOOL)shadow;	// 0x300ee47d
- (void)_setEditingStyle:(int)style;	// 0x300efe39
- (void)_setFont:(id)font layout:(BOOL)layout;	// 0x301aa155
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x302c9529
- (void)_setHiddenForReuse:(BOOL)reuse;	// 0x302cc959
- (void)_setMultiselecting:(BOOL)multiselecting;	// 0x300efefd
// declared property setter: - (void)_setNeedsSetup:(BOOL)setup;	// 0x300ea70d
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x301a4449
- (void)_setReorderControlImage:(id)image;	// 0x302ccaf5
- (void)_setReordering:(BOOL)reordering;	// 0x301bc3d1
- (void)_setSelectionStyle:(int)style selectionTintColor:(id)color;	// 0x3010a465
- (void)_setShouldIndentWhileEditing:(BOOL)_set;	// 0x300efe51
- (void)_setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x300efee1
- (void)_setShowsReorderControl:(BOOL)control;	// 0x300efe6d
- (void)_setTableBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x300ee129
- (void)_setTableView:(id)view;	// 0x302ccab5
- (void)_setTarget:(id)target;	// 0x302ccd75
- (void)_setupMenuGesture;	// 0x300e8215
- (void)_setupSelectedBackgroundView;	// 0x30135f3d
- (void)_setupTableViewCellCommon;	// 0x300e7429
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x302cd139
- (void)_showReorderControl;	// 0x302c9c0d
- (void)_startToEditTextField;	// 0x302cd0bd
- (void)_syncAccessoryViewsIfNecessary;	// 0x300e993d
- (id)_tableView;	// 0x300e7d65
- (id)_target;	// 0x302cce5d
- (CGSize)_textInsetSize;	// 0x302c9f5d
- (id)_textLabel;	// 0x3014a8c1
- (id)_textLabel:(BOOL)label;	// 0x300ed489
- (id)_tintedDisclosureImagePressed:(BOOL)pressed;	// 0x302c9601
- (id)_titleForDeleteConfirmationButton;	// 0x301bfbad
- (void)_topShadowDidFadeOut;	// 0x302ca13d
- (id)_topShadowView:(BOOL)view;	// 0x300ed4b5
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x302ccb39
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)highlightIgnoringSelection;	// 0x301a3fe1
- (void)_updateContentClip;	// 0x300ea571
- (void)_updateHighlightColors;	// 0x3015a5b9
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x301b55b5
- (void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;	// 0x300e9b49
- (void)_updateSeparatorContent;	// 0x300ed509
- (void)_updateTopShadowView:(BOOL)view;	// 0x300ee4c1
- (void)_willBeDeleted;	// 0x302ccb69
// converted property getter: - (SEL)accessoryAction;	// 0x302cc949
// converted property getter: - (id)accessoryActionSegueTemplate;	// 0x302ca3ad
- (CGRect)accessoryRectForBounds:(CGRect)bounds;	// 0x302cc3d5
// declared property getter: - (int)accessoryType;	// 0x300e8179
// declared property getter: - (id)accessoryView;	// 0x30150381
// converted property getter: - (id)backgroundColor;	// 0x3014ab79
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x302cb85d
// declared property getter: - (id)backgroundView;	// 0x30154b01
// converted property getter: - (id)bottomShadowColor;	// 0x30156151
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x302ca221
// converted property getter: - (BOOL)clipsContents;	// 0x302cb79d
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x302cb911
- (CGRect)contentRectForState:(unsigned)state;	// 0x302cc9c1
// declared property getter: - (id)contentView;	// 0x300e82d1
- (void)copy:(id)copy;	// 0x302ca309
- (unsigned)currentStateMask;	// 0x300ed809
- (void)cut:(id)cut;	// 0x302ca2f5
- (void)dealloc;	// 0x301b5ad5
- (void)deleteConfirmationControlWasCancelled:(id)cancelled;	// 0x302ccc91
- (void)deleteConfirmationControlWasClicked:(id)clicked;	// 0x301c0c89
// declared property getter: - (id)detailTextLabel;	// 0x3014ac39
- (void)didMoveToSuperview;	// 0x300ef3a5
- (void)didTransitionToState:(unsigned)state;	// 0x301a915d
// converted property getter: - (BOOL)drawingEnabled;	// 0x301b7b3d
// converted property getter: - (SEL)editAction;	// 0x302cc84d
- (void)editControlWasClicked:(id)clicked;	// 0x301bf969
- (CGRect)editRectForBounds:(CGRect)bounds;	// 0x302cc395
// declared property getter: - (id)editableTextField;	// 0x301c26b9
// declared property getter: - (int)editingAccessoryType;	// 0x300e9a71
// declared property getter: - (id)editingAccessoryView;	// 0x302cb6c5
- (id)editingData:(BOOL)data;	// 0x300ebd3d
// declared property getter: - (int)editingStyle;	// 0x301341ad
- (void)encodeWithCoder:(id)coder;	// 0x302cab75
// converted property getter: - (id)font;	// 0x302caf45
// converted property getter: - (BOOL)hidesAccessoryWhenEditing;	// 0x302cb749
// converted property getter: - (id)image;	// 0x302cb135
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x302cc209
// declared property getter: - (id)imageView;	// 0x3010a211
// declared property getter: - (int)indentationLevel;	// 0x300ed439
// declared property getter: - (float)indentationWidth;	// 0x300ed449
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x302ccbd1
- (BOOL)isAtLeastHalfSelected;	// 0x302cb4b9
// declared property getter: - (BOOL)isEditing;	// 0x300e9a59
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302f825d
// declared property getter: - (BOOL)isHighlighted;	// 0x30121761
// declared property getter: - (BOOL)isSelected;	// 0x3010a1ed
// converted property getter: - (id)layoutManager;	// 0x300e75f5
- (void)layoutSubviews;	// 0x300ea7b9
// converted property getter: - (int)lineBreakMode;	// 0x302cb061
// declared property getter: - (id)multipleSelectionBackgroundView;	// 0x302cb25d
// declared property getter: - (id)oldEditingData;	// 0x302c9225
- (void)paste:(id)paste;	// 0x302ca31d
- (void)prepareForReuse;	// 0x3015a141
- (CGRect)removeControl:(id)control endFrameForTarget:(id)target;	// 0x302cd00d
- (CGRect)removeControl:(id)control startFrameForTarget:(id)target;	// 0x302ccf6d
- (void)removeControl:(id)control wasCanceledForTarget:(id)target;	// 0x302cd079
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x302ccb91
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x302ccc01
- (void)removeEditingData;	// 0x3015a499
- (void)removeFromSuperview;	// 0x30157991
- (CGRect)reorderRectForBounds:(CGRect)bounds;	// 0x302cc63d
// converted property getter: - (SEL)returnAction;	// 0x302cd2b1
// declared property getter: - (id)reuseIdentifier;	// 0x30157959
// converted property getter: - (id)sectionBorderColor;	// 0x30154d39
// converted property getter: - (int)sectionLocation;	// 0x300e7dd5
// declared property getter: - (id)selectedBackgroundView;	// 0x30135ef1
- (void)selectedBackgroundViewChange:(id)change finished:(id)finished context:(id)context;	// 0x302cb229
// converted property getter: - (id)selectedImage;	// 0x302cb189
// converted property getter: - (id)selectedOverlayView;	// 0x302cb515
// converted property getter: - (id)selectedTextColor;	// 0x302cb0e1
// converted property getter: - (float)selectionFadeDuration;	// 0x301b55a5
- (float)selectionPercent;	// 0x302cb4dd
// converted property getter: - (id)selectionSegueTemplate;	// 0x301a6129
// declared property getter: - (int)selectionStyle;	// 0x30136309
// converted property getter: - (id)selectionTintColor;	// 0x301364c1
// converted property getter: - (id)separatorColor;	// 0x30155bd1
// converted property getter: - (int)separatorStyle;	// 0x30153f4d
// converted property setter: - (void)setAccessoryAction:(SEL)action;	// 0x302cc85d
// converted property setter: - (void)setAccessoryActionSegueTemplate:(id)aTemplate;	// 0x302ca369
// declared property setter: - (void)setAccessoryType:(int)type;	// 0x300e965d
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x30142f65
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x300ea195
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x30154999
// converted property setter: - (void)setBottomShadowColor:(id)color;	// 0x300ee9c5
// converted property setter: - (void)setClipsContents:(BOOL)contents;	// 0x302cb765
// converted property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x301e37e1
// converted property setter: - (void)setEditAction:(SEL)action;	// 0x302cc83d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x301a92fd
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x300ef971
// declared property setter: - (void)setEditingAccessoryType:(int)type;	// 0x30134071
// declared property setter: - (void)setEditingAccessoryView:(id)view;	// 0x301a72f5
- (void)setEditingStyle:(int)style;	// 0x302cb525
// converted property setter: - (void)setFont:(id)font;	// 0x301aa141
- (void)setFrame:(CGRect)frame;	// 0x300e72f9
// converted property setter: - (void)setHidesAccessoryWhenEditing:(BOOL)editing;	// 0x302cb6fd
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x300f0275
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x300f028d
// converted property setter: - (void)setImage:(id)image;	// 0x302cb109
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x301c1979
// declared property setter: - (void)setIndentationWidth:(float)width;	// 0x301c19a1
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x300e75b1
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x302cb01d
// declared property setter: - (void)setMultipleSelectionBackgroundView:(id)view;	// 0x302cb295
// declared property setter: - (void)setOldEditingData:(id)data;	// 0x302c9275
- (void)setPlaceHolderValue:(id)value;	// 0x302cd271
// converted property setter: - (void)setReturnAction:(SEL)action;	// 0x302cd2a1
- (void)setReuseIdentifier:(id)identifier;	// 0x302cb45d
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x300eeab1
// converted property setter: - (void)setSectionLocation:(int)location;	// 0x302cca0d
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x300eecf9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x300effd1
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x300effe9
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x30109e91
- (void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;	// 0x30109ea9
// converted property setter: - (void)setSelectedImage:(id)image;	// 0x302cb15d
// converted property setter: - (void)setSelectedTextColor:(id)color;	// 0x302cb0b5
// converted property setter: - (void)setSelectionFadeDuration:(float)duration;	// 0x300e743d
// converted property setter: - (void)setSelectionSegueTemplate:(id)aTemplate;	// 0x302ca3e5
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x3010a44d
// converted property setter: - (void)setSelectionTintColor:(id)color;	// 0x302cb4a5
// converted property setter: - (void)setSeparatorColor:(id)color;	// 0x300ee2b5
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x300edfd5
// declared property setter: - (void)setShouldIndentWhileEditing:(BOOL)indentWhileEditing;	// 0x302cb589
- (void)setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x301bfa01
// declared property setter: - (void)setShowsReorderControl:(BOOL)control;	// 0x3014b9c1
// converted property setter: - (void)setTableBackgroundColor:(id)color;	// 0x302cb3fd
// converted property setter: - (void)setTableViewStyle:(int)style;	// 0x300e9ff5
// converted property setter: - (void)setTarget:(id)target;	// 0x302cc745
// converted property setter: - (void)setText:(id)text;	// 0x301aa201
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x302cafc9
// converted property setter: - (void)setTextColor:(id)color;	// 0x301aa1b9
// declared property setter: - (void)setTextFieldOffset:(float)offset;	// 0x301ff0f1
// converted property setter: - (void)setTopShadowColor:(id)color;	// 0x300ee3b9
// declared property setter: - (void)setWasSwiped:(BOOL)swiped;	// 0x300efec5
// declared property getter: - (BOOL)shouldIndentWhileEditing;	// 0x301535e5
- (void)showSelectedBackgroundView:(BOOL)view animated:(BOOL)animated;	// 0x301a3961
// declared property getter: - (BOOL)showingDeleteConfirmation;	// 0x300ebd29
// declared property getter: - (BOOL)showsReorderControl;	// 0x3010a3bd
- (int)style;	// 0x300ed4c5
// converted property getter: - (id)tableBackgroundColor;	// 0x30156035
// converted property getter: - (int)tableViewStyle;	// 0x300e79dd
// converted property getter: - (id)target;	// 0x302cc82d
// converted property getter: - (id)text;	// 0x302caf19
// converted property getter: - (int)textAlignment;	// 0x302caff5
// converted property getter: - (id)textColor;	// 0x302cb08d
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x302cd29d
// declared property getter: - (float)textFieldOffset;	// 0x301ff811
// declared property getter: - (id)textLabel;	// 0x3014a8b1
- (CGRect)textRectForContentRect:(CGRect)contentRect;	// 0x302cbd25
// converted property getter: - (id)topShadowColor;	// 0x30154c71
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301a25d5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x301d6e4d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x301a4cb5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3020b111
// declared property getter: - (BOOL)wasSwiped;	// 0x3010a3a5
- (void)willMoveToSuperview:(id)superview;	// 0x300ef0d9
- (void)willTransitionToState:(unsigned)state;	// 0x301a7e71
@end
